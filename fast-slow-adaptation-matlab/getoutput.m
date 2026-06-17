%% 1-2: EITHER LOW OR HIGH CONSUMPTION TEST
T_inp_sampled = out.Tinp(25:end);
P1_sampled = out.P_inp1(25:end);
P2_sampled = out.P_inp4(25:end);
P3_sampled = out.P_inp2(25:end);
P4_sampled = out.P_inp3(25:end);
P5_sampled = out.P_inp5(25:end);

Ts1_lowcons = zeros(265,1);
Ts2_lowcons = zeros(265,1);
Ts3_lowcons = zeros(265,1);
Ts4_lowcons = zeros(265,1);
Ts5_lowcons = zeros(265,1);
Tr1_lowcons = zeros(265,1);
Tr2_lowcons = zeros(265,1);
Tr3_lowcons = zeros(265,1);
Tr4_lowcons = zeros(265,1);
Tr5_lowcons = zeros(265,1);
mfr1_lowcons = zeros(265,1);
mfr2_lowcons = zeros(265,1);
mfr3_lowcons = zeros(265,1);
mfr4_lowcons = zeros(265,1);
mfr5_lowcons = zeros(265,1);
Tr_lowcons = zeros(265,1);
mfr_lowcons = zeros(265,1);

for i=25:289
    Ts1_lowcons(i-24) = out.y_lowcons(1,1,i);
    Tr1_lowcons(i-24) = out.y_lowcons(2,1,i);
    mfr1_lowcons(i-24) = out.y_lowcons(3,1,i);
    Ts2_lowcons(i-24) = out.y_lowcons(4,1,i);
    Tr2_lowcons(i-24) = out.y_lowcons(5,1,i);
    mfr2_lowcons(i-24) = out.y_lowcons(6,1,i);
    Ts3_lowcons(i-24) = out.y_lowcons(7,1,i);
    Tr3_lowcons(i-24) = out.y_lowcons(8,1,i);
    mfr3_lowcons(i-24) = out.y_lowcons(9,1,i);
    Ts4_lowcons(i-24) = out.y_lowcons(10,1,i);
    Tr4_lowcons(i-24) = out.y_lowcons(11,1,i);
    mfr4_lowcons(i-24) = out.y_lowcons(12,1,i);
    Ts5_lowcons(i-24) = out.y_lowcons(13,1,i);
    Tr5_lowcons(i-24) = out.y_lowcons(14,1,i);
    mfr5_lowcons(i-24) = out.y_lowcons(15,1,i);
    Tr_lowcons(i-24) = out.y_lowcons(16,1,i);
    mfr_lowcons(i-24) = out.y_lowcons(17,1,i);
end
Ts1_plant = out.y_plant(25:end,1);
Ts2_plant = out.y_plant(25:end,4);
Ts3_plant = out.y_plant(25:end,2);
Ts4_plant = out.y_plant(25:end,3);
Ts5_plant = out.y_plant(25:end,5);
Tr1_plant = out.y_plant(25:end,6);
Tr2_plant = out.y_plant(25:end,9);
Tr3_plant = out.y_plant(25:end,7);
Tr4_plant = out.y_plant(25:end,8);
Tr5_plant = out.y_plant(25:end,10);
mfr1_plant = out.y_plant(25:end,11);
mfr2_plant = out.y_plant(25:end,14);
mfr3_plant = out.y_plant(25:end,12);
mfr4_plant = out.y_plant(25:end,13);
mfr5_plant = out.y_plant(25:end,15);
Tr_plant = out.y_plant(25:end,16);
mfr_plant = out.y_plant(25:end,17);

%% Figure
figure;
subplot(4,5,1); plot(Ts1_plant, 'LineWidth', 1.4); hold on; plot(Ts1_lowcons, 'LineWidth', 1.4); grid on; legend('Plant output', 'Winter model', 'Summer model', 'Combined models'); 
subplot(4,5,2); plot(Ts2_plant, 'LineWidth', 1.4); hold on; plot(Ts2_lowcons, 'LineWidth', 1.4); grid on;
subplot(4,5,3); plot(Ts3_plant, 'LineWidth', 1.4); hold on; plot(Ts3_lowcons, 'LineWidth', 1.4); grid on;
subplot(4,5,4); plot(Ts4_plant, 'LineWidth', 1.4); hold on; plot(Ts4_lowcons, 'LineWidth', 1.4); grid on;
subplot(4,5,5); plot(Ts5_plant, 'LineWidth', 1.4); hold on; plot(Ts5_lowcons, 'LineWidth', 1.4); grid on;
subplot(4,5,6); plot(Tr1_plant, 'LineWidth', 1.4); hold on; plot(Tr1_lowcons, 'LineWidth', 1.4); grid on;
subplot(4,5,7); plot(Tr2_plant, 'LineWidth', 1.4); hold on; plot(Tr2_lowcons, 'LineWidth', 1.4); grid on;
subplot(4,5,8); plot(Tr3_plant, 'LineWidth', 1.4); hold on; plot(Tr3_lowcons, 'LineWidth', 1.4); grid on;
subplot(4,5,9); plot(Tr4_plant, 'LineWidth', 1.4); hold on; plot(Tr4_lowcons, 'LineWidth', 1.4); grid on;
subplot(4,5,10); plot(Tr5_plant, 'LineWidth', 1.4); hold on; plot(Tr5_lowcons, 'LineWidth', 1.4); grid on;
subplot(4,5,11); plot(mfr1_plant, 'LineWidth', 1.4); hold on; plot(mfr1_lowcons, 'LineWidth', 1.4); grid on;
subplot(4,5,12); plot(mfr2_plant, 'LineWidth', 1.4); hold on; plot(mfr2_lowcons, 'LineWidth', 1.4); grid on;
subplot(4,5,13); plot(mfr3_plant, 'LineWidth', 1.4); hold on; plot(mfr3_lowcons, 'LineWidth', 1.4); grid on;
subplot(4,5,14); plot(mfr4_plant, 'LineWidth', 1.4); hold on; plot(mfr4_lowcons, 'LineWidth', 1.4); grid on;
subplot(4,5,15); plot(mfr5_plant, 'LineWidth', 1.4); hold on; plot(mfr5_lowcons, 'LineWidth', 1.4); grid on;
subplot(4,5,16); plot(Tr_plant, 'LineWidth', 1.4); hold on; plot(Tr_lowcons, 'LineWidth', 1.4); grid on;
subplot(4,5,17); plot(mfr_plant, 'LineWidth', 1.4); hold on; plot(mfr_lowcons, 'LineWidth', 1.4); grid on;

%% Plot articolo low cons low model
time = 0:1/12:24;
time = time(25:end);

figure('DefaultAxesFontSize',52); plot(time, Ts4_plant,'LineWidth',7); hold on; plot(time, Ts4_lowcons,'LineWidth',7);
xlabel('Time [h]', 'interpreter', 'latex'); ylabel('$T_5^s$ [$^{\circ}$C]', 'interpreter', 'latex'); ylim([66 85]); xlim([2 24]); box off; xticks([0 4 8 12 16 20 24]);

figure('DefaultAxesFontSize',52); plot(time, Tr_plant,'LineWidth',7); hold on; plot(time, Tr_lowcons,'LineWidth',7);
xlabel('Time [h]', 'interpreter', 'latex'); ylabel('$T_0^r$ [$^{\circ}$C]', 'interpreter', 'latex'); ylim([57.5 63.5]); xlim([2 24]); box off; xticks([0 4 8 12 16 20 24]);

figure('DefaultAxesFontSize',52); plot(time, mfr_plant,'LineWidth',7); hold on; plot(time, mfr_lowcons,'LineWidth',7);
xlabel('Time [h]', 'interpreter', 'latex'); ylabel('$q_0$ [kg/s]', 'interpreter', 'latex'); ylim([5 18.3]); xlim([2 24]); box off; xticks([0 4 8 12 16 20 24]);


%% Plot articolo high cons low model
time = 0:1/12:24;
time = time(25:end);

figure('DefaultAxesFontSize',52); plot(time, Ts4_plant,'LineWidth',7); hold on; plot(time, Ts4_lowcons,'LineWidth',7);
xlabel('Time [h]', 'interpreter', 'latex'); ylabel('$T_5^s$ [$^{\circ}$C]', 'interpreter', 'latex'); ylim([65 87]); xlim([2 24]); box off; xticks([0 4 8 12 16 20 24]);

figure('DefaultAxesFontSize',52); plot(time, Tr_plant,'LineWidth',7); hold on; plot(time, Tr_lowcons,'LineWidth',7);
xlabel('Time [h]', 'interpreter', 'latex'); ylabel('$T_0^r$ [$^{\circ}$C]', 'interpreter', 'latex'); ylim([54 63]); xlim([2 24]); box off; xticks([0 4 8 12 16 20 24]);

figure('DefaultAxesFontSize',52); plot(time, mfr_plant,'LineWidth',7); hold on; plot(time, mfr_lowcons,'LineWidth',7);
xlabel('Time [h]', 'interpreter', 'latex'); ylabel('$q_0$ [kg/s]', 'interpreter', 'latex'); ylim([8 20]); xlim([2 24]); box off; xticks([0 4 8 12 16 20 24]);


%% FIT
y_plant = [Ts1_plant.'; Tr1_plant.'; mfr1_plant.'; Ts2_plant.'; Tr2_plant.'; mfr2_plant.'; Ts3_plant.'; Tr3_plant.'; mfr3_plant.'; Ts4_plant.'; Tr4_plant.'; mfr4_plant.'; Ts5_plant.'; Tr5_plant.'; mfr5_plant.'; Tr_plant.'; mfr_plant.';];
y_lowcons = [Ts1_lowcons.'; Tr1_lowcons.'; mfr1_lowcons.'; Ts2_lowcons.'; Tr2_lowcons.'; mfr2_lowcons.'; Ts3_lowcons.'; Tr3_lowcons.'; mfr3_lowcons.'; Ts4_lowcons.'; Tr4_lowcons.'; mfr4_lowcons.'; Ts5_lowcons.'; Tr5_lowcons.'; mfr5_lowcons.'; Tr_lowcons.'; mfr_lowcons.';];

FIT_lowcons = mean(computefit(y_lowcons, y_plant))

%% Save
M = [T_inp_sampled, P1_sampled, P2_sampled, P3_sampled, P4_sampled, P5_sampled, Ts1_plant, Ts2_plant, Ts3_plant, Ts4_plant, Ts5_plant, Tr1_plant, Tr2_plant, Tr3_plant, Tr4_plant, Tr5_plant, mfr1_plant, mfr2_plant, mfr3_plant, mfr4_plant, mfr5_plant, Tr_plant, mfr_plant, Ts1_lowcons, Ts2_lowcons, Ts3_lowcons, Ts4_lowcons, Ts5_lowcons, Tr1_lowcons, Tr2_lowcons, Tr3_lowcons, Tr4_lowcons, Tr5_lowcons, mfr1_lowcons, mfr2_lowcons, mfr3_lowcons, mfr4_lowcons, mfr5_lowcons, Tr_lowcons, mfr_lowcons];
writematrix(M, 'csv_files/Simulation_1gg_highconsumption_modellowcons.csv')


%% 3: MODEL COMBINATION WITH MAHALANOBIS
T_inp_sampled = out.Tinp(25:end);
P1_sampled = out.P_inp1(25:end);
P2_sampled = out.P_inp4(25:end);
P3_sampled = out.P_inp2(25:end);
P4_sampled = out.P_inp3(25:end);
P5_sampled = out.P_inp5(25:end);

Ts1_lowcons = zeros(553,1);
Ts2_lowcons = zeros(553,1);
Ts3_lowcons = zeros(553,1);
Ts4_lowcons = zeros(553,1);
Ts5_lowcons = zeros(553,1);
Tr1_lowcons = zeros(553,1);
Tr2_lowcons = zeros(553,1);
Tr3_lowcons = zeros(553,1);
Tr4_lowcons = zeros(553,1);
Tr5_lowcons = zeros(553,1);
mfr1_lowcons = zeros(553,1);
mfr2_lowcons = zeros(553,1);
mfr3_lowcons = zeros(553,1);
mfr4_lowcons = zeros(553,1);
mfr5_lowcons = zeros(553,1);
Tr_lowcons = zeros(553,1);
mfr_lowcons = zeros(553,1);

Ts1_highcons = zeros(553,1);
Ts2_highcons = zeros(553,1);
Ts3_highcons = zeros(553,1);
Ts4_highcons = zeros(553,1);
Ts5_highcons = zeros(553,1);
Tr1_highcons = zeros(553,1);
Tr2_highcons = zeros(553,1);
Tr3_highcons = zeros(553,1);
Tr4_highcons = zeros(553,1);
Tr5_highcons = zeros(553,1);
mfr1_highcons = zeros(553,1);
mfr2_highcons = zeros(553,1);
mfr3_highcons = zeros(553,1);
mfr4_highcons = zeros(553,1);
mfr5_highcons = zeros(553,1);
Tr_highcons = zeros(553,1);
mfr_highcons = zeros(553,1);

Ts1_comb = zeros(553,1);
Ts2_comb = zeros(553,1);
Ts3_comb = zeros(553,1);
Ts4_comb = zeros(553,1);
Ts5_comb = zeros(553,1);
Tr1_comb = zeros(553,1);
Tr2_comb = zeros(553,1);
Tr3_comb = zeros(553,1);
Tr4_comb = zeros(553,1);
Tr5_comb = zeros(553,1);
mfr1_comb = zeros(553,1);
mfr2_comb = zeros(553,1);
mfr3_comb = zeros(553,1);
mfr4_comb = zeros(553,1);
mfr5_comb = zeros(553,1);
Tr_comb = zeros(553,1);
mfr_comb = zeros(553,1);

for i=25:577
    Ts1_lowcons(i-24) = out.y_lowcons(1,1,i);
    Tr1_lowcons(i-24) = out.y_lowcons(2,1,i);
    mfr1_lowcons(i-24) = out.y_lowcons(3,1,i);
    Ts2_lowcons(i-24) = out.y_lowcons(4,1,i);
    Tr2_lowcons(i-24) = out.y_lowcons(5,1,i);
    mfr2_lowcons(i-24) = out.y_lowcons(6,1,i);
    Ts3_lowcons(i-24) = out.y_lowcons(7,1,i);
    Tr3_lowcons(i-24) = out.y_lowcons(8,1,i);
    mfr3_lowcons(i-24) = out.y_lowcons(9,1,i);
    Ts4_lowcons(i-24) = out.y_lowcons(10,1,i);
    Tr4_lowcons(i-24) = out.y_lowcons(11,1,i);
    mfr4_lowcons(i-24) = out.y_lowcons(12,1,i);
    Ts5_lowcons(i-24) = out.y_lowcons(13,1,i);
    Tr5_lowcons(i-24) = out.y_lowcons(14,1,i);
    mfr5_lowcons(i-24) = out.y_lowcons(15,1,i);
    Tr_lowcons(i-24) = out.y_lowcons(16,1,i);
    mfr_lowcons(i-24) = out.y_lowcons(17,1,i);

    Ts1_highcons(i-24) = out.y_highcons(1,1,i);
    Tr1_highcons(i-24) = out.y_highcons(2,1,i);
    mfr1_highcons(i-24) = out.y_highcons(3,1,i);
    Ts2_highcons(i-24) = out.y_highcons(4,1,i);
    Tr2_highcons(i-24) = out.y_highcons(5,1,i);
    mfr2_highcons(i-24) = out.y_highcons(6,1,i);
    Ts3_highcons(i-24) = out.y_highcons(7,1,i);
    Tr3_highcons(i-24) = out.y_highcons(8,1,i);
    mfr3_highcons(i-24) = out.y_highcons(9,1,i);
    Ts4_highcons(i-24) = out.y_highcons(10,1,i);
    Tr4_highcons(i-24) = out.y_highcons(11,1,i);
    mfr4_highcons(i-24) = out.y_highcons(12,1,i);
    Ts5_highcons(i-24) = out.y_highcons(13,1,i);
    Tr5_highcons(i-24) = out.y_highcons(14,1,i);
    mfr5_highcons(i-24) = out.y_highcons(15,1,i);
    Tr_highcons(i-24) = out.y_highcons(16,1,i);
    mfr_highcons(i-24) = out.y_highcons(17,1,i);

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

Ts1_plant = out.y_plant(25:end,1);
Ts2_plant = out.y_plant(25:end,4);
Ts3_plant = out.y_plant(25:end,2);
Ts4_plant = out.y_plant(25:end,3);
Ts5_plant = out.y_plant(25:end,5);
Tr1_plant = out.y_plant(25:end,6);
Tr2_plant = out.y_plant(25:end,9);
Tr3_plant = out.y_plant(25:end,7);
Tr4_plant = out.y_plant(25:end,8);
Tr5_plant = out.y_plant(25:end,10);
mfr1_plant = out.y_plant(25:end,11);
mfr2_plant = out.y_plant(25:end,14);
mfr3_plant = out.y_plant(25:end,12);
mfr4_plant = out.y_plant(25:end,13);
mfr5_plant = out.y_plant(25:end,15);
Tr_plant = out.y_plant(25:end,16);
mfr_plant = out.y_plant(25:end,17);

Ts1_avg = (Ts1_lowcons+Ts1_highcons)/2;
Ts2_avg = (Ts2_lowcons+Ts2_highcons)/2;
Ts3_avg = (Ts3_lowcons+Ts3_highcons)/2;
Ts4_avg = (Ts4_lowcons+Ts4_highcons)/2;
Ts5_avg = (Ts5_lowcons+Ts5_highcons)/2;
Tr1_avg = (Tr1_lowcons+Tr1_highcons)/2;
Tr2_avg = (Tr2_lowcons+Tr2_highcons)/2;
Tr3_avg = (Tr3_lowcons+Tr3_highcons)/2;
Tr4_avg = (Tr4_lowcons+Tr4_highcons)/2;
Tr5_avg = (Tr5_lowcons+Tr5_highcons)/2;
mfr1_avg = (mfr1_lowcons+mfr1_highcons)/2;
mfr2_avg = (mfr2_lowcons+mfr2_highcons)/2;
mfr3_avg = (mfr3_lowcons+mfr3_highcons)/2;
mfr4_avg = (mfr4_lowcons+mfr4_highcons)/2;
mfr5_avg = (mfr5_lowcons+mfr5_highcons)/2;
Tr_avg = (Tr_lowcons+Tr_highcons)/2;
mfr_avg = (mfr_lowcons+mfr_highcons)/2;

%% Plot articolo
time = 0:1/12:48;
time = time(25:end);

figure('DefaultAxesFontSize',52); plot(time, Ts4_plant,'LineWidth',7); hold on; plot(time, Ts4_lowcons,'LineWidth',7); plot(time, Ts4_highcons,'LineWidth',7); plot(time, Ts4_comb,'LineWidth',7);
xlabel('Time [h]', 'interpreter', 'latex'); ylabel('$T_5^s$ [$^{\circ}$C]', 'interpreter', 'latex'); ylim([65 88]); xlim([2 48]); box off; 

figure('DefaultAxesFontSize',52); plot(time, Tr_plant,'LineWidth',7); hold on; plot(time, Tr_lowcons,'LineWidth',7); plot(time, Tr_highcons,'LineWidth',7); plot(time, Tr_comb,'LineWidth',7);
xlabel('Time [h]', 'interpreter', 'latex'); ylabel('$T_0^r$ [$^{\circ}$C]', 'interpreter', 'latex'); ylim([53.5 63.5]); xlim([2 48]); box off; 

figure('DefaultAxesFontSize',52); plot(time, mfr_plant,'LineWidth',7); hold on; plot(time, mfr_lowcons,'LineWidth',7); plot(time, mfr_highcons,'LineWidth',7); plot(time, mfr_comb,'LineWidth',7);
xlabel('Time [h]', 'interpreter', 'latex'); ylabel('$q_0$ [kg/s]', 'interpreter', 'latex'); ylim([5 20.5]); xlim([2 48]); box off; 

%% FIT
y_plant = [Ts1_plant.'; Tr1_plant.'; mfr1_plant.'; Ts2_plant.'; Tr2_plant.'; mfr2_plant.'; Ts3_plant.'; Tr3_plant.'; mfr3_plant.'; Ts4_plant.'; Tr4_plant.'; mfr4_plant.'; Ts5_plant.'; Tr5_plant.'; mfr5_plant.'; Tr_plant.'; mfr_plant.';];
y_lowcons = [Ts1_lowcons.'; Tr1_lowcons.'; mfr1_lowcons.'; Ts2_lowcons.'; Tr2_lowcons.'; mfr2_lowcons.'; Ts3_lowcons.'; Tr3_lowcons.'; mfr3_lowcons.'; Ts4_lowcons.'; Tr4_lowcons.'; mfr4_lowcons.'; Ts5_lowcons.'; Tr5_lowcons.'; mfr5_lowcons.'; Tr_lowcons.'; mfr_lowcons.';];
y_highcons = [Ts1_highcons.'; Tr1_highcons.'; mfr1_highcons.'; Ts2_highcons.'; Tr2_highcons.'; mfr2_highcons.'; Ts3_highcons.'; Tr3_highcons.'; mfr3_highcons.'; Ts4_highcons.'; Tr4_highcons.'; mfr4_highcons.'; Ts5_highcons.'; Tr5_highcons.'; mfr5_highcons.'; Tr_highcons.'; mfr_highcons.';];
y_avg = [Ts1_avg.'; Tr1_avg.'; mfr1_avg.'; Ts2_avg.'; Tr2_avg.'; mfr2_avg.'; Ts3_avg.'; Tr3_avg.'; mfr3_avg.'; Ts4_avg.'; Tr4_avg.'; mfr4_avg.'; Ts5_avg.'; Tr5_avg.'; mfr5_avg.'; Tr_avg.'; mfr_avg.';];
y_comb = [Ts1_comb.'; Tr1_comb.'; mfr1_comb.'; Ts2_comb.'; Tr2_comb.'; mfr2_comb.'; Ts3_comb.'; Tr3_comb.'; mfr3_comb.'; Ts4_comb.'; Tr4_comb.'; mfr4_comb.'; Ts5_comb.'; Tr5_comb.'; mfr5_comb.'; Tr_comb.'; mfr_comb.';];

FIT_lowcons = mean(computefit(y_lowcons, y_plant))
FIT_highcons = mean(computefit(y_highcons, y_plant))
FIT_avg = mean(computefit(y_avg, y_plant))
FIT_comb = mean(computefit(y_comb, y_plant))

%% Save
M = [T_inp_sampled, P1_sampled, P2_sampled, P3_sampled, P4_sampled, P5_sampled, Ts1_plant, Ts2_plant, Ts3_plant, Ts4_plant, Ts5_plant, Tr1_plant, Tr2_plant, Tr3_plant, Tr4_plant, Tr5_plant, mfr1_plant, mfr2_plant, mfr3_plant, mfr4_plant, mfr5_plant, Tr_plant, mfr_plant, Ts1_lowcons, Ts2_lowcons, Ts3_lowcons, Ts4_lowcons, Ts5_lowcons, Tr1_lowcons, Tr2_lowcons, Tr3_lowcons, Tr4_lowcons, Tr5_lowcons, mfr1_lowcons, mfr2_lowcons, mfr3_lowcons, mfr4_lowcons, mfr5_lowcons, Tr_lowcons, mfr_lowcons, Ts1_highcons, Ts2_highcons, Ts3_highcons, Ts4_highcons, Ts5_highcons, Tr1_highcons, Tr2_highcons, Tr3_highcons, Tr4_highcons, Tr5_highcons, mfr1_highcons, mfr2_highcons, mfr3_highcons, mfr4_highcons, mfr5_highcons, Tr_highcons, mfr_highcons, Ts1_comb, Ts2_comb, Ts3_comb, Ts4_comb, Ts5_comb, Tr1_comb, Tr2_comb, Tr3_comb, Tr4_comb, Tr5_comb, mfr1_comb, mfr2_comb, mfr3_comb, mfr4_comb, mfr5_comb, Tr_comb, mfr_comb];
writematrix(M, 'csv_files/Simulation_2gg_modelcombined_lowandhighcons.csv')


%% 4: OUTPUT CORRECTED BY FAST LEARNING
T_inp_sampled = out.Tinp(25:end);
P1_sampled = out.P_inp1(25:end);
P2_sampled = out.P_inp4(25:end);
P3_sampled = out.P_inp2(25:end);
P4_sampled = out.P_inp3(25:end);
P5_sampled = out.P_inp5(25:end);

Ts1_lowcons = zeros(553,1);
Ts2_lowcons = zeros(553,1);
Ts3_lowcons = zeros(553,1);
Ts4_lowcons = zeros(553,1);
Ts5_lowcons = zeros(553,1);
Tr1_lowcons = zeros(553,1);
Tr2_lowcons = zeros(553,1);
Tr3_lowcons = zeros(553,1);
Tr4_lowcons = zeros(553,1);
Tr5_lowcons = zeros(553,1);
mfr1_lowcons = zeros(553,1);
mfr2_lowcons = zeros(553,1);
mfr3_lowcons = zeros(553,1);
mfr4_lowcons = zeros(553,1);
mfr5_lowcons = zeros(553,1);
Tr_lowcons = zeros(553,1);
mfr_lowcons = zeros(553,1);

Ts1_highcons = zeros(553,1);
Ts2_highcons = zeros(553,1);
Ts3_highcons = zeros(553,1);
Ts4_highcons = zeros(553,1);
Ts5_highcons = zeros(553,1);
Tr1_highcons = zeros(553,1);
Tr2_highcons = zeros(553,1);
Tr3_highcons = zeros(553,1);
Tr4_highcons = zeros(553,1);
Tr5_highcons = zeros(553,1);
mfr1_highcons = zeros(553,1);
mfr2_highcons = zeros(553,1);
mfr3_highcons = zeros(553,1);
mfr4_highcons = zeros(553,1);
mfr5_highcons = zeros(553,1);
Tr_highcons = zeros(553,1);
mfr_highcons = zeros(553,1);

Ts1_comb = zeros(553,1);
Ts2_comb = zeros(553,1);
Ts3_comb = zeros(553,1);
Ts4_comb = zeros(553,1);
Ts5_comb = zeros(553,1);
Tr1_comb = zeros(553,1);
Tr2_comb = zeros(553,1);
Tr3_comb = zeros(553,1);
Tr4_comb = zeros(553,1);
Tr5_comb = zeros(553,1);
mfr1_comb = zeros(553,1);
mfr2_comb = zeros(553,1);
mfr3_comb = zeros(553,1);
mfr4_comb = zeros(553,1);
mfr5_comb = zeros(553,1);
Tr_comb = zeros(553,1);
mfr_comb = zeros(553,1);

Ts1_unc = zeros(553,1);
Ts2_unc = zeros(553,1);
Ts3_unc = zeros(553,1);
Ts4_unc = zeros(553,1);
Ts5_unc = zeros(553,1);
Tr1_unc = zeros(553,1);
Tr2_unc = zeros(553,1);
Tr3_unc = zeros(553,1);
Tr4_unc = zeros(553,1);
Tr5_unc = zeros(553,1);
mfr1_unc = zeros(553,1);
mfr2_unc = zeros(553,1);
mfr3_unc = zeros(553,1);
mfr4_unc = zeros(553,1);
mfr5_unc = zeros(553,1);
Tr_unc = zeros(553,1);
mfr_unc = zeros(553,1);

for i=25:577
    Ts1_lowcons(i-24) = out.y_lowcons(1,1,i);
    Tr1_lowcons(i-24) = out.y_lowcons(2,1,i);
    mfr1_lowcons(i-24) = out.y_lowcons(3,1,i);
    Ts2_lowcons(i-24) = out.y_lowcons(4,1,i);
    Tr2_lowcons(i-24) = out.y_lowcons(5,1,i);
    mfr2_lowcons(i-24) = out.y_lowcons(6,1,i);
    Ts3_lowcons(i-24) = out.y_lowcons(7,1,i);
    Tr3_lowcons(i-24) = out.y_lowcons(8,1,i);
    mfr3_lowcons(i-24) = out.y_lowcons(9,1,i);
    Ts4_lowcons(i-24) = out.y_lowcons(10,1,i);
    Tr4_lowcons(i-24) = out.y_lowcons(11,1,i);
    mfr4_lowcons(i-24) = out.y_lowcons(12,1,i);
    Ts5_lowcons(i-24) = out.y_lowcons(13,1,i);
    Tr5_lowcons(i-24) = out.y_lowcons(14,1,i);
    mfr5_lowcons(i-24) = out.y_lowcons(15,1,i);
    Tr_lowcons(i-24) = out.y_lowcons(16,1,i);
    mfr_lowcons(i-24) = out.y_lowcons(17,1,i);

    Ts1_highcons(i-24) = out.y_highcons(1,1,i);
    Tr1_highcons(i-24) = out.y_highcons(2,1,i);
    mfr1_highcons(i-24) = out.y_highcons(3,1,i);
    Ts2_highcons(i-24) = out.y_highcons(4,1,i);
    Tr2_highcons(i-24) = out.y_highcons(5,1,i);
    mfr2_highcons(i-24) = out.y_highcons(6,1,i);
    Ts3_highcons(i-24) = out.y_highcons(7,1,i);
    Tr3_highcons(i-24) = out.y_highcons(8,1,i);
    mfr3_highcons(i-24) = out.y_highcons(9,1,i);
    Ts4_highcons(i-24) = out.y_highcons(10,1,i);
    Tr4_highcons(i-24) = out.y_highcons(11,1,i);
    mfr4_highcons(i-24) = out.y_highcons(12,1,i);
    Ts5_highcons(i-24) = out.y_highcons(13,1,i);
    Tr5_highcons(i-24) = out.y_highcons(14,1,i);
    mfr5_highcons(i-24) = out.y_highcons(15,1,i);
    Tr_highcons(i-24) = out.y_highcons(16,1,i);
    mfr_highcons(i-24) = out.y_highcons(17,1,i);

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

    Ts1_unc(i-24) = out.e_inc1step(1,1,i);
    Tr1_unc(i-24) = out.e_inc1step(2,1,i);
    mfr1_unc(i-24) = out.e_inc1step(3,1,i);
    Ts2_unc(i-24) = out.e_inc1step(4,1,i);
    Tr2_unc(i-24) = out.e_inc1step(5,1,i);
    mfr2_unc(i-24) = out.e_inc1step(6,1,i);
    Ts3_unc(i-24) = out.e_inc1step(7,1,i);
    Tr3_unc(i-24) = out.e_inc1step(8,1,i);
    mfr3_unc(i-24) = out.e_inc1step(9,1,i);
    Ts4_unc(i-24) = out.e_inc1step(10,1,i);
    Tr4_unc(i-24) = out.e_inc1step(11,1,i);
    mfr4_unc(i-24) = out.e_inc1step(12,1,i);
    Ts5_unc(i-24) = out.e_inc1step(13,1,i);
    Tr5_unc(i-24) = out.e_inc1step(14,1,i);
    mfr5_unc(i-24) = out.e_inc1step(15,1,i);
    Tr_unc(i-24) = out.e_inc1step(16,1,i);
    mfr_unc(i-24) = out.e_inc1step(17,1,i);
end

Ts1_plant = out.y_plant(25:end,1);
Ts2_plant = out.y_plant(25:end,4);
Ts3_plant = out.y_plant(25:end,2);
Ts4_plant = out.y_plant(25:end,3);
Ts5_plant = out.y_plant(25:end,5);
Tr1_plant = out.y_plant(25:end,6);
Tr2_plant = out.y_plant(25:end,9);
Tr3_plant = out.y_plant(25:end,7);
Tr4_plant = out.y_plant(25:end,8);
Tr5_plant = out.y_plant(25:end,10);
mfr1_plant = out.y_plant(25:end,11);
mfr2_plant = out.y_plant(25:end,14);
mfr3_plant = out.y_plant(25:end,12);
mfr4_plant = out.y_plant(25:end,13);
mfr5_plant = out.y_plant(25:end,15);
Tr_plant = out.y_plant(25:end,16);
mfr_plant = out.y_plant(25:end,17);

Ts1_comb_unc = Ts1_comb + [0; Ts1_unc(1:end-1)];
Ts2_comb_unc = Ts2_comb + [0; Ts2_unc(1:end-1)];
Ts3_comb_unc = Ts3_comb + [0; Ts3_unc(1:end-1)];
Ts4_comb_unc = Ts4_comb + [0; Ts4_unc(1:end-1)];
Ts5_comb_unc = Ts5_comb + [0; Ts5_unc(1:end-1)];
Tr1_comb_unc = Tr1_comb + [0; Tr1_unc(1:end-1)];
Tr2_comb_unc = Tr2_comb + [0; Tr2_unc(1:end-1)];
Tr3_comb_unc = Tr3_comb + [0; Tr3_unc(1:end-1)];
Tr4_comb_unc = Tr4_comb + [0; Tr4_unc(1:end-1)];
Tr5_comb_unc = Tr5_comb + [0; Tr5_unc(1:end-1)];
mfr1_comb_unc = mfr1_comb + [0; mfr1_unc(1:end-1)];
mfr2_comb_unc = mfr2_comb + [0; mfr2_unc(1:end-1)];
mfr3_comb_unc = mfr3_comb + [0; mfr3_unc(1:end-1)];
mfr4_comb_unc = mfr4_comb + [0; mfr4_unc(1:end-1)];
mfr5_comb_unc = mfr5_comb + [0; mfr5_unc(1:end-1)];
Tr_comb_unc = Tr_comb + [0; Tr_unc(1:end-1)];
mfr_comb_unc = mfr_comb + [0; mfr_unc(1:end-1)];

Ts1_avg = (Ts1_lowcons+Ts1_highcons)/2;
Ts2_avg = (Ts2_lowcons+Ts2_highcons)/2;
Ts3_avg = (Ts3_lowcons+Ts3_highcons)/2;
Ts4_avg = (Ts4_lowcons+Ts4_highcons)/2;
Ts5_avg = (Ts5_lowcons+Ts5_highcons)/2;
Tr1_avg = (Tr1_lowcons+Tr1_highcons)/2;
Tr2_avg = (Tr2_lowcons+Tr2_highcons)/2;
Tr3_avg = (Tr3_lowcons+Tr3_highcons)/2;
Tr4_avg = (Tr4_lowcons+Tr4_highcons)/2;
Tr5_avg = (Tr5_lowcons+Tr5_highcons)/2;
mfr1_avg = (mfr1_lowcons+mfr1_highcons)/2;
mfr2_avg = (mfr2_lowcons+mfr2_highcons)/2;
mfr3_avg = (mfr3_lowcons+mfr3_highcons)/2;
mfr4_avg = (mfr4_lowcons+mfr4_highcons)/2;
mfr5_avg = (mfr5_lowcons+mfr5_highcons)/2;
Tr_avg = (Tr_lowcons+Tr_highcons)/2;
mfr_avg = (mfr_lowcons+mfr_highcons)/2;

%% Figure
figure;
subplot(4,5,1); plot(Ts1_plant, 'LineWidth', 1.4); hold on; plot(Ts1_lowcons, 'LineWidth', 1.4); plot(Ts1_highcons, 'LineWidth', 1.4); plot(Ts1_comb, 'LineWidth', 1.4); plot(Ts1_comb_unc, 'LineWidth', 1.4); grid on; legend('Plant output', 'Winter model', 'Summer model', 'Combined', 'Combined plus uncertainty'); 
subplot(4,5,2); plot(Ts2_plant, 'LineWidth', 1.4); hold on; plot(Ts2_lowcons, 'LineWidth', 1.4); plot(Ts2_highcons, 'LineWidth', 1.4); plot(Ts2_comb, 'LineWidth', 1.4); plot(Ts2_comb_unc, 'LineWidth', 1.4); grid on;
subplot(4,5,3); plot(Ts3_plant, 'LineWidth', 1.4); hold on; plot(Ts3_lowcons, 'LineWidth', 1.4); plot(Ts3_highcons, 'LineWidth', 1.4); plot(Ts3_comb, 'LineWidth', 1.4); plot(Ts3_comb_unc, 'LineWidth', 1.4); grid on;
subplot(4,5,4); plot(Ts4_plant, 'LineWidth', 1.4); hold on; plot(Ts4_lowcons, 'LineWidth', 1.4); plot(Ts4_highcons, 'LineWidth', 1.4); plot(Ts4_comb, 'LineWidth', 1.4); plot(Ts4_comb_unc, 'LineWidth', 1.4); grid on;
subplot(4,5,5); plot(Ts5_plant, 'LineWidth', 1.4); hold on; plot(Ts5_lowcons, 'LineWidth', 1.4); plot(Ts5_highcons, 'LineWidth', 1.4); plot(Ts5_comb, 'LineWidth', 1.4); plot(Ts5_comb_unc, 'LineWidth', 1.4); grid on;
subplot(4,5,6); plot(Tr1_plant, 'LineWidth', 1.4); hold on; plot(Tr1_lowcons, 'LineWidth', 1.4); plot(Tr1_highcons, 'LineWidth', 1.4); plot(Tr1_comb, 'LineWidth', 1.4); plot(Tr1_comb_unc, 'LineWidth', 1.4); grid on;
subplot(4,5,7); plot(Tr2_plant, 'LineWidth', 1.4); hold on; plot(Tr2_lowcons, 'LineWidth', 1.4); plot(Tr2_highcons, 'LineWidth', 1.4); plot(Tr2_comb, 'LineWidth', 1.4); plot(Tr2_comb_unc, 'LineWidth', 1.4); grid on;
subplot(4,5,8); plot(Tr3_plant, 'LineWidth', 1.4); hold on; plot(Tr3_lowcons, 'LineWidth', 1.4); plot(Tr3_highcons, 'LineWidth', 1.4); plot(Tr3_comb, 'LineWidth', 1.4); plot(Tr3_comb_unc, 'LineWidth', 1.4); grid on;
subplot(4,5,9); plot(Tr4_plant, 'LineWidth', 1.4); hold on; plot(Tr4_lowcons, 'LineWidth', 1.4); plot(Tr4_highcons, 'LineWidth', 1.4); plot(Tr4_comb, 'LineWidth', 1.4); plot(Tr4_comb_unc, 'LineWidth', 1.4); grid on;
subplot(4,5,10); plot(Tr5_plant, 'LineWidth', 1.4); hold on; plot(Tr5_lowcons, 'LineWidth', 1.4); plot(Tr5_highcons, 'LineWidth', 1.4); plot(Tr5_comb, 'LineWidth', 1.4); plot(Tr5_comb_unc, 'LineWidth', 1.4); grid on;
subplot(4,5,11); plot(mfr1_plant, 'LineWidth', 1.4); hold on; plot(mfr1_lowcons, 'LineWidth', 1.4); plot(mfr1_highcons, 'LineWidth', 1.4); plot(mfr1_comb, 'LineWidth', 1.4); plot(mfr1_comb_unc, 'LineWidth', 1.4); grid on;
subplot(4,5,12); plot(mfr2_plant, 'LineWidth', 1.4); hold on; plot(mfr2_lowcons, 'LineWidth', 1.4); plot(mfr2_highcons, 'LineWidth', 1.4); plot(mfr2_comb, 'LineWidth', 1.4); plot(mfr2_comb_unc, 'LineWidth', 1.4); grid on;
subplot(4,5,13); plot(mfr3_plant, 'LineWidth', 1.4); hold on; plot(mfr3_lowcons, 'LineWidth', 1.4); plot(mfr3_highcons, 'LineWidth', 1.4); plot(mfr3_comb, 'LineWidth', 1.4); plot(mfr3_comb_unc, 'LineWidth', 1.4); grid on;
subplot(4,5,14); plot(mfr4_plant, 'LineWidth', 1.4); hold on; plot(mfr4_lowcons, 'LineWidth', 1.4); plot(mfr4_highcons, 'LineWidth', 1.4); plot(mfr4_comb, 'LineWidth', 1.4); plot(mfr4_comb_unc, 'LineWidth', 1.4); grid on;
subplot(4,5,15); plot(mfr5_plant, 'LineWidth', 1.4); hold on; plot(mfr5_lowcons, 'LineWidth', 1.4); plot(mfr5_highcons, 'LineWidth', 1.4); plot(mfr5_comb, 'LineWidth', 1.4); plot(mfr5_comb_unc, 'LineWidth', 1.4); grid on;
subplot(4,5,16); plot(Tr_plant, 'LineWidth', 1.4); hold on; plot(Tr_lowcons, 'LineWidth', 1.4); plot(Tr_highcons, 'LineWidth', 1.4); plot(Tr_comb, 'LineWidth', 1.4); plot(Tr_comb_unc, 'LineWidth', 1.4); grid on;
subplot(4,5,17); plot(mfr_plant, 'LineWidth', 1.4); hold on; plot(mfr_lowcons, 'LineWidth', 1.4); plot(mfr_highcons, 'LineWidth', 1.4); plot(mfr_comb, 'LineWidth', 1.4); plot(mfr_comb_unc, 'LineWidth', 1.4); grid on;

%% Plot articolo
time = 0:1/12:48;
time = time(25:end);

figure('DefaultAxesFontSize',46); plot(time, Ts4_plant,'LineWidth',12); hold on; plot(time, Ts4_comb,'LineWidth',7, 'Color', "#7E2F8E"); plot(time, Ts4_comb_unc,'LineWidth',7, 'Color', "#77AC30")
xlabel('Time [h]', 'interpreter', 'latex'); ylabel('$T_5^s$ [$^{\circ}$C]', 'interpreter', 'latex'); ylim([64.2 88]); xlim([2 48]); box off; 

figure('DefaultAxesFontSize',46); plot(time, Tr_plant,'LineWidth',12); hold on; plot(time, Tr_comb,'LineWidth',7, 'Color', "#7E2F8E"); plot(time, Tr_comb_unc,'LineWidth',7, 'Color', "#77AC30")
xlabel('Time [h]', 'interpreter', 'latex'); ylabel('$T_0^r$ [$^{\circ}$C]', 'interpreter', 'latex'); ylim([53.5 63.5]); xlim([2 48]); box off; 

figure('DefaultAxesFontSize',46); plot(time, mfr_plant,'LineWidth',12); hold on; plot(time, mfr_comb,'LineWidth',7, 'Color', "#7E2F8E"); plot(time, mfr_comb_unc,'LineWidth',7, 'Color', "#77AC30")
xlabel('Time [h]', 'interpreter', 'latex'); ylabel('$q_0$ [kg/s]', 'interpreter', 'latex'); ylim([5 20.5]); xlim([2 48]); box off; 


%% FIT
y_plant = [Ts1_plant.'; Tr1_plant.'; mfr1_plant.'; Ts2_plant.'; Tr2_plant.'; mfr2_plant.'; Ts3_plant.'; Tr3_plant.'; mfr3_plant.'; Ts4_plant.'; Tr4_plant.'; mfr4_plant.'; Ts5_plant.'; Tr5_plant.'; mfr5_plant.'; Tr_plant.'; mfr_plant.';];
y_lowcons = [Ts1_lowcons.'; Tr1_lowcons.'; mfr1_lowcons.'; Ts2_lowcons.'; Tr2_lowcons.'; mfr2_lowcons.'; Ts3_lowcons.'; Tr3_lowcons.'; mfr3_lowcons.'; Ts4_lowcons.'; Tr4_lowcons.'; mfr4_lowcons.'; Ts5_lowcons.'; Tr5_lowcons.'; mfr5_lowcons.'; Tr_lowcons.'; mfr_lowcons.';];
y_highcons = [Ts1_highcons.'; Tr1_highcons.'; mfr1_highcons.'; Ts2_highcons.'; Tr2_highcons.'; mfr2_highcons.'; Ts3_highcons.'; Tr3_highcons.'; mfr3_highcons.'; Ts4_highcons.'; Tr4_highcons.'; mfr4_highcons.'; Ts5_highcons.'; Tr5_highcons.'; mfr5_highcons.'; Tr_highcons.'; mfr_highcons.';];
y_avg = [Ts1_avg.'; Tr1_avg.'; mfr1_avg.'; Ts2_avg.'; Tr2_avg.'; mfr2_avg.'; Ts3_avg.'; Tr3_avg.'; mfr3_avg.'; Ts4_avg.'; Tr4_avg.'; mfr4_avg.'; Ts5_avg.'; Tr5_avg.'; mfr5_avg.'; Tr_avg.'; mfr_avg.';];
y_comb = [Ts1_comb.'; Tr1_comb.'; mfr1_comb.'; Ts2_comb.'; Tr2_comb.'; mfr2_comb.'; Ts3_comb.'; Tr3_comb.'; mfr3_comb.'; Ts4_comb.'; Tr4_comb.'; mfr4_comb.'; Ts5_comb.'; Tr5_comb.'; mfr5_comb.'; Tr_comb.'; mfr_comb.';];
y_comb_unc = [Ts1_comb_unc.'; Tr1_comb_unc.'; mfr1_comb_unc.'; Ts2_comb_unc.'; Tr2_comb_unc.'; mfr2_comb_unc.'; Ts3_comb_unc.'; Tr3_comb_unc.'; mfr3_comb_unc.'; Ts4_comb_unc.'; Tr4_comb_unc.'; mfr4_comb_unc.'; Ts5_comb_unc.'; Tr5_comb_unc.'; mfr5_comb_unc.'; Tr_comb_unc.'; mfr_comb_unc.';];

FIT_lowcons = mean(computefit(y_lowcons, y_plant))
FIT_highcons = mean(computefit(y_highcons, y_plant))
FIT_avg = mean(computefit(y_avg, y_plant))
FIT_comb = mean(computefit(y_comb, y_plant))
FIT_FS = mean(computefit(y_comb_unc, y_plant))

%% Save
M = [T_inp_sampled, P1_sampled, P2_sampled, P3_sampled, P4_sampled, P5_sampled, Ts1_plant, Ts2_plant, Ts3_plant, Ts4_plant, Ts5_plant, Tr1_plant, Tr2_plant, Tr3_plant, Tr4_plant, Tr5_plant, mfr1_plant, mfr2_plant, mfr3_plant, mfr4_plant, mfr5_plant, Tr_plant, mfr_plant, Ts1_lowcons, Ts2_lowcons, Ts3_lowcons, Ts4_lowcons, Ts5_lowcons, Tr1_lowcons, Tr2_lowcons, Tr3_lowcons, Tr4_lowcons, Tr5_lowcons, mfr1_lowcons, mfr2_lowcons, mfr3_lowcons, mfr4_lowcons, mfr5_lowcons, Tr_lowcons, mfr_lowcons, Ts1_highcons, Ts2_highcons, Ts3_highcons, Ts4_highcons, Ts5_highcons, Tr1_highcons, Tr2_highcons, Tr3_highcons, Tr4_highcons, Tr5_highcons, mfr1_highcons, mfr2_highcons, mfr3_highcons, mfr4_highcons, mfr5_highcons, Tr_highcons, mfr_highcons, Ts1_comb, Ts2_comb, Ts3_comb, Ts4_comb, Ts5_comb, Tr1_comb, Tr2_comb, Tr3_comb, Tr4_comb, Tr5_comb, mfr1_comb, mfr2_comb, mfr3_comb, mfr4_comb, mfr5_comb, Tr_comb, mfr_comb, Ts1_comb_unc, Ts2_comb_unc, Ts3_comb_unc, Ts4_comb_unc, Ts5_comb_unc, Tr1_comb_unc, Tr2_comb_unc, Tr3_comb_unc, Tr4_comb_unc, Tr5_comb_unc, mfr1_comb_unc, mfr2_comb_unc, mfr3_comb_unc, mfr4_comb_unc, mfr5_comb_unc, Tr_comb_unc, mfr_comb_unc];
writematrix(M, 'csv_files/Simulation_2gg_FS.csv')

%% 5. Intermediate situation
T_inp_sampled = out.Tinp(25:end);
P1_sampled = out.P_inp1(25:end);
P2_sampled = out.P_inp4(25:end);
P3_sampled = out.P_inp2(25:end);
P4_sampled = out.P_inp3(25:end);
P5_sampled = out.P_inp5(25:end);

Ts1_lowcons = zeros(265,1);
Ts2_lowcons = zeros(265,1);
Ts3_lowcons = zeros(265,1);
Ts4_lowcons = zeros(265,1);
Ts5_lowcons = zeros(265,1);
Tr1_lowcons = zeros(265,1);
Tr2_lowcons = zeros(265,1);
Tr3_lowcons = zeros(265,1);
Tr4_lowcons = zeros(265,1);
Tr5_lowcons = zeros(265,1);
mfr1_lowcons = zeros(265,1);
mfr2_lowcons = zeros(265,1);
mfr3_lowcons = zeros(265,1);
mfr4_lowcons = zeros(265,1);
mfr5_lowcons = zeros(265,1);
Tr_lowcons = zeros(265,1);
mfr_lowcons = zeros(265,1);

Ts1_highcons = zeros(265,1);
Ts2_highcons = zeros(265,1);
Ts3_highcons = zeros(265,1);
Ts4_highcons = zeros(265,1);
Ts5_highcons = zeros(265,1);
Tr1_highcons = zeros(265,1);
Tr2_highcons = zeros(265,1);
Tr3_highcons = zeros(265,1);
Tr4_highcons = zeros(265,1);
Tr5_highcons = zeros(265,1);
mfr1_highcons = zeros(265,1);
mfr2_highcons = zeros(265,1);
mfr3_highcons = zeros(265,1);
mfr4_highcons = zeros(265,1);
mfr5_highcons = zeros(265,1);
Tr_highcons = zeros(265,1);
mfr_highcons = zeros(265,1);

Ts1_comb = zeros(265,1);
Ts2_comb = zeros(265,1);
Ts3_comb = zeros(265,1);
Ts4_comb = zeros(265,1);
Ts5_comb = zeros(265,1);
Tr1_comb = zeros(265,1);
Tr2_comb = zeros(265,1);
Tr3_comb = zeros(265,1);
Tr4_comb = zeros(265,1);
Tr5_comb = zeros(265,1);
mfr1_comb = zeros(265,1);
mfr2_comb = zeros(265,1);
mfr3_comb = zeros(265,1);
mfr4_comb = zeros(265,1);
mfr5_comb = zeros(265,1);
Tr_comb = zeros(265,1);
mfr_comb = zeros(265,1);

Ts1_unc = zeros(265,1);
Ts2_unc = zeros(265,1);
Ts3_unc = zeros(265,1);
Ts4_unc = zeros(265,1);
Ts5_unc = zeros(265,1);
Tr1_unc = zeros(265,1);
Tr2_unc = zeros(265,1);
Tr3_unc = zeros(265,1);
Tr4_unc = zeros(265,1);
Tr5_unc = zeros(265,1);
mfr1_unc = zeros(265,1);
mfr2_unc = zeros(265,1);
mfr3_unc = zeros(265,1);
mfr4_unc = zeros(265,1);
mfr5_unc = zeros(265,1);
Tr_unc = zeros(265,1);
mfr_unc = zeros(265,1);

for i=25:289
    Ts1_lowcons(i-24) = out.y_lowcons(1,1,i);
    Tr1_lowcons(i-24) = out.y_lowcons(2,1,i);
    mfr1_lowcons(i-24) = out.y_lowcons(3,1,i);
    Ts2_lowcons(i-24) = out.y_lowcons(4,1,i);
    Tr2_lowcons(i-24) = out.y_lowcons(5,1,i);
    mfr2_lowcons(i-24) = out.y_lowcons(6,1,i);
    Ts3_lowcons(i-24) = out.y_lowcons(7,1,i);
    Tr3_lowcons(i-24) = out.y_lowcons(8,1,i);
    mfr3_lowcons(i-24) = out.y_lowcons(9,1,i);
    Ts4_lowcons(i-24) = out.y_lowcons(10,1,i);
    Tr4_lowcons(i-24) = out.y_lowcons(11,1,i);
    mfr4_lowcons(i-24) = out.y_lowcons(12,1,i);
    Ts5_lowcons(i-24) = out.y_lowcons(13,1,i);
    Tr5_lowcons(i-24) = out.y_lowcons(14,1,i);
    mfr5_lowcons(i-24) = out.y_lowcons(15,1,i);
    Tr_lowcons(i-24) = out.y_lowcons(16,1,i);
    mfr_lowcons(i-24) = out.y_lowcons(17,1,i);

    Ts1_highcons(i-24) = out.y_highcons(1,1,i);
    Tr1_highcons(i-24) = out.y_highcons(2,1,i);
    mfr1_highcons(i-24) = out.y_highcons(3,1,i);
    Ts2_highcons(i-24) = out.y_highcons(4,1,i);
    Tr2_highcons(i-24) = out.y_highcons(5,1,i);
    mfr2_highcons(i-24) = out.y_highcons(6,1,i);
    Ts3_highcons(i-24) = out.y_highcons(7,1,i);
    Tr3_highcons(i-24) = out.y_highcons(8,1,i);
    mfr3_highcons(i-24) = out.y_highcons(9,1,i);
    Ts4_highcons(i-24) = out.y_highcons(10,1,i);
    Tr4_highcons(i-24) = out.y_highcons(11,1,i);
    mfr4_highcons(i-24) = out.y_highcons(12,1,i);
    Ts5_highcons(i-24) = out.y_highcons(13,1,i);
    Tr5_highcons(i-24) = out.y_highcons(14,1,i);
    mfr5_highcons(i-24) = out.y_highcons(15,1,i);
    Tr_highcons(i-24) = out.y_highcons(16,1,i);
    mfr_highcons(i-24) = out.y_highcons(17,1,i);

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

    Ts1_unc(i-24) = out.e_inc1step(1,1,i);
    Tr1_unc(i-24) = out.e_inc1step(2,1,i);
    mfr1_unc(i-24) = out.e_inc1step(3,1,i);
    Ts2_unc(i-24) = out.e_inc1step(4,1,i);
    Tr2_unc(i-24) = out.e_inc1step(5,1,i);
    mfr2_unc(i-24) = out.e_inc1step(6,1,i);
    Ts3_unc(i-24) = out.e_inc1step(7,1,i);
    Tr3_unc(i-24) = out.e_inc1step(8,1,i);
    mfr3_unc(i-24) = out.e_inc1step(9,1,i);
    Ts4_unc(i-24) = out.e_inc1step(10,1,i);
    Tr4_unc(i-24) = out.e_inc1step(11,1,i);
    mfr4_unc(i-24) = out.e_inc1step(12,1,i);
    Ts5_unc(i-24) = out.e_inc1step(13,1,i);
    Tr5_unc(i-24) = out.e_inc1step(14,1,i);
    mfr5_unc(i-24) = out.e_inc1step(15,1,i);
    Tr_unc(i-24) = out.e_inc1step(16,1,i);
    mfr_unc(i-24) = out.e_inc1step(17,1,i);
end

Ts1_plant = out.y_plant(25:end,1);
Ts2_plant = out.y_plant(25:end,4);
Ts3_plant = out.y_plant(25:end,2);
Ts4_plant = out.y_plant(25:end,3);
Ts5_plant = out.y_plant(25:end,5);
Tr1_plant = out.y_plant(25:end,6);
Tr2_plant = out.y_plant(25:end,9);
Tr3_plant = out.y_plant(25:end,7);
Tr4_plant = out.y_plant(25:end,8);
Tr5_plant = out.y_plant(25:end,10);
mfr1_plant = out.y_plant(25:end,11);
mfr2_plant = out.y_plant(25:end,14);
mfr3_plant = out.y_plant(25:end,12);
mfr4_plant = out.y_plant(25:end,13);
mfr5_plant = out.y_plant(25:end,15);
Tr_plant = out.y_plant(25:end,16);
mfr_plant = out.y_plant(25:end,17);

Ts1_comb_unc = Ts1_comb + [0; Ts1_unc(1:end-1)];
Ts2_comb_unc = Ts2_comb + [0; Ts2_unc(1:end-1)];
Ts3_comb_unc = Ts3_comb + [0; Ts3_unc(1:end-1)];
Ts4_comb_unc = Ts4_comb + [0; Ts4_unc(1:end-1)];
Ts5_comb_unc = Ts5_comb + [0; Ts5_unc(1:end-1)];
Tr1_comb_unc = Tr1_comb + [0; Tr1_unc(1:end-1)];
Tr2_comb_unc = Tr2_comb + [0; Tr2_unc(1:end-1)];
Tr3_comb_unc = Tr3_comb + [0; Tr3_unc(1:end-1)];
Tr4_comb_unc = Tr4_comb + [0; Tr4_unc(1:end-1)];
Tr5_comb_unc = Tr5_comb + [0; Tr5_unc(1:end-1)];
mfr1_comb_unc = mfr1_comb + [0; mfr1_unc(1:end-1)];
mfr2_comb_unc = mfr2_comb + [0; mfr2_unc(1:end-1)];
mfr3_comb_unc = mfr3_comb + [0; mfr3_unc(1:end-1)];
mfr4_comb_unc = mfr4_comb + [0; mfr4_unc(1:end-1)];
mfr5_comb_unc = mfr5_comb + [0; mfr5_unc(1:end-1)];
Tr_comb_unc = Tr_comb + [0; Tr_unc(1:end-1)];
mfr_comb_unc = mfr_comb + [0; mfr_unc(1:end-1)];

Ts1_avg = (Ts1_lowcons+Ts1_highcons)/2;
Ts2_avg = (Ts2_lowcons+Ts2_highcons)/2;
Ts3_avg = (Ts3_lowcons+Ts3_highcons)/2;
Ts4_avg = (Ts4_lowcons+Ts4_highcons)/2;
Ts5_avg = (Ts5_lowcons+Ts5_highcons)/2;
Tr1_avg = (Tr1_lowcons+Tr1_highcons)/2;
Tr2_avg = (Tr2_lowcons+Tr2_highcons)/2;
Tr3_avg = (Tr3_lowcons+Tr3_highcons)/2;
Tr4_avg = (Tr4_lowcons+Tr4_highcons)/2;
Tr5_avg = (Tr5_lowcons+Tr5_highcons)/2;
mfr1_avg = (mfr1_lowcons+mfr1_highcons)/2;
mfr2_avg = (mfr2_lowcons+mfr2_highcons)/2;
mfr3_avg = (mfr3_lowcons+mfr3_highcons)/2;
mfr4_avg = (mfr4_lowcons+mfr4_highcons)/2;
mfr5_avg = (mfr5_lowcons+mfr5_highcons)/2;
Tr_avg = (Tr_lowcons+Tr_highcons)/2;
mfr_avg = (mfr_lowcons+mfr_highcons)/2;

%% Figure
figure;
subplot(4,5,1); plot(Ts1_plant, 'LineWidth', 1.4); hold on; plot(Ts1_lowcons, 'LineWidth', 1.4); plot(Ts1_highcons, 'LineWidth', 1.4); plot(Ts1_comb, 'LineWidth', 1.4); plot(Ts1_comb_unc, 'LineWidth', 1.4); grid on; legend('Plant output', 'Winter model', 'Summer model', 'Combined', 'Combined plus uncertainty'); 
subplot(4,5,2); plot(Ts2_plant, 'LineWidth', 1.4); hold on; plot(Ts2_lowcons, 'LineWidth', 1.4); plot(Ts2_highcons, 'LineWidth', 1.4); plot(Ts2_comb, 'LineWidth', 1.4); plot(Ts2_comb_unc, 'LineWidth', 1.4); grid on;
subplot(4,5,3); plot(Ts3_plant, 'LineWidth', 1.4); hold on; plot(Ts3_lowcons, 'LineWidth', 1.4); plot(Ts3_highcons, 'LineWidth', 1.4); plot(Ts3_comb, 'LineWidth', 1.4); plot(Ts3_comb_unc, 'LineWidth', 1.4); grid on;
subplot(4,5,4); plot(Ts4_plant, 'LineWidth', 1.4); hold on; plot(Ts4_lowcons, 'LineWidth', 1.4); plot(Ts4_highcons, 'LineWidth', 1.4); plot(Ts4_comb, 'LineWidth', 1.4); plot(Ts4_comb_unc, 'LineWidth', 1.4); grid on;
subplot(4,5,5); plot(Ts5_plant, 'LineWidth', 1.4); hold on; plot(Ts5_lowcons, 'LineWidth', 1.4); plot(Ts5_highcons, 'LineWidth', 1.4); plot(Ts5_comb, 'LineWidth', 1.4); plot(Ts5_comb_unc, 'LineWidth', 1.4); grid on;
subplot(4,5,6); plot(Tr1_plant, 'LineWidth', 1.4); hold on; plot(Tr1_lowcons, 'LineWidth', 1.4); plot(Tr1_highcons, 'LineWidth', 1.4); plot(Tr1_comb, 'LineWidth', 1.4); plot(Tr1_comb_unc, 'LineWidth', 1.4); grid on;
subplot(4,5,7); plot(Tr2_plant, 'LineWidth', 1.4); hold on; plot(Tr2_lowcons, 'LineWidth', 1.4); plot(Tr2_highcons, 'LineWidth', 1.4); plot(Tr2_comb, 'LineWidth', 1.4); plot(Tr2_comb_unc, 'LineWidth', 1.4); grid on;
subplot(4,5,8); plot(Tr3_plant, 'LineWidth', 1.4); hold on; plot(Tr3_lowcons, 'LineWidth', 1.4); plot(Tr3_highcons, 'LineWidth', 1.4); plot(Tr3_comb, 'LineWidth', 1.4); plot(Tr3_comb_unc, 'LineWidth', 1.4); grid on;
subplot(4,5,9); plot(Tr4_plant, 'LineWidth', 1.4); hold on; plot(Tr4_lowcons, 'LineWidth', 1.4); plot(Tr4_highcons, 'LineWidth', 1.4); plot(Tr4_comb, 'LineWidth', 1.4); plot(Tr4_comb_unc, 'LineWidth', 1.4); grid on;
subplot(4,5,10); plot(Tr5_plant, 'LineWidth', 1.4); hold on; plot(Tr5_lowcons, 'LineWidth', 1.4); plot(Tr5_highcons, 'LineWidth', 1.4); plot(Tr5_comb, 'LineWidth', 1.4); plot(Tr5_comb_unc, 'LineWidth', 1.4); grid on;
subplot(4,5,11); plot(mfr1_plant, 'LineWidth', 1.4); hold on; plot(mfr1_lowcons, 'LineWidth', 1.4); plot(mfr1_highcons, 'LineWidth', 1.4); plot(mfr1_comb, 'LineWidth', 1.4); plot(mfr1_comb_unc, 'LineWidth', 1.4); grid on;
subplot(4,5,12); plot(mfr2_plant, 'LineWidth', 1.4); hold on; plot(mfr2_lowcons, 'LineWidth', 1.4); plot(mfr2_highcons, 'LineWidth', 1.4); plot(mfr2_comb, 'LineWidth', 1.4); plot(mfr2_comb_unc, 'LineWidth', 1.4); grid on;
subplot(4,5,13); plot(mfr3_plant, 'LineWidth', 1.4); hold on; plot(mfr3_lowcons, 'LineWidth', 1.4); plot(mfr3_highcons, 'LineWidth', 1.4); plot(mfr3_comb, 'LineWidth', 1.4); plot(mfr3_comb_unc, 'LineWidth', 1.4); grid on;
subplot(4,5,14); plot(mfr4_plant, 'LineWidth', 1.4); hold on; plot(mfr4_lowcons, 'LineWidth', 1.4); plot(mfr4_highcons, 'LineWidth', 1.4); plot(mfr4_comb, 'LineWidth', 1.4); plot(mfr4_comb_unc, 'LineWidth', 1.4); grid on;
subplot(4,5,15); plot(mfr5_plant, 'LineWidth', 1.4); hold on; plot(mfr5_lowcons, 'LineWidth', 1.4); plot(mfr5_highcons, 'LineWidth', 1.4); plot(mfr5_comb, 'LineWidth', 1.4); plot(mfr5_comb_unc, 'LineWidth', 1.4); grid on;
subplot(4,5,16); plot(Tr_plant, 'LineWidth', 1.4); hold on; plot(Tr_lowcons, 'LineWidth', 1.4); plot(Tr_highcons, 'LineWidth', 1.4); plot(Tr_comb, 'LineWidth', 1.4); plot(Tr_comb_unc, 'LineWidth', 1.4); grid on;
subplot(4,5,17); plot(mfr_plant, 'LineWidth', 1.4); hold on; plot(mfr_lowcons, 'LineWidth', 1.4); plot(mfr_highcons, 'LineWidth', 1.4); plot(mfr_comb, 'LineWidth', 1.4); plot(mfr_comb_unc, 'LineWidth', 1.4); grid on;

%% Plot articolo
time = 0:1/12:24;
time = time(25:end);

figure('DefaultAxesFontSize',46); plot(time, Ts4_plant,'LineWidth',7); hold on; plot(time, Ts4_comb,'LineWidth',7, 'Color', "#7E2F8E"); plot(time, Ts4_comb_unc,'LineWidth',7, 'Color', "#77AC30")
xlabel('Time [h]', 'interpreter', 'latex'); ylabel('$T_5^s$ [$^{\circ}$C]', 'interpreter', 'latex'); ylim([66 86]); xlim([2 24]); box off; xticks([0 4 8 12 16 20 24]);

figure('DefaultAxesFontSize',46); plot(time, Tr_plant,'LineWidth',7); hold on; plot(time, Tr_comb,'LineWidth',7, 'Color', "#7E2F8E"); plot(time, Tr_comb_unc,'LineWidth',7, 'Color', "#77AC30")
xlabel('Time [h]', 'interpreter', 'latex'); ylabel('$T_0^r$ [$^{\circ}$C]', 'interpreter', 'latex'); ylim([54 63]); xlim([2 24]); box off; xticks([0 4 8 12 16 20 24]);

figure('DefaultAxesFontSize',46); plot(time, mfr_plant,'LineWidth',7); hold on; plot(time, mfr_comb,'LineWidth',7, 'Color', "#7E2F8E"); plot(time, mfr_comb_unc,'LineWidth',7, 'Color', "#77AC30")
xlabel('Time [h]', 'interpreter', 'latex'); ylabel('$q_0$ [kg/s]', 'interpreter', 'latex'); ylim([7.9 19]); xlim([2 24]); box off; xticks([0 4 8 12 16 20 24]);


%% FIT
y_plant = [Ts1_plant.'; Tr1_plant.'; mfr1_plant.'; Ts2_plant.'; Tr2_plant.'; mfr2_plant.'; Ts3_plant.'; Tr3_plant.'; mfr3_plant.'; Ts4_plant.'; Tr4_plant.'; mfr4_plant.'; Ts5_plant.'; Tr5_plant.'; mfr5_plant.'; Tr_plant.'; mfr_plant.';];
y_lowcons = [Ts1_lowcons.'; Tr1_lowcons.'; mfr1_lowcons.'; Ts2_lowcons.'; Tr2_lowcons.'; mfr2_lowcons.'; Ts3_lowcons.'; Tr3_lowcons.'; mfr3_lowcons.'; Ts4_lowcons.'; Tr4_lowcons.'; mfr4_lowcons.'; Ts5_lowcons.'; Tr5_lowcons.'; mfr5_lowcons.'; Tr_lowcons.'; mfr_lowcons.';];
y_highcons = [Ts1_highcons.'; Tr1_highcons.'; mfr1_highcons.'; Ts2_highcons.'; Tr2_highcons.'; mfr2_highcons.'; Ts3_highcons.'; Tr3_highcons.'; mfr3_highcons.'; Ts4_highcons.'; Tr4_highcons.'; mfr4_highcons.'; Ts5_highcons.'; Tr5_highcons.'; mfr5_highcons.'; Tr_highcons.'; mfr_highcons.';];
y_avg = [Ts1_avg.'; Tr1_avg.'; mfr1_avg.'; Ts2_avg.'; Tr2_avg.'; mfr2_avg.'; Ts3_avg.'; Tr3_avg.'; mfr3_avg.'; Ts4_avg.'; Tr4_avg.'; mfr4_avg.'; Ts5_avg.'; Tr5_avg.'; mfr5_avg.'; Tr_avg.'; mfr_avg.';];
y_comb = [Ts1_comb.'; Tr1_comb.'; mfr1_comb.'; Ts2_comb.'; Tr2_comb.'; mfr2_comb.'; Ts3_comb.'; Tr3_comb.'; mfr3_comb.'; Ts4_comb.'; Tr4_comb.'; mfr4_comb.'; Ts5_comb.'; Tr5_comb.'; mfr5_comb.'; Tr_comb.'; mfr_comb.';];
y_comb_unc = [Ts1_comb_unc.'; Tr1_comb_unc.'; mfr1_comb_unc.'; Ts2_comb_unc.'; Tr2_comb_unc.'; mfr2_comb_unc.'; Ts3_comb_unc.'; Tr3_comb_unc.'; mfr3_comb_unc.'; Ts4_comb_unc.'; Tr4_comb_unc.'; mfr4_comb_unc.'; Ts5_comb_unc.'; Tr5_comb_unc.'; mfr5_comb_unc.'; Tr_comb_unc.'; mfr_comb_unc.';];

FIT_lowcons = mean(computefit(y_lowcons, y_plant))
FIT_highcons = mean(computefit(y_highcons, y_plant))
FIT_avg = mean(computefit(y_avg, y_plant))
FIT_comb = mean(computefit(y_comb, y_plant))
FIT_FS = mean(computefit(y_comb_unc, y_plant))

%% Save
M = [T_inp_sampled, P1_sampled, P2_sampled, P3_sampled, P4_sampled, P5_sampled, Ts1_plant, Ts2_plant, Ts3_plant, Ts4_plant, Ts5_plant, Tr1_plant, Tr2_plant, Tr3_plant, Tr4_plant, Tr5_plant, mfr1_plant, mfr2_plant, mfr3_plant, mfr4_plant, mfr5_plant, Tr_plant, mfr_plant, Ts1_lowcons, Ts2_lowcons, Ts3_lowcons, Ts4_lowcons, Ts5_lowcons, Tr1_lowcons, Tr2_lowcons, Tr3_lowcons, Tr4_lowcons, Tr5_lowcons, mfr1_lowcons, mfr2_lowcons, mfr3_lowcons, mfr4_lowcons, mfr5_lowcons, Tr_lowcons, mfr_lowcons, Ts1_highcons, Ts2_highcons, Ts3_highcons, Ts4_highcons, Ts5_highcons, Tr1_highcons, Tr2_highcons, Tr3_highcons, Tr4_highcons, Tr5_highcons, mfr1_highcons, mfr2_highcons, mfr3_highcons, mfr4_highcons, mfr5_highcons, Tr_highcons, mfr_highcons, Ts1_comb, Ts2_comb, Ts3_comb, Ts4_comb, Ts5_comb, Tr1_comb, Tr2_comb, Tr3_comb, Tr4_comb, Tr5_comb, mfr1_comb, mfr2_comb, mfr3_comb, mfr4_comb, mfr5_comb, Tr_comb, mfr_comb, Ts1_comb_unc, Ts2_comb_unc, Ts3_comb_unc, Ts4_comb_unc, Ts5_comb_unc, Tr1_comb_unc, Tr2_comb_unc, Tr3_comb_unc, Tr4_comb_unc, Tr5_comb_unc, mfr1_comb_unc, mfr2_comb_unc, mfr3_comb_unc, mfr4_comb_unc, mfr5_comb_unc, Tr_comb_unc, mfr_comb_unc];
writematrix(M, 'csv_files/Simulation_1gg_intermediate_FS.csv')


%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
mfr_unc = zeros(size(out.y_plant(:,17),1),1);
mfr_comb = zeros(size(out.y_plant(:,17),1),1);
for i = 1:size(out.y_plant(:,17),1)-1
    mfr_unc(i) = out.e_inc1step(17,1,i);
    mfr_comb(i) = out.y_comb(17,1,i);
end
mfr_comb_unc = mfr_comb + [0; mfr_unc(1:end-1)];

Tr_unc = zeros(size(out.y_plant(:,16),1),1);
Tr_comb = zeros(size(out.y_plant(:,16),1),1);
for i = 1:size(out.y_plant(:,16),1)-1
    Tr_unc(i) = out.e_inc1step(16,1,i);
    Tr_comb(i) = out.y_comb(16,1,i);
end
Tr_comb_unc = Tr_comb + [0; Tr_unc(1:end-1)];

figure; 
subplot(3,1,1); plot(out.y_plant(:,16)); hold on; plot(Tr_comb); plot(Tr_comb_unc); xlim([5 97])
subplot(3,1,2); plot(out.Tinp); xlim([5 97])
subplot(3,1,3); plot(out.P_inp1); hold on; plot(out.P_inp2); plot(out.P_inp3); plot(out.P_inp4); plot(out.P_inp5); xlim([5 97])

%% 6: ONLY FAST LEARNING
T_inp_sampled = out.Tinp(25:end);
P1_sampled = out.P_inp1(25:end);
P2_sampled = out.P_inp4(25:end);
P3_sampled = out.P_inp2(25:end);
P4_sampled = out.P_inp3(25:end);
P5_sampled = out.P_inp5(25:end);

Ts1_GP = zeros(553,1);
Ts2_GP = zeros(553,1);
Ts3_GP = zeros(553,1);
Ts4_GP = zeros(553,1);
Ts5_GP = zeros(553,1);
Tr1_GP = zeros(553,1);
Tr2_GP = zeros(553,1);
Tr3_GP = zeros(553,1);
Tr4_GP = zeros(553,1);
Tr5_GP = zeros(553,1);
mfr1_GP = zeros(553,1);
mfr2_GP = zeros(553,1);
mfr3_GP = zeros(553,1);
mfr4_GP = zeros(553,1);
mfr5_GP = zeros(553,1);
Tr_GP = zeros(553,1);
mfr_GP = zeros(553,1);

for i=25:577
    Ts1_GP(i-24) = out.yGP(1,1,i);
    Tr1_GP(i-24) = out.yGP(2,1,i);
    mfr1_GP(i-24) = out.yGP(3,1,i);
    Ts2_GP(i-24) = out.yGP(4,1,i);
    Tr2_GP(i-24) = out.yGP(5,1,i);
    mfr2_GP(i-24) = out.yGP(6,1,i);
    Ts3_GP(i-24) = out.yGP(7,1,i);
    Tr3_GP(i-24) = out.yGP(8,1,i);
    mfr3_GP(i-24) = out.yGP(9,1,i);
    Ts4_GP(i-24) = out.yGP(10,1,i);
    Tr4_GP(i-24) = out.yGP(11,1,i);
    mfr4_GP(i-24) = out.yGP(12,1,i);
    Ts5_GP(i-24) = out.yGP(13,1,i);
    Tr5_GP(i-24) = out.yGP(14,1,i);
    mfr5_GP(i-24) = out.yGP(15,1,i);
    Tr_GP(i-24) = out.yGP(16,1,i);
    mfr_GP(i-24) = out.yGP(17,1,i);
end

Ts1_plant = out.y_plant(25:end,1);
Ts2_plant = out.y_plant(25:end,4);
Ts3_plant = out.y_plant(25:end,2);
Ts4_plant = out.y_plant(25:end,3);
Ts5_plant = out.y_plant(25:end,5);
Tr1_plant = out.y_plant(25:end,6);
Tr2_plant = out.y_plant(25:end,9);
Tr3_plant = out.y_plant(25:end,7);
Tr4_plant = out.y_plant(25:end,8);
Tr5_plant = out.y_plant(25:end,10);
mfr1_plant = out.y_plant(25:end,11);
mfr2_plant = out.y_plant(25:end,14);
mfr3_plant = out.y_plant(25:end,12);
mfr4_plant = out.y_plant(25:end,13);
mfr5_plant = out.y_plant(25:end,15);
Tr_plant = out.y_plant(25:end,16);
mfr_plant = out.y_plant(25:end,17);


%% Plot articolo
time = 0:1/12:48;
time = time(25:end);

figure('DefaultAxesFontSize',46); plot(time, Ts4_plant,'LineWidth',12); hold on; plot(time, Ts4_GP,'LineWidth',7, 'Color', "#D6329F"); 
xlabel('Time [h]', 'interpreter', 'latex'); ylabel('$T_5^s$ [$^{\circ}$C]', 'interpreter', 'latex'); ylim([62 88]); xlim([2 48]); box off; 

figure('DefaultAxesFontSize',46); plot(time, Tr_plant,'LineWidth',12); hold on; plot(time, Tr_GP,'LineWidth',7, 'Color', "#D6329F"); 
xlabel('Time [h]', 'interpreter', 'latex'); ylabel('$T_0^r$ [$^{\circ}$C]', 'interpreter', 'latex'); ylim([53 66]); xlim([2 48]); box off; 

figure('DefaultAxesFontSize',46); plot(time, mfr_plant,'LineWidth',12); hold on; plot(time, mfr_GP,'LineWidth',7, 'Color', "#D6329F"); 
xlabel('Time [h]', 'interpreter', 'latex'); ylabel('$q_0$ [kg/s]', 'interpreter', 'latex'); ylim([4.7 19.5]); xlim([2 48]); box off; 


%% FIT
y_plant = [Ts1_plant.'; Tr1_plant.'; mfr1_plant.'; Ts2_plant.'; Tr2_plant.'; mfr2_plant.'; Ts3_plant.'; Tr3_plant.'; mfr3_plant.'; Ts4_plant.'; Tr4_plant.'; mfr4_plant.'; Ts5_plant.'; Tr5_plant.'; mfr5_plant.'; Tr_plant.'; mfr_plant.';];
y_GP = [Ts1_GP.'; Tr1_GP.'; mfr1_GP.'; Ts2_GP.'; Tr2_GP.'; mfr2_GP.'; Ts3_GP.'; Tr3_GP.'; mfr3_GP.'; Ts4_GP.'; Tr4_GP.'; mfr4_GP.'; Ts5_GP.'; Tr5_GP.'; mfr5_GP.'; Tr_GP.'; mfr_GP.';];

FIT_GP = mean(computefit(y_GP, y_plant))


%% Computational time
time1Mahal_avg = mean(out.time1Mahal)
totaltime2Mahal_avg = mean(out.totaltimeMahal)

%%
totaltime_GP = mean(simOut.computational_time)