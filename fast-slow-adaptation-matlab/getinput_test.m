%% Initial states
xk0 = zeros(18, 1);

%%
xk0 = zeros(36, 1);

%% Input test low consumption
load("MPC_all_PBRNN_20230724_ALB_T070.mat")
T_input1 = zeros(1440, 1);
for i=1:1440
    T_input1(i) = out.Tb_opt(1,1,i).';
end

T_inp_sim = zeros(86400,2);
for i = 1:86400
    T_inp_sim(i,1) = i;
end

k=0;
for j = 1:1440
    for i = 1:60
        T_inp_sim(k+i,2) = T_input1(j)+1;
    end
    k = k + 60;
end

figure; plot(T_inp_sim(:,2))

data = readtable("CaricoTermicoNovate.xlsx");
P1 = table2array(data(2258:2281,"PotenzaTotale"));
P1 = P1*110;
P_inp1 = zeros(86400,2);
P_inp2 = zeros(86400,2);
P_inp3 = zeros(86400,2);
P_inp4 = zeros(86400,2);
P_inp5 = zeros(86400,2);
for i = 1:86400
    P_inp1(i,1) = i;
    P_inp2(i,1) = i;
    P_inp3(i,1) = i;
    P_inp4(i,1) = i;
    P_inp5(i,1) = i;
end
k=0;
for j = 1:24
    for i = 1:3600
        P_inp1(k+i,2) = - 0.11*P1(j)-100000;
        P_inp2(k+i,2) = - 0.34*P1(j)-100000;
        P_inp3(k+i,2) = - 0.08*P1(j)-100000;
        P_inp4(k+i,2) = - 0.38*P1(j)-100000;
        P_inp5(k+i,2) = - 0.09*P1(j)-100000;
    end
    k = k +3600;
end

figure; plot(-1/1000*P_inp1(:,2)); hold on; plot(-1/1000*P_inp2(:,2)); plot(-1/1000*P_inp3(:,2)); plot(-1/1000*P_inp4(:,2)) ; plot(-1/1000*P_inp5(:,2)); grid on


%% Input test high consumption
load("MPC_all_PBRNN30_20230725_ALB_T070.mat")
T_input2 = zeros(1440, 1);
for i=1:1440
    T_input2(i) = out.Tb_opt(1,1,i).';
end

T_inp_sim = zeros(86400,2);
for i = 1:86400
    T_inp_sim(i,1) = i;
end

k=0;
for j = 1:1440
    for i = 1:60
        T_inp_sim(k+i,2) = T_input2(j)+1;
    end
    k = k + 60;
end

figure; plot(T_inp_sim(:,2))

data = readtable("CaricoTermicoNovate.xlsx");
P1 = table2array(data(2282:2305,"PotenzaTotale"));
P1 = P1*91.1;
P_inp1 = zeros(86400,2);
P_inp2 = zeros(86400,2);
P_inp3 = zeros(86400,2);
P_inp4 = zeros(86400,2);
P_inp5 = zeros(86400,2);
for i = 1:86400
    P_inp1(i,1) = i;
    P_inp2(i,1) = i;
    P_inp3(i,1) = i;
    P_inp4(i,1) = i;
    P_inp5(i,1) = i;
end
k=0;
for j = 1:24
    for i = 1:3600
        P_inp1(k+i,2) = - 0.11*P1(j)-150000;
        P_inp2(k+i,2) = - 0.34*P1(j)-150000;
        P_inp3(k+i,2) = - 0.08*P1(j)-150000;
        P_inp4(k+i,2) = - 0.38*P1(j)-150000;
        P_inp5(k+i,2) = - 0.09*P1(j)-150000;
    end
    k = k +3600;
end

figure; plot(-1/1000*P_inp1(:,2)); hold on; plot(-1/1000*P_inp2(:,2)); plot(-1/1000*P_inp3(:,2)); plot(-1/1000*P_inp4(:,2)) ; plot(-1/1000*P_inp5(:,2)); grid on



%% Input 2 days: low and high consumption
load("MPC_all_PBRNN_20230724_ALB_T070.mat")
T_input1 = zeros(1440, 1);
for i=1:1440
    T_input1(i) = out.Tb_opt(1,1,i).';
end

%%
load("MPC_all_PBRNN30_20230725_ALB_T070.mat")
T_input2 = zeros(1440, 1);
for i=1:1440
    T_input2(i) = out.Tb_opt(1,1,i).';
end

T_inp_sim = zeros(172800,2);
for i = 1:172800
    T_inp_sim(i,1) = i;
end

k=0;
for j = 1:1440
    for i = 1:60
        T_inp_sim(k+i,2) = T_input1(j)+1;
    end
    k = k + 60;
end

k=0;
for j = 1:1440
    for i = 1:60
        T_inp_sim(86400+k+i,2) = T_input2(j)+1;
    end
    k = k + 60;
end
figure; plot(T_inp_sim(:,2))

%% Power
data = readtable("CaricoTermicoNovate.xlsx");
P1 = table2array(data(2258:2281,"PotenzaTotale"));
P2 = table2array(data(2282:2305,"PotenzaTotale"));
P1 = P1*110; 
P2 = P2*110; 
P_inp1 = zeros(172800,2);
P_inp2 = zeros(172800,2);
P_inp3 = zeros(172800,2);
P_inp4 = zeros(172800,2);
P_inp5 = zeros(172800,2);
for i = 1:172800
    P_inp1(i,1) = i;
    P_inp2(i,1) = i;
    P_inp3(i,1) = i;
    P_inp4(i,1) = i;
    P_inp5(i,1) = i;
end
k=0;
for j = 1:24
    for i = 1:3600
        P_inp1(k+i,2) = - 0.11*P1(j)-100000;
        P_inp2(k+i,2) = - 0.34*P1(j)-100000;
        P_inp3(k+i,2) = - 0.08*P1(j)-100000;
        P_inp4(k+i,2) = - 0.38*P1(j)-100000;
        P_inp5(k+i,2) = - 0.09*P1(j)-100000;
    end
    k = k +3600;
end
k=0;
for j = 1:24
    for i = 1:3600
        P_inp1(86400+k+i,2) = - 0.11*P2(j)-150000;
        P_inp2(86400+k+i,2) = - 0.34*P2(j)-150000;
        P_inp3(86400+k+i,2) = - 0.08*P2(j)-150000;
        P_inp4(86400+k+i,2) = - 0.38*P2(j)-150000;
        P_inp5(86400+k+i,2) = - 0.09*P2(j)-150000;
    end
    k = k +3600;
end

figure; plot(-1/1000*P_inp1(:,2)); hold on; plot(-1/1000*P_inp2(:,2)); plot(-1/1000*P_inp3(:,2)); plot(-1/1000*P_inp4(:,2)) ; plot(-1/1000*P_inp5(:,2)); grid on


%% Input test mid consumption
load("MPC_all_PBRNN30_20230725_ALB_T070.mat")
T_input2 = zeros(1440, 1);
for i=1:1440
    T_input2(i) = out.Tb_opt(1,1,i).';
end

T_inp_sim = zeros(86400,2);
for i = 1:86400
    T_inp_sim(i,1) = i;
end

k=0;
for j = 1:1440
    for i = 1:60
        T_inp_sim(k+i,2) = T_input2(j)+1;
    end
    k = k + 60;
end

figure; plot(T_inp_sim(:,2))

data = readtable("CaricoTermicoNovate.xlsx");
P1 = table2array(data(2282:2305,"PotenzaTotale"));
P1 = P1*91.1;
P_inp1 = zeros(86400,2);
P_inp2 = zeros(86400,2);
P_inp3 = zeros(86400,2);
P_inp4 = zeros(86400,2);
P_inp5 = zeros(86400,2);
for i = 1:86400
    P_inp1(i,1) = i;
    P_inp2(i,1) = i;
    P_inp3(i,1) = i;
    P_inp4(i,1) = i;
    P_inp5(i,1) = i;
end
k=0;
for j = 1:24
    for i = 1:3600
        P_inp1(k+i,2) = - 0.11*P1(j)-140000;
        P_inp2(k+i,2) = - 0.34*P1(j)-140000;
        P_inp3(k+i,2) = - 0.08*P1(j)-140000;
        P_inp4(k+i,2) = - 0.38*P1(j)-140000;
        P_inp5(k+i,2) = - 0.09*P1(j)-140000;
    end
    k = k +3600;
end

figure; plot(-1/1000*P_inp1(:,2)); hold on; plot(-1/1000*P_inp2(:,2)); plot(-1/1000*P_inp3(:,2)); plot(-1/1000*P_inp4(:,2)) ; plot(-1/1000*P_inp5(:,2)); grid on

%% Constant
k=0;
for j = 1:24
    for i = 1:3600
        P_inp1(k+i,2) = - 0.11*P1(2)-100000;
        P_inp2(k+i,2) = - 0.34*P1(2)-100000;
        P_inp3(k+i,2) = - 0.08*P1(2)-100000;
        P_inp4(k+i,2) = - 0.38*P1(2)-100000;
        P_inp5(k+i,2) = - 0.09*P1(2)-100000;
    end
    k = k +3600;
end