%% Save data
in = 1; % CAMBIARE!
fin = 2016;

% Input
T_inp = out.T_inp(in:fin);
P1 = out.P_inp1(in:fin);
P2 = out.P_inp2(in:fin);
P3 = out.P_inp3(in:fin);
P4 = out.P_inp4(in:fin);
P5 = out.P_inp5(in:fin);

% Output
Ts1 = out.Ts_load(in:fin, 1);
Ts2 = out.Ts_load(in:fin, 2);
Ts3 = out.Ts_load(in:fin, 3);
Ts4 = out.Ts_load(in:fin, 4);
Ts5 = out.Ts_load(in:fin, 5);
mfr1 = out.mfr_load(in:fin, 1);
mfr2 = out.mfr_load(in:fin, 2);
mfr3 = out.mfr_load(in:fin, 3);
mfr4 = out.mfr_load(in:fin, 4);
mfr5 = out.mfr_load(in:fin, 5);
Tr1 = out.Tr_load(in:fin, 1);
Tr2 = out.Tr_load(in:fin, 2);
Tr3 = out.Tr_load(in:fin, 3);
Tr4 = out.Tr_load(in:fin, 4);
Tr5 = out.Tr_load(in:fin, 5);
T_rit = out.T_rit(in:fin);
mfr_rit = out.mfr_rit(in:fin);

% Plot
figure
subplot(3,2,1); plot(T_inp, 'LineWidth', 1.1); hold on; legend('T_{inp}'); grid on; hold off
subplot(3,2,2); plot(P1, 'LineWidth', 1.1); hold on; plot(P2, 'LineWidth', 1.1); plot(P3, 'LineWidth', 1.1); plot(P4, 'LineWidth', 1.1); plot(P5, 'LineWidth', 1.1); legend('P_{1}', 'P_{2}', 'P_{3}', 'P_{4}', 'P_{5}'); grid on; hold off
subplot(3,2,3); plot(Ts1, 'LineWidth', 1.1); hold on; plot(Ts2, 'LineWidth', 1.1); plot(Ts3, 'LineWidth', 1.1); plot(Ts4, 'LineWidth', 1.1); plot(Ts5, 'LineWidth', 1.1); legend('T_{s1}','T_{s2}', 'T_{s3}','T_{s4}', 'T_{s5}'); grid on; hold off
subplot(3,2,4); plot(T_rit, 'LineWidth', 1.1); hold on; plot(Tr1, 'LineWidth', 1.1); plot(Tr2, 'LineWidth', 1.1); plot(Tr3, 'LineWidth', 1.1); plot(Tr4, 'LineWidth', 1.1); plot(Tr5, 'LineWidth', 1.1); legend('T_{rit}','T_{r1}','T_{r2}', 'T_{r3}','T_{r4}', 'T_{r5}'); grid on; hold off
subplot(3,2,5.5); plot(mfr1, 'LineWidth', 1.1); hold on; plot(mfr2, 'LineWidth', 1.1); plot(mfr3, 'LineWidth', 1.1); plot(mfr4, 'LineWidth', 1.1); plot(mfr5, 'LineWidth', 1.1); plot(mfr_rit, 'LineWidth', 1.1); legend('mfr_{1}','mfr_{2}', 'mfr_{3}','mfr_{4}', 'mfr_{5}', 'mfr_{rit}'); grid on; hold off

%% Save file
M = [T_inp, P1, P2, P3, P4, P5, Ts1, Ts2, Ts3, Ts4, Ts5, mfr1, mfr2, mfr3, mfr4, mfr5, Tr1, Tr2, Tr3, Tr4, Tr5, T_rit, mfr_rit];
writematrix(M,'csv_files/Aroma_7gg_RealP_fullrange.csv')


%% Create csv for training
data = readtable("csv_files/Aroma_7gg_RealP_fullrange.csv");
u_Tref = table2array(data(1:end,"Var1"));
u_P1 = table2array(data(1:end,"Var2"));
u_P2 = table2array(data(1:end,"Var3"));
u_P3 = table2array(data(1:end,"Var4"));
u_P4 = table2array(data(1:end,"Var5"));
u_P5 = table2array(data(1:end,"Var6"));

y_Ts1 = table2array(data(1:end,"Var7"));
y_Ts2 = table2array(data(1:end,"Var8"));
y_Ts3 = table2array(data(1:end,"Var9"));
y_Ts4 = table2array(data(1:end,"Var10"));
y_Ts5 = table2array(data(1:end,"Var11"));
y_mfr1 = table2array(data(1:end,"Var12"));
y_mfr2 = table2array(data(1:end,"Var13"));
y_mfr3 = table2array(data(1:end,"Var14"));
y_mfr4 = table2array(data(1:end,"Var15"));
y_mfr5 = table2array(data(1:end,"Var16"));
y_Tr1 = table2array(data(1:end,"Var17"));
y_Tr2 = table2array(data(1:end,"Var18"));
y_Tr3 = table2array(data(1:end,"Var19"));
y_Tr4 = table2array(data(1:end,"Var20"));
y_Tr5 = table2array(data(1:end,"Var21"));
y_Tr = table2array(data(1:end,"Var22"));
y_mfr_rit = table2array(data(1:end,"Var23"));

i_train = 1;
f_train = 1414;
i_val = 1415; 
f_val = 1715; 
i_test = 1716;
f_test = 2016;

% TS1, TS2, TS3, TS4, TS5, TR1, TR2, TR3, TR4, TR5, mfr1, mfr2, mfr3, mfr4, mfr5, T_RIT, MFR_RIT
writematrix([u_Tref(i_train:f_train), u_P1(i_train:f_train), u_P2(i_train:f_train), u_P3(i_train:f_train), u_P4(i_train:f_train), u_P5(i_train:f_train), y_Ts1(i_train:f_train), y_Ts2(i_train:f_train), y_Ts3(i_train:f_train), y_Ts4(i_train:f_train), y_Ts5(i_train:f_train), y_Tr1(i_train:f_train), y_Tr2(i_train:f_train), y_Tr3(i_train:f_train), y_Tr4(i_train:f_train), y_Tr5(i_train:f_train), y_mfr1(i_train:f_train), y_mfr2(i_train:f_train), y_mfr3(i_train:f_train), y_mfr4(i_train:f_train), y_mfr5(i_train:f_train), y_Tr(i_train:f_train), y_mfr_rit(i_train:f_train)], 'csv_files/Train_Aroma_7gg_RealP_fullrange.csv')
writematrix([u_Tref(i_val:f_val), u_P1(i_val:f_val), u_P2(i_val:f_val), u_P3(i_val:f_val), u_P4(i_val:f_val), u_P5(i_val:f_val), y_Ts1(i_val:f_val), y_Ts2(i_val:f_val), y_Ts3(i_val:f_val), y_Ts4(i_val:f_val), y_Ts5(i_val:f_val), y_Tr1(i_val:f_val), y_Tr2(i_val:f_val), y_Tr3(i_val:f_val), y_Tr4(i_val:f_val), y_Tr5(i_val:f_val), y_mfr1(i_val:f_val), y_mfr2(i_val:f_val), y_mfr3(i_val:f_val), y_mfr4(i_val:f_val), y_mfr5(i_val:f_val), y_Tr(i_val:f_val), y_mfr_rit(i_val:f_val)], 'csv_files/Val_Aroma_7gg_RealP_fullrange.csv')
writematrix([u_Tref(i_test:f_test), u_P1(i_test:f_test), u_P2(i_test:f_test), u_P3(i_test:f_test), u_P4(i_test:f_test), u_P5(i_test:f_test), y_Ts1(i_test:f_test), y_Ts2(i_test:f_test), y_Ts3(i_test:f_test), y_Ts4(i_test:f_test), y_Ts5(i_test:f_test), y_Tr1(i_test:f_test), y_Tr2(i_test:f_test), y_Tr3(i_test:f_test), y_Tr4(i_test:f_test), y_Tr5(i_test:f_test), y_mfr1(i_test:f_test), y_mfr2(i_test:f_test), y_mfr3(i_test:f_test), y_mfr4(i_test:f_test), y_mfr5(i_test:f_test), y_Tr(i_test:f_test), y_mfr_rit(i_test:f_test)], 'csv_files/Test_Aroma_7gg_RealP_fullrange.csv')

%% Create .mat file
data = readtable("csv_files/Aroma_7gg_RealP_lowconsumption.csv");
T = table2array(data(1:end,"Var1"));
P1 = table2array(data(1:end,"Var2"));
P2 = table2array(data(1:end,"Var5"));
P3 = table2array(data(1:end,"Var3"));
P4 = table2array(data(1:end,"Var4"));
P5 = table2array(data(1:end,"Var6"));
save('Power_lowconsumption.mat', 'T', 'P1','P2', 'P3', 'P4', 'P5')

%%
data = readtable("csv_files/Aroma_7gg_RealP_highconsumption.csv");
T = table2array(data(1:end,"Var1"));
P1 = table2array(data(1:end,"Var2"));
P2 = table2array(data(1:end,"Var5"));
P3 = table2array(data(1:end,"Var3"));
P4 = table2array(data(1:end,"Var4"));
P5 = table2array(data(1:end,"Var6"));
save('Power_highconsumption.mat', 'T', 'P1','P2', 'P3', 'P4', 'P5')

%% Concatenate
csv1 = readtable("csv_files/Train_Aroma_7gg_RealP_lowconsumption.csv");
csv2 = readtable("csv_files/Train_Aroma_7gg_RealP_highconsumption.csv");
csv3 = readtable("csv_files/Train_Aroma_7gg_RealP_fullrange.csv");

allCsv = [csv1;csv2;csv3];
writetable(allCsv, 'Train_Aroma_7gg_RealP_fullrangex3.csv');