%% 0. Get data reference
in = 25;
fin = 2016;
T_inp_sampled = out.Tinp(in:fin);
P1_sampled = out.P_inp1(in:fin);
P2_sampled = out.P_inp4(in:fin);
P3_sampled = out.P_inp2(in:fin);
P4_sampled = out.P_inp3(in:fin);
P5_sampled = out.P_inp5(in:fin);

% Ts1_lowcons = zeros(1992,1);
% Ts2_lowcons = zeros(1992,1);
% Ts3_lowcons = zeros(1992,1);
% Ts4_lowcons = zeros(1992,1);
% Ts5_lowcons = zeros(1992,1);
% Tr1_lowcons = zeros(1992,1);
% Tr2_lowcons = zeros(1992,1);
% Tr3_lowcons = zeros(1992,1);
% Tr4_lowcons = zeros(1992,1);
% Tr5_lowcons = zeros(1992,1);
% mfr1_lowcons = zeros(1992,1);
% mfr2_lowcons = zeros(1992,1);
% mfr3_lowcons = zeros(1992,1);
% mfr4_lowcons = zeros(1992,1);
% mfr5_lowcons = zeros(1992,1);
% Tr_lowcons = zeros(1992,1);
% mfr_lowcons = zeros(1992,1);

Ts1_comb = zeros(1992,1);
Ts2_comb = zeros(1992,1);
Ts3_comb = zeros(1992,1);
Ts4_comb = zeros(1992,1);
Ts5_comb = zeros(1992,1);
Tr1_comb = zeros(1992,1);
Tr2_comb = zeros(1992,1);
Tr3_comb = zeros(1992,1);
Tr4_comb = zeros(1992,1);
Tr5_comb = zeros(1992,1);
mfr1_comb = zeros(1992,1);
mfr2_comb = zeros(1992,1);
mfr3_comb = zeros(1992,1);
mfr4_comb = zeros(1992,1);
mfr5_comb = zeros(1992,1);
Tr_comb = zeros(1992,1);
mfr_comb = zeros(1992,1);

for i=25:2016
    % Ts1_lowcons(i-24) = out.y_lowcons(1,1,i);
    % Tr1_lowcons(i-24) = out.y_lowcons(2,1,i);
    % mfr1_lowcons(i-24) = out.y_lowcons(3,1,i);
    % Ts2_lowcons(i-24) = out.y_lowcons(4,1,i);
    % Tr2_lowcons(i-24) = out.y_lowcons(5,1,i);
    % mfr2_lowcons(i-24) = out.y_lowcons(6,1,i);
    % Ts3_lowcons(i-24) = out.y_lowcons(7,1,i);
    % Tr3_lowcons(i-24) = out.y_lowcons(8,1,i);
    % mfr3_lowcons(i-24) = out.y_lowcons(9,1,i);
    % Ts4_lowcons(i-24) = out.y_lowcons(10,1,i);
    % Tr4_lowcons(i-24) = out.y_lowcons(11,1,i);
    % mfr4_lowcons(i-24) = out.y_lowcons(12,1,i);
    % Ts5_lowcons(i-24) = out.y_lowcons(13,1,i);
    % Tr5_lowcons(i-24) = out.y_lowcons(14,1,i);
    % mfr5_lowcons(i-24) = out.y_lowcons(15,1,i);
    % Tr_lowcons(i-24) = out.y_lowcons(16,1,i);
    % mfr_lowcons(i-24) = out.y_lowcons(17,1,i);

    Ts1_comb(i-24) = out.y_comb(1,1,i);
    Tr1_comb(i-24) = out.y_comb(2,1,i);
    mfr1_comb(i-24) = out.y_comb(3,1,i);
    Ts2_comb(i-24) = out.y_comb(4,1,i);
    Tr2_comb(i-24) = out.y_comb(5,1,i);
    mfr2_comb(i-24) = out.y_comb(6,1,i);
    Ts3_comb(i-24) = out.y_comb(7,1,i);
    Tr3_comb(i-24) = out.y_comb(8,1,i);
    mfr3_comb(i-24) = out.y_comb(9,1,i);
    Ts4_comb(i-24) = out.y_comb(10,1,i);
    Tr4_comb(i-24) = out.y_comb(11,1,i);
    mfr4_comb(i-24) = out.y_comb(12,1,i);
    Ts5_comb(i-24) = out.y_comb(13,1,i);
    Tr5_comb(i-24) = out.y_comb(14,1,i);
    mfr5_comb(i-24) = out.y_comb(15,1,i);
    Tr_comb(i-24) = out.y_comb(16,1,i);
    mfr_comb(i-24) = out.y_comb(17,1,i);
end

Ts1_plant = out.y_plant(in:fin,1);
Ts2_plant = out.y_plant(in:fin,4);
Ts3_plant = out.y_plant(in:fin,2);
Ts4_plant = out.y_plant(in:fin,3);
Ts5_plant = out.y_plant(in:fin,5);
Tr1_plant = out.y_plant(in:fin,6);
Tr2_plant = out.y_plant(in:fin,9);
Tr3_plant = out.y_plant(in:fin,7);
Tr4_plant = out.y_plant(in:fin,8);
Tr5_plant = out.y_plant(in:fin,10);
mfr1_plant = out.y_plant(in:fin,11);
mfr2_plant = out.y_plant(in:fin,14);
mfr3_plant = out.y_plant(in:fin,12);
mfr4_plant = out.y_plant(in:fin,13);
mfr5_plant = out.y_plant(in:fin,15);
Tr_plant = out.y_plant(in:fin,16);
mfr_plant = out.y_plant(in:fin,17);

%% Error
% e1 = Ts1_plant - Ts1_lowcons;
% e2 = Ts2_plant - Ts2_lowcons;
% e3 = Ts3_plant - Ts3_lowcons;
% e4 = Ts4_plant - Ts4_lowcons;
% e5 = Ts5_plant - Ts5_lowcons;
% e6 = Tr1_plant - Tr1_lowcons;
% e7 = Tr2_plant - Tr2_lowcons;
% e8 = Tr3_plant - Tr3_lowcons;
% e9 = Tr4_plant - Tr4_lowcons;
% e10 = Tr5_plant - Tr5_lowcons;
% e11 = mfr1_plant - mfr1_lowcons;
% e12 = mfr2_plant - mfr2_lowcons;
% e13 = mfr3_plant - mfr3_lowcons;
% e14 = mfr4_plant - mfr4_lowcons;
% e15 = mfr5_plant - mfr5_lowcons;
% e16 = Tr_plant - Tr_lowcons;
% e17 = mfr_plant - mfr_lowcons;

e1 = Ts1_plant - Ts1_comb;
e2 = Ts2_plant - Ts2_comb;
e3 = Ts3_plant - Ts3_comb;
e4 = Ts4_plant - Ts4_comb;
e5 = Ts5_plant - Ts5_comb;
e6 = Tr1_plant - Tr1_comb;
e7 = Tr2_plant - Tr2_comb;
e8 = Tr3_plant - Tr3_comb;
e9 = Tr4_plant - Tr4_comb;
e10 = Tr5_plant - Tr5_comb;
e11 = mfr1_plant - mfr1_comb;
e12 = mfr2_plant - mfr2_comb;
e13 = mfr3_plant - mfr3_comb;
e14 = mfr4_plant - mfr4_comb;
e15 = mfr5_plant - mfr5_comb;
e16 = Tr_plant - Tr_comb;
e17 = mfr_plant - mfr_comb;


%% Save
M = [T_inp_sampled, P1_sampled, P2_sampled, P3_sampled, P4_sampled, P5_sampled, e1,e2,e3,e4,e5,e6,e7,e8,e9,e10,e11,e12,e13,e14,e15,e16,e17];
writematrix(M, 'csv_files/Train_highlowcons_comb_u_e.csv')


%% 1. Dati riferimento

%% Low consumption
data_lowcons = readtable("csv_files/Train_lowcons_u_e.csv");
T_ref = table2array(data_lowcons(1:end,"Var1"));
P1_ref = table2array(data_lowcons(1:end,"Var2"));
P2_ref = table2array(data_lowcons(1:end,"Var3"));
P3_ref = table2array(data_lowcons(1:end,"Var4"));
P4_ref = table2array(data_lowcons(1:end,"Var5"));
P5_ref = table2array(data_lowcons(1:end,"Var6"));
e1 = table2array(data_lowcons(1:end,"Var7"));
e2 = table2array(data_lowcons(1:end,"Var8"));
e3 = table2array(data_lowcons(1:end,"Var9"));
e4 = table2array(data_lowcons(1:end,"Var10"));
e5 = table2array(data_lowcons(1:end,"Var11"));
e6 = table2array(data_lowcons(1:end,"Var12"));
e7 = table2array(data_lowcons(1:end,"Var13"));
e8 = table2array(data_lowcons(1:end,"Var14"));
e9 = table2array(data_lowcons(1:end,"Var15"));
e10 = table2array(data_lowcons(1:end,"Var16"));
e11 = table2array(data_lowcons(1:end,"Var17"));
e12 = table2array(data_lowcons(1:end,"Var18"));
e13 = table2array(data_lowcons(1:end,"Var19"));
e14 = table2array(data_lowcons(1:end,"Var20"));
e15 = table2array(data_lowcons(1:end,"Var21"));
e16 = table2array(data_lowcons(1:end,"Var22"));
e17 = table2array(data_lowcons(1:end,"Var23"));
u_ref_lowcons = [T_ref P1_ref P2_ref P3_ref P4_ref P5_ref];
e_ref_lowcons = [e1 e2 e3 e4 e5 e6 e7 e8 e9 e10 e11 e12 e13 e14 e15 e16 e17];

% Normalization
input_scaler_file = load("input_scaler_file_lowconsumption.mat");
input_scaler_file = input_scaler_file.input_scaler_file;
u_ref_lowcons = (u_ref_lowcons  - input_scaler_file.input_scaler.bias) ./ (input_scaler_file.input_scaler.scale);

error_scaler_bias_low = [mean(e1), mean(e2), mean(e3), mean(e4), mean(e5), mean(e6), mean(e7), mean(e8), mean(e9), mean(e10), mean(e11), mean(e12), mean(e13), mean(e14), mean(e15), mean(e16), mean(e17)];
error_scaler_scale_low = [max(abs(e1 - mean(e1))), max(abs(e2 - mean(e2))), max(abs(e3 - mean(e3))), max(abs(e4 - mean(e4))), max(abs(e5 - mean(e5))), max(abs(e6 - mean(e6))), max(abs(e7 - mean(e7))), max(abs(e8 - mean(e8))), max(abs(e9 - mean(e9))), max(abs(e10 - mean(e10))), max(abs(e11 - mean(e11))), max(abs(e12 - mean(e12))), max(abs(e13 - mean(e13))), max(abs(e14 - mean(e14))), max(abs(e15 - mean(e15))), max(abs(e16 - mean(e16))), max(abs(e17 - mean(e17)))];
e_ref_lowcons = (e_ref_lowcons  - error_scaler_bias_low) ./ error_scaler_scale_low;

%% High consumption
data_highcons = readtable("csv_files/Aroma_7gg_RealP_highconsumption.csv");
T_ref = table2array(data_highcons(25:end,"Var1"));
P1_ref = table2array(data_highcons(25:end,"Var2"));
P2_ref = table2array(data_highcons(25:end,"Var5"));
P3_ref = table2array(data_highcons(25:end,"Var3"));
P4_ref = table2array(data_highcons(25:end,"Var4"));
P5_ref = table2array(data_highcons(25:end,"Var6"));
u_ref_highcons = [T_ref P1_ref P2_ref P3_ref P4_ref P5_ref];


%% High and low consumption
data_highlowcons = readtable("csv_files/Train_highlowcons_comb_u_e.csv");
e1 = table2array(data_highlowcons(1:end,"Var7"));
e2 = table2array(data_highlowcons(1:end,"Var8"));
e3 = table2array(data_highlowcons(1:end,"Var9"));
e4 = table2array(data_highlowcons(1:end,"Var10"));
e5 = table2array(data_highlowcons(1:end,"Var11"));
e6 = table2array(data_highlowcons(1:end,"Var12"));
e7 = table2array(data_highlowcons(1:end,"Var13"));
e8 = table2array(data_highlowcons(1:end,"Var14"));
e9 = table2array(data_highlowcons(1:end,"Var15"));
e10 = table2array(data_highlowcons(1:end,"Var16"));
e11 = table2array(data_highlowcons(1:end,"Var17"));
e12 = table2array(data_highlowcons(1:end,"Var18"));
e13 = table2array(data_highlowcons(1:end,"Var19"));
e14 = table2array(data_highlowcons(1:end,"Var20"));
e15 = table2array(data_highlowcons(1:end,"Var21"));
e16 = table2array(data_highlowcons(1:end,"Var22"));
e17 = table2array(data_highlowcons(1:end,"Var23"));
e_ref_highlowcons = [e1 e2 e3 e4 e5 e6 e7 e8 e9 e10 e11 e12 e13 e14 e15 e16 e17];

% Normalization
input_scaler_file = load("input_scaler_file_highconsumption.mat");
input_scaler_file = input_scaler_file.input_scaler_file;
u_ref_highcons = (u_ref_highcons  - input_scaler_file.input_scaler.bias) ./ (input_scaler_file.input_scaler.scale);

error_scaler_bias_highlowcons = [mean(e1), mean(e2), mean(e3), mean(e4), mean(e5), mean(e6), mean(e7), mean(e8), mean(e9), mean(e10), mean(e11), mean(e12), mean(e13), mean(e14), mean(e15), mean(e16), mean(e17)];
error_scaler_scale_highlowcons = [max(abs(e1 - mean(e1))), max(abs(e2 - mean(e2))), max(abs(e3 - mean(e3))), max(abs(e4 - mean(e4))), max(abs(e5 - mean(e5))), max(abs(e6 - mean(e6))), max(abs(e7 - mean(e7))), max(abs(e8 - mean(e8))), max(abs(e9 - mean(e9))), max(abs(e10 - mean(e10))), max(abs(e11 - mean(e11))), max(abs(e12 - mean(e12))), max(abs(e13 - mean(e13))), max(abs(e14 - mean(e14))), max(abs(e15 - mean(e15))), max(abs(e16 - mean(e16))), max(abs(e17 - mean(e17)))];
e_ref_highlowcons = (e_ref_highlowcons  - error_scaler_bias_highlowcons) ./ error_scaler_scale_highlowcons;


%% 2. Mahalanobis riferimento
% low
t2_ref_lowcons_u = mahal(u_ref_lowcons(1:round(size(u_ref_lowcons,1)/2),:), u_ref_lowcons(round(size(u_ref_lowcons,1)/2)+1:end,:));
UCL_percentile_0027_lowcons_u = prctile(t2_ref_lowcons_u, 99.73);
figure('DefaultAxesFontSize',52); plot(t2_ref_lowcons_u,'LineWidth',7, 'Color', "#4DBEEE"); hold on; plot(UCL_percentile_0027_lowcons_u*ones(size(t2_ref_lowcons_u)), 'LineWidth', 7, 'Color', "#A2142F"); xlabel('Samples', 'interpreter', 'latex'); ylabel('$T^2(u_{test}^{[1]}, u_{ref}^{[1]})$', 'interpreter', 'latex'); xlim([1 size(t2_ref_lowcons_u,1)]); box off;

t2_ref_lowcons_e = mahal(e_ref_lowcons(1:round(size(e_ref_lowcons,1)/2),:), e_ref_lowcons(round(size(e_ref_lowcons,1)/2)+1:end,:));
UCL_percentile_0027_lowcons_e = prctile(t2_ref_lowcons_e, 99.73);
figure('DefaultAxesFontSize',52); plot(t2_ref_lowcons_e,'LineWidth',7, 'Color', "#4DBEEE"); hold on; plot(UCL_percentile_0027_lowcons_e*ones(size(t2_ref_lowcons_e)), 'LineWidth', 7, 'Color', "#A2142F"); xlabel('Samples', 'interpreter', 'latex'); ylabel('$T^2(e_{s,test}, e_{s,ref})$', 'interpreter', 'latex'); xlim([1 size(t2_ref_lowcons_e,1)]); box off;

%% high
t2_ref_highcons_u = mahal(u_ref_highcons(1:round(size(u_ref_highcons,1)/2),:), u_ref_highcons(round(size(u_ref_highcons,1)/2)+1:end,:));
UCL_percentile_0027_highcons_u = prctile(t2_ref_highcons_u, 99.73);
figure('DefaultAxesFontSize',52); plot(t2_ref_highcons_u,'LineWidth',7, 'Color', "#4DBEEE"); hold on; plot(UCL_percentile_0027_highcons_u*ones(size(t2_ref_highcons_u)), 'LineWidth', 7, 'Color', "#A2142F"); xlabel('Samples', 'interpreter', 'latex'); ylabel('$T^2(u_{test}^{[2]}, u_{ref}^{[2]})$', 'interpreter', 'latex'); xlim([1 size(t2_ref_highcons_u,1)]); box off;

% low and high
t2_ref_highlowcons_e = mahal(e_ref_highlowcons(1:round(size(e_ref_highlowcons,1)/2),:), e_ref_highlowcons(round(size(e_ref_highlowcons,1)/2)+1:end,:));
UCL_percentile_0027_highlowcons_e = prctile(t2_ref_highlowcons_e, 99.73);
figure('DefaultAxesFontSize',52); plot(t2_ref_highlowcons_e,'LineWidth',7, 'Color', "#4DBEEE"); hold on; plot(UCL_percentile_0027_highlowcons_e*ones(size(t2_ref_highlowcons_e)), 'LineWidth', 7, 'Color', "#A2142F"); xlabel('Samples', 'interpreter', 'latex'); ylabel('$T^2(e_{s,test}, e_{s,ref})$', 'interpreter', 'latex'); xlim([1 size(t2_ref_highlowcons_e,1)]); box off;


%% 3. Dati nuovi: low/high consumption
data_test = readtable("csv_files/Simulation_1gg_highconsumption_modellowcons.csv");

T_test = table2array(data_test(1:end,"Var1"));
P1_test = table2array(data_test(1:end,"Var2"));
P2_test = table2array(data_test(1:end,"Var3"));
P3_test = table2array(data_test(1:end,"Var4"));
P4_test = table2array(data_test(1:end,"Var5"));
P5_test = table2array(data_test(1:end,"Var6"));
u_test_low = [T_test P1_test P2_test P3_test P4_test P5_test];

y_plant1 = table2array(data_test(1:end,"Var7"));
y_plant2 = table2array(data_test(1:end,"Var8"));
y_plant3 = table2array(data_test(1:end,"Var9"));
y_plant4 = table2array(data_test(1:end,"Var10"));
y_plant5 = table2array(data_test(1:end,"Var11"));
y_plant6 = table2array(data_test(1:end,"Var12"));
y_plant7 = table2array(data_test(1:end,"Var13"));
y_plant8 = table2array(data_test(1:end,"Var14"));
y_plant9 = table2array(data_test(1:end,"Var15"));
y_plant10 = table2array(data_test(1:end,"Var16"));
y_plant11 = table2array(data_test(1:end,"Var17"));
y_plant12 = table2array(data_test(1:end,"Var18"));
y_plant13 = table2array(data_test(1:end,"Var19"));
y_plant14 = table2array(data_test(1:end,"Var20"));
y_plant15 = table2array(data_test(1:end,"Var21"));
y_plant16 = table2array(data_test(1:end,"Var22"));
y_plant17 = table2array(data_test(1:end,"Var23"));
y_lowcons1 = table2array(data_test(1:end,"Var24"));
y_lowcons2 = table2array(data_test(1:end,"Var25"));
y_lowcons3 = table2array(data_test(1:end,"Var26"));
y_lowcons4 = table2array(data_test(1:end,"Var27"));
y_lowcons5 = table2array(data_test(1:end,"Var28"));
y_lowcons6 = table2array(data_test(1:end,"Var29"));
y_lowcons7 = table2array(data_test(1:end,"Var30"));
y_lowcons8 = table2array(data_test(1:end,"Var31"));
y_lowcons9 = table2array(data_test(1:end,"Var32"));
y_lowcons10 = table2array(data_test(1:end,"Var33"));
y_lowcons11 = table2array(data_test(1:end,"Var34"));
y_lowcons12 = table2array(data_test(1:end,"Var35"));
y_lowcons13 = table2array(data_test(1:end,"Var36"));
y_lowcons14 = table2array(data_test(1:end,"Var37"));
y_lowcons15 = table2array(data_test(1:end,"Var38"));
y_lowcons16 = table2array(data_test(1:end,"Var39"));
y_lowcons17 = table2array(data_test(1:end,"Var40"));
e1_lowcons = y_plant1 - y_lowcons1;
e2_lowcons = y_plant2 - y_lowcons2;
e3_lowcons = y_plant3 - y_lowcons3;
e4_lowcons = y_plant4 - y_lowcons4;
e5_lowcons = y_plant5 - y_lowcons5;
e6_lowcons = y_plant6 - y_lowcons6;
e7_lowcons = y_plant7 - y_lowcons7;
e8_lowcons = y_plant8 - y_lowcons8;
e9_lowcons = y_plant9 - y_lowcons9;
e10_lowcons = y_plant10 - y_lowcons10;
e11_lowcons = y_plant11 - y_lowcons11;
e12_lowcons = y_plant12 - y_lowcons12;
e13_lowcons = y_plant13 - y_lowcons13;
e14_lowcons = y_plant14 - y_lowcons14;
e15_lowcons = y_plant15 - y_lowcons15;
e16_lowcons = y_plant16 - y_lowcons16;
e17_lowcons = y_plant17 - y_lowcons17;
e_test_lowcons = [e1_lowcons e2_lowcons e3_lowcons e4_lowcons e5_lowcons e6_lowcons e7_lowcons e8_lowcons e9_lowcons e10_lowcons e11_lowcons e12_lowcons e13_lowcons e14_lowcons e15_lowcons e16_lowcons e17_lowcons];

% Normalization
input_scaler_file = load("input_scaler_file_lowconsumption.mat");
input_scaler_file = input_scaler_file.input_scaler_file;
u_test_low = (u_test_low  - input_scaler_file.input_scaler.bias) ./ (input_scaler_file.input_scaler.scale);
e_test_lowcons = (e_test_lowcons  - error_scaler_bias_low) ./ error_scaler_scale_low;

%% 4. Compute T2
% Test lowcons
t2_test_lowcons_u = mahal(u_test_low, u_ref_lowcons(round(size(u_ref_lowcons,1)/2)+1:end,:));
t2_test_lowcons_e = mahal(e_test_lowcons, e_ref_lowcons(round(size(e_ref_lowcons,1)/2)+1:end,:));

% Compare with reference limit
figure('DefaultAxesFontSize',52); plot(t2_test_lowcons_e,'LineWidth',7, 'Color', "#4DBEEE"); hold on; plot(UCL_percentile_0027_lowcons_e*ones(size(t2_test_lowcons_e)), 'LineWidth', 7, 'Color', "#A2142F"); xlabel('Samples', 'interpreter', 'latex'); ylabel('$T^2(\tilde{e}_s, e_{s,ref})$', 'interpreter', 'latex'); xlim([1 size(t2_test_lowcons_e, 1)]); box off;
figure('DefaultAxesFontSize',52); plot(t2_test_lowcons_u,'LineWidth',7, 'Color', "#4DBEEE"); hold on; plot(UCL_percentile_0027_lowcons_u*ones(size(t2_test_lowcons_u)), 'LineWidth', 7, 'Color', "#A2142F"); xlabel('Samples', 'interpreter', 'latex'); ylabel('$T^2(\tilde{u}, u_{ref}^{[1]})$', 'interpreter', 'latex'); xlim([1 size(t2_test_lowcons_u, 1)]); box off;


%% 5. Dati nuovi: ensemble
data_test = readtable("csv_files/Simulation_2gg_modelcombined_lowandhighcons.csv");

T_test = table2array(data_test(1:end,"Var1"));
P1_test = table2array(data_test(1:end,"Var2"));
P2_test = table2array(data_test(1:end,"Var3"));
P3_test = table2array(data_test(1:end,"Var4"));
P4_test = table2array(data_test(1:end,"Var5"));
P5_test = table2array(data_test(1:end,"Var6"));
u_test = [T_test P1_test P2_test P3_test P4_test P5_test];
u_test_1 = u_test(1:265,:); % low consumption
u_test_2 = u_test(266:end,:); % high consumption

y_plant1 = table2array(data_test(1:end,"Var7"));
y_plant2 = table2array(data_test(1:end,"Var8"));
y_plant3 = table2array(data_test(1:end,"Var9"));
y_plant4 = table2array(data_test(1:end,"Var10"));
y_plant5 = table2array(data_test(1:end,"Var11"));
y_plant6 = table2array(data_test(1:end,"Var12"));
y_plant7 = table2array(data_test(1:end,"Var13"));
y_plant8 = table2array(data_test(1:end,"Var14"));
y_plant9 = table2array(data_test(1:end,"Var15"));
y_plant10 = table2array(data_test(1:end,"Var16"));
y_plant11 = table2array(data_test(1:end,"Var17"));
y_plant12 = table2array(data_test(1:end,"Var18"));
y_plant13 = table2array(data_test(1:end,"Var19"));
y_plant14 = table2array(data_test(1:end,"Var20"));
y_plant15 = table2array(data_test(1:end,"Var21"));
y_plant16 = table2array(data_test(1:end,"Var22"));
y_plant17 = table2array(data_test(1:end,"Var23"));

y_comb1 = table2array(data_test(1:end,"Var58"));
y_comb2 = table2array(data_test(1:end,"Var59"));
y_comb3 = table2array(data_test(1:end,"Var60"));
y_comb4 = table2array(data_test(1:end,"Var61"));
y_comb5 = table2array(data_test(1:end,"Var62"));
y_comb6 = table2array(data_test(1:end,"Var63"));
y_comb7 = table2array(data_test(1:end,"Var64"));
y_comb8 = table2array(data_test(1:end,"Var65"));
y_comb9 = table2array(data_test(1:end,"Var66"));
y_comb10 = table2array(data_test(1:end,"Var67"));
y_comb11 = table2array(data_test(1:end,"Var68"));
y_comb12 = table2array(data_test(1:end,"Var69"));
y_comb13 = table2array(data_test(1:end,"Var70"));
y_comb14 = table2array(data_test(1:end,"Var71"));
y_comb15 = table2array(data_test(1:end,"Var72"));
y_comb16 = table2array(data_test(1:end,"Var73"));
y_comb17 = table2array(data_test(1:end,"Var74"));

e1_comb = y_plant1 - y_comb1;
e2_comb = y_plant2 - y_comb2;
e3_comb = y_plant3 - y_comb3;
e4_comb = y_plant4 - y_comb4;
e5_comb = y_plant5 - y_comb5;
e6_comb = y_plant6 - y_comb6;
e7_comb = y_plant7 - y_comb7;
e8_comb = y_plant8 - y_comb8;
e9_comb = y_plant9 - y_comb9;
e10_comb = y_plant10 - y_comb10;
e11_comb = y_plant11 - y_comb11;
e12_comb = y_plant12 - y_comb12;
e13_comb = y_plant13 - y_comb13;
e14_comb = y_plant14 - y_comb14;
e15_comb = y_plant15 - y_comb15;
e16_comb = y_plant16 - y_comb16;
e17_comb = y_plant17 - y_comb17;

e_test_comb = [e1_comb e2_comb e3_comb e4_comb e5_comb e6_comb e7_comb e8_comb e9_comb e10_comb e11_comb e12_comb e13_comb e14_comb e15_comb e16_comb e17_comb];

% Normalization
input_scaler_file = load("input_scaler_file_lowconsumption.mat");
input_scaler_file = input_scaler_file.input_scaler_file;
u_test_1 = (u_test_1  - input_scaler_file.input_scaler.bias) ./ (input_scaler_file.input_scaler.scale);

input_scaler_file = load("input_scaler_file_highconsumption.mat");
input_scaler_file = input_scaler_file.input_scaler_file;
u_test_2 = (u_test_2  - input_scaler_file.input_scaler.bias) ./ (input_scaler_file.input_scaler.scale);

e_test_comb = (e_test_comb  - error_scaler_bias_highlowcons) ./ error_scaler_scale_highlowcons;

%% 4. Compute T2 Test comb
t2_test_comb_e = mahal(e_test_comb, e_ref_highlowcons(round(size(e_ref_highlowcons,1)/2)+1:end,:));
t2_test_lowcons_u = mahal(u_test_1, u_ref_lowcons(round(size(u_ref_lowcons,1)/2)+1:end,:));
t2_test_highcons_u = mahal(u_test_2, u_ref_highcons(round(size(u_ref_highcons,1)/2)+1:end,:));

% Compare with reference limit
figure('DefaultAxesFontSize',52); plot(t2_test_comb_e,'LineWidth',7, 'Color', "#4DBEEE"); hold on; plot(UCL_percentile_0027_highlowcons_e*ones(size(t2_test_comb_e)), 'LineWidth', 7, 'Color', "#A2142F"); xlabel('Samples', 'interpreter', 'latex'); ylabel('$T^2(\tilde{e}_s, e_{s,ref})$', 'interpreter', 'latex'); xlim([1 size(t2_test_comb_e, 1)]); box off;
figure('DefaultAxesFontSize',52); plot(t2_test_lowcons_u,'LineWidth',7, 'Color', "#4DBEEE"); hold on; plot(UCL_percentile_0027_lowcons_u*ones(size(t2_test_lowcons_u)), 'LineWidth', 7, 'Color', "#A2142F"); xlabel('Samples', 'interpreter', 'latex'); ylabel('$T^2(\tilde{u}, u_{ref}^{[1]})$', 'interpreter', 'latex'); xlim([1 size(t2_test_lowcons_u, 1)]); box off;
figure('DefaultAxesFontSize',52); plot(t2_test_highcons_u,'LineWidth',7, 'Color', "#4DBEEE"); hold on; plot(UCL_percentile_0027_highcons_u*ones(size(t2_test_highcons_u)), 'LineWidth', 7, 'Color', "#A2142F"); xlabel('Samples', 'interpreter', 'latex'); ylabel('$T^2(\tilde{u}, u_{ref}^{[2]})$', 'interpreter', 'latex'); xlim([1 size(t2_test_highcons_u, 1)]); box off;


%% Compute how many points outside the limit
N_out = 0;
for i = 1: size(t2_test_lowcons_u,1)
    if (t2_test_lowcons_u(i) > UCL_percentile_0027_lowcons_u)
        N_out = N_out + 1;
    end
end

percentuale_N_out = N_out/size(t2_test_lowcons_u,1)*100

%%
N_out = 0;
for i = 1: size(t2_test_comb_e,1)
    if (t2_test_comb_e(i) > UCL_percentile_0027_highlowcons_e)
        N_out = N_out + 1;
    end
end

percentuale_N_out = N_out/size(t2_test_comb_e,1)*100


%% 6. Dati nuovi: ensemble situa intermedia
data_test = readtable("csv_files/Simulation_1gg_intermediate_FS.csv");

T_test = table2array(data_test(1:end,"Var1"));
P1_test = table2array(data_test(1:end,"Var2"));
P2_test = table2array(data_test(1:end,"Var3"));
P3_test = table2array(data_test(1:end,"Var4"));
P4_test = table2array(data_test(1:end,"Var5"));
P5_test = table2array(data_test(1:end,"Var6"));
u_test = [T_test P1_test P2_test P3_test P4_test P5_test];

y_plant1 = table2array(data_test(1:end,"Var7"));
y_plant2 = table2array(data_test(1:end,"Var8"));
y_plant3 = table2array(data_test(1:end,"Var9"));
y_plant4 = table2array(data_test(1:end,"Var10"));
y_plant5 = table2array(data_test(1:end,"Var11"));
y_plant6 = table2array(data_test(1:end,"Var12"));
y_plant7 = table2array(data_test(1:end,"Var13"));
y_plant8 = table2array(data_test(1:end,"Var14"));
y_plant9 = table2array(data_test(1:end,"Var15"));
y_plant10 = table2array(data_test(1:end,"Var16"));
y_plant11 = table2array(data_test(1:end,"Var17"));
y_plant12 = table2array(data_test(1:end,"Var18"));
y_plant13 = table2array(data_test(1:end,"Var19"));
y_plant14 = table2array(data_test(1:end,"Var20"));
y_plant15 = table2array(data_test(1:end,"Var21"));
y_plant16 = table2array(data_test(1:end,"Var22"));
y_plant17 = table2array(data_test(1:end,"Var23"));

y_comb1 = table2array(data_test(1:end,"Var58"));
y_comb2 = table2array(data_test(1:end,"Var59"));
y_comb3 = table2array(data_test(1:end,"Var60"));
y_comb4 = table2array(data_test(1:end,"Var61"));
y_comb5 = table2array(data_test(1:end,"Var62"));
y_comb6 = table2array(data_test(1:end,"Var63"));
y_comb7 = table2array(data_test(1:end,"Var64"));
y_comb8 = table2array(data_test(1:end,"Var65"));
y_comb9 = table2array(data_test(1:end,"Var66"));
y_comb10 = table2array(data_test(1:end,"Var67"));
y_comb11 = table2array(data_test(1:end,"Var68"));
y_comb12 = table2array(data_test(1:end,"Var69"));
y_comb13 = table2array(data_test(1:end,"Var70"));
y_comb14 = table2array(data_test(1:end,"Var71"));
y_comb15 = table2array(data_test(1:end,"Var72"));
y_comb16 = table2array(data_test(1:end,"Var73"));
y_comb17 = table2array(data_test(1:end,"Var74"));

e1_comb = y_plant1 - y_comb1;
e2_comb = y_plant2 - y_comb2;
e3_comb = y_plant3 - y_comb3;
e4_comb = y_plant4 - y_comb4;
e5_comb = y_plant5 - y_comb5;
e6_comb = y_plant6 - y_comb6;
e7_comb = y_plant7 - y_comb7;
e8_comb = y_plant8 - y_comb8;
e9_comb = y_plant9 - y_comb9;
e10_comb = y_plant10 - y_comb10;
e11_comb = y_plant11 - y_comb11;
e12_comb = y_plant12 - y_comb12;
e13_comb = y_plant13 - y_comb13;
e14_comb = y_plant14 - y_comb14;
e15_comb = y_plant15 - y_comb15;
e16_comb = y_plant16 - y_comb16;
e17_comb = y_plant17 - y_comb17;

e_test_comb = [e1_comb e2_comb e3_comb e4_comb e5_comb e6_comb e7_comb e8_comb e9_comb e10_comb e11_comb e12_comb e13_comb e14_comb e15_comb e16_comb e17_comb];

% Normalization
input_scaler_file = load("input_scaler_file_lowconsumption.mat");
input_scaler_file = input_scaler_file.input_scaler_file;
u_test_1 = (u_test  - input_scaler_file.input_scaler.bias) ./ (input_scaler_file.input_scaler.scale);

input_scaler_file = load("input_scaler_file_highconsumption.mat");
input_scaler_file = input_scaler_file.input_scaler_file;
u_test_2 = (u_test  - input_scaler_file.input_scaler.bias) ./ (input_scaler_file.input_scaler.scale);

e_test_comb = (e_test_comb  - error_scaler_bias_highlowcons) ./ error_scaler_scale_highlowcons;

%% 4. Compute T2 Test comb
t2_test_comb_e = mahal(e_test_comb, e_ref_highlowcons(round(size(e_ref_highlowcons,1)/2)+1:end,:));
t2_test_lowcons_u = mahal(u_test_1, u_ref_lowcons(round(size(u_ref_lowcons,1)/2)+1:end,:));
t2_test_highcons_u = mahal(u_test_2, u_ref_highcons(round(size(u_ref_highcons,1)/2)+1:end,:));

% Compare with reference limit
figure('DefaultAxesFontSize',52); plot(t2_test_comb_e,'LineWidth',7, 'Color', "#4DBEEE"); hold on; plot(UCL_percentile_0027_highlowcons_e*ones(size(t2_test_comb_e)), 'LineWidth', 7, 'Color', "#A2142F"); xlabel('Samples', 'interpreter', 'latex'); ylabel('$T^2(\tilde{e}_s, e_{s,ref})$', 'interpreter', 'latex'); xlim([1 size(t2_test_comb_e, 1)]); box off;
figure('DefaultAxesFontSize',52); plot(t2_test_lowcons_u,'LineWidth',7, 'Color', "#4DBEEE"); hold on; plot(UCL_percentile_0027_lowcons_u*ones(size(t2_test_lowcons_u)), 'LineWidth', 7, 'Color', "#A2142F"); xlabel('Samples', 'interpreter', 'latex'); ylabel('$T^2(\tilde{u}, u_{ref}^{[1]})$', 'interpreter', 'latex'); xlim([1 size(t2_test_lowcons_u, 1)]); box off;
figure('DefaultAxesFontSize',52); plot(t2_test_highcons_u,'LineWidth',7, 'Color', "#4DBEEE"); hold on; plot(UCL_percentile_0027_highcons_u*ones(size(t2_test_highcons_u)), 'LineWidth', 7, 'Color', "#A2142F"); xlabel('Samples', 'interpreter', 'latex'); ylabel('$T^2(\tilde{u}, u_{ref}^{[2]})$', 'interpreter', 'latex'); xlim([1 size(t2_test_highcons_u, 1)]); box off;

