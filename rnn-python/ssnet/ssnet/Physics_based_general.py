import itertools
import torch
from ssnet import nn, data
import numpy as np
from typing import List

class PhysicsNet(nn.StateSpaceNN):

    def __init__(self, batch_first: bool = True, input_scaler: data.SequenceScaler = None, output_scaler: data.SequenceScaler = None):
        
        super(PhysicsNet, self).super_init()

        #self.layers = torch.nn.ModuleList(lyers)

        # RNN ORDER: LOAD1, LOAD4, LOAD2, LOAD3, LOAD5, RETURN

        # The pseudo-incidence matrix contains the information regarding the load network graph, not the overall graph (loads+nodes).
        # Rows = loads (L1,L4,L2,L3,L5). Columns = loads.  LOAD(L1,L4,L2,L3,L5) <==> INDEX(0,1,2,3,4)
        # +1 = load in row i gives information to load in column j, -1 = load in row i receives information from load in column j. 0 = no information exchanged
        Pseudo_Incidence_Matrix =  [[ 0, 0, 1, 0, 0],
                                    [ 0, 0, 0, 1, 1],
                                    [-1, 0, 0, 1, 1],
                                    [ 0,-1,-1, 0, 0],
                                    [ 0,-1,-1, 0, 0]]

        # Set parameters
        self.n_out = [3, 3, 3, 3, 3, 2] # Number of outputs for each layer. Tsi,Tri,qi for the loads (3). Tr and qr for the return network (2)
        neur_coeff = [2/3, 2/3, 2/3, 1, 3/4, 1/2] # coefficients used to compute the number of neurons for each layer, 
                                          # provided the number of inputs (3,3,3,4,4,10)
                                          # 90 neuroni: [3, 3, 3, 5, 4, 2.7]
                                          # 54 neuroni: [2, 2, 2, 3, 2, 1.6]
                                          # 42 neuroni: [4/3, 4/3, 4/3, 10/4, 6/4, 1.4]
                                          # 36 neuroni: [1, 1, 1, 9/4, 5/4, 1.3]
                                          # 30 neuroni: [1, 1, 1, 2, 1, 0.9]
                                          # 20 neuroni: [2/3, 2/3, 2/3, 4/4, 4/4, 6/10]
                                          # 18 neuroni: [2/3, 2/3, 2/3, 1, 3/4, 1/2]
                                          # 10 neuroni: [1/3, 1/3, 1/3, 2/4, 2/4, 3/10]

        self.start_P = 1 # it indicates the first power index in the inp_orig_matrix
        self.start_q = 2 # it indicates the first mass flow rate index in the inp_aux_matrix      

        # Count number of loads in the DHS
        self.n_load = len(Pseudo_Incidence_Matrix)

        # Count overall RNNs needed: number of loads + 1 for the return network
        self.n_rnn = self.n_load + 1
        self.neurons = torch.zeros(self.n_rnn) # initialize number of neurons per each RNN

        # Compute the matrix that contains the information of which load needs which original input. Rows = RNN (L1,L4,L2,L3,L5,RETURN). Columns = original inputs (Tb,P1,P4,P2,P3,P5)
        # 1 = need, 0 = no need, 2 = need the power associated to that load + the sum of the other powers. Return network only needs inputs computed from the previous RNN, hence no original input
        self.inp_orig_matrix = np.zeros([self.n_rnn, self.n_rnn])
        for i in range(len(Pseudo_Incidence_Matrix)):
            count_minus1 = 0 # set the counter of -1 in the pseudo incidence matrix to 0
            for j in range(len(Pseudo_Incidence_Matrix[i])):
                if (Pseudo_Incidence_Matrix[i][j] == -1): 
                    count_minus1 = count_minus1 + 1
            if count_minus1 == 0: # if the load does not have an incoming branch (does not contain -1 in its row), than it needs the boiler temperature as input
                self.inp_orig_matrix[i][0] = 1
        k = self.start_P
        for i in range(self.n_load):
            self.inp_orig_matrix[i][k] = 2 # if the index i corresponds to a load, then insert 2 in the position associated to its power: it accounts both for its power and the sum of the others
            k = k + 1
        # print(self.inp_orig_matrix)
        # self.inp_orig_matrix =   [[1, 2, 0, 0, 0, 0],
        #                           [1, 0, 2, 0, 0, 0], 
        #                           [0, 0, 0, 2, 0, 0],
        #                           [0, 0, 0, 0, 2, 0],
        #                           [0, 0, 0, 0, 0, 2],
        #                           [0, 0, 0, 0, 0, 0]]

        # Compute the matrix that contains the information of which RNN needs which auxiliary input.
        # Rows = RNN (L1, L4, L2, L3, L5, RETURN). Columns = auxiliary inputs (Ts1,Tr1,q1, Ts4,Tr4,q4, Ts2,Tr2,q2, Ts3,Tr3,q3 Ts5,Tr5,q5)
        # 1 = need, 0 = no need. Ex: L1 does not need any auxiliary input, L3 and L5 need 2 auxiliary inputs, i.e. Ts4, Ts2 (their previous loads supply temperature).
        # Return needs Tr1,Tr4,Tr2,Tr3,Tr5, mfr1,mfr2,mfr3,mfr4,mfr5
        self.inp_aux_matrix = np.zeros([self.n_rnn, self.n_load*self.n_out[0]])
        # Loads network
        for i in range(len(Pseudo_Incidence_Matrix)):
            for j in range(len(Pseudo_Incidence_Matrix[i])):
                if (Pseudo_Incidence_Matrix[i][j] == -1):
                    self.inp_aux_matrix[i][3*j] = 1 # if the pseudo incidence matrix contain a -1, it means that the current load (i) needs the supply temperature linked to that index (j). Supply temperatures are in indexes multiple of 3 in the output matrix
        # Return network computed apart
        ind = 1
        for i in range(self.n_load):
            self.inp_aux_matrix[self.n_load][ind] = 1 # Return network needs all Tri
            self.inp_aux_matrix[self.n_load][ind+1] = 1
            ind = ind + self.n_out[0]
        # self.inp_aux_matrix[self.n_load][len(self.inp_aux_matrix[0])-1] = 1 # Return network needs Sum(qi)), which is in the last column
        # print(self.inp_aux_matrix)     
        # self.inp_aux_matrix = [[0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
        #                        [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
        #                        [1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
        #                        [0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0],
        #                        [0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0],
        #                        [0, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1]]
               
        # Compute the dimension of the overall output
        self.dim_yk_tot = 0
        for n in range(self.n_rnn):
            self.dim_yk_tot = self.dim_yk_tot + self.n_out[n]

        # Compute the dimension of the auxiliary input matrix yk_aux, made of [Ts1,Tr1,q1, Ts4,Tr4,q4, Ts2,Tr2,q2, Ts3,Tr3,q3 Ts5,Tr5,q5], i.e. the outputs of the RNNs
        self.dim_yk_aux = len(self.inp_aux_matrix[0])

        # Initiliaze the vector that counts how many inputs are needed for each RNN, in total
        self.input_counter_tot = torch.zeros(self.n_rnn)

        # Initialize the GRU
        nnlist = [ None ] * self.n_rnn
        linlist =  [ None ] * self.n_rnn
        self.n_states = [ 0 ] * self.n_rnn

        # Initialize the list of indexes of the original and auxiliary inputs which the RNNs must be fed with
        self.index_inp_orig = []
        self.index_inp_aux = []

        for i in range(self.n_rnn):
            # Define the counter vector
            for k in range(len(self.inp_orig_matrix[i])):
                self.input_counter_tot[i] = self.input_counter_tot[i] + self.inp_orig_matrix[i][k]
            for j in range(len(self.inp_aux_matrix[i])):
                self.input_counter_tot[i] = self.input_counter_tot[i] + self.inp_aux_matrix[i][j]

            # Define how many neurons are necessary for each RNN, depending on the number of inputs
            self.neurons[i] = neur_coeff[i] * self.input_counter_tot[i]

            # Define GRU
            nnlist[i] = nn.StateSpaceGRU(in_features=int(self.input_counter_tot[i]), units=int(self.neurons[i]))
            linlist[i] = torch.nn.Linear(in_features=int(self.neurons[i]), out_features=self.n_out[i])
            self.n_states[i] = int(self.neurons[i])

            # Define the index lists: select only the indexes of the inputs which the current RNN must be fed with, both original and auxiliary
            self.index_inp_orig.append([])
            for j in range(len(self.inp_orig_matrix[i])):
                if self.inp_orig_matrix[i][j] != 0:
                    self.index_inp_orig[i].append(j)
        
            self.index_inp_aux.append([])
            for l in range(len(self.inp_aux_matrix[i])): # -1: do not need the last index since it represents the Sum(qi)
                if self.inp_aux_matrix[i][l] != 0:
                    self.index_inp_aux[i].append(l)
        
        # Transform into ModuleList
        self.nn = torch.nn.ModuleList(nnlist)
        self.lin = torch.nn.ModuleList(linlist)
        self.layers = list(itertools.chain.from_iterable(zip(self.nn, self.lin)))

        # Initialize layers
        self.cell_states = [0 for x in range(2*self.n_rnn)]
        for i in range(self.n_rnn):
            self.cell_states[2*i] = int(self.neurons[i]) # [neurons, 0, neurons, 0, ...]
        self.n_layers = 2*self.n_rnn

        self.batch_first = batch_first
        self.optimizer = None
        self.input_scaler = input_scaler
        self.output_scaler = output_scaler
        self.trainable = True

    def _recurrence(self, u: torch.Tensor, x0):
        
        # Initialization
        x0 = torch.split(x0, self.cell_states, dim=1)
        xkp_tot = [None] * self.n_layers
        
        yk_aux = torch.zeros(u.shape[0], self.dim_yk_aux)
        yk_tot = torch.zeros(u.shape[0], self.dim_yk_tot)

        # Counter for number of outputs
        v = 0

        for i in range(self.n_rnn):
            
            # Compute the original inputs which the current RNN must be fed with
            u_original = u[:, self.index_inp_orig[i]]
            # Compute the auxiliary inputs which the current RNN must be fed with
            u_aux = yk_aux[:, self.index_inp_aux[i]]

            if i == self.n_rnn-1: # in case of the return network
                # # Compute the sum of the return mass flow rates
                # u_q = torch.zeros(u.shape[0], 1)
                # for j in range(self.start_q, self.dim_yk_aux, self.n_out[0]):
                #     u_q = u_q + yk_aux[:, torch.tensor([j], dtype=torch.long)]
                # Overall input for return layer: Tri and qi
                uk = torch.cat([u_aux], dim=-1) #u_q

            else: # in case of loads
                # Compute the sum of the other powers
                u_P = torch.zeros(u.shape[0], 1)
                for j in range(self.start_P, len(self.inp_orig_matrix[i])):
                    if (j-self.start_P) != i: # discard its own power in the sum
                        u_P = u_P + u[:, torch.tensor([j], dtype=torch.long)]
                # Overall input: original + auxiliary + Sum(Pj, j=/=i)
                uk = torch.cat([u_original, u_aux, u_P], dim=-1)
        
            # Apply GRU and linear transformation
            _, xkp = self.nn[i](uk, x0[2*i])
            yk = self.lin[i](x0[2*i])

            if i != self.n_rnn-1: # in case of loads, save the outputs as auxiliary inputs for the next RNNs
                yk_aux[:, v : v+self.n_out[i]] = yk.squeeze()

            # Save the overall output both in case of loads and in case of return
            yk_tot[:, v : v+self.n_out[i]] = yk.squeeze()
            v = v + self.n_out[i]
            
            # Save the overall state
            xkp_tot[2*i] = xkp
            xkp_tot[2*i+1] = torch.zeros_like(x0[2*i+1])

        # Concatenate overall output and state
        yk_ret = torch.cat([yk_tot], dim=-1)
        xkp_ret = torch.cat(xkp_tot, dim=1)
        
        return yk_ret, xkp_ret
    
    # def iss_residuals(self):
    #     return []

    # def deltaiss_residuals(self):
    #     return []

    def save_model(self, path):
        raise NotImplementedError

    @staticmethod
    def load_model(path, disable_training):
        raise NotImplementedError