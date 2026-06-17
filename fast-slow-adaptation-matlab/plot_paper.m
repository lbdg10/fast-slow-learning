%% Temperature 7 days
T = u_T.InputData;
time = 0:1:168;
T_hour = zeros(1,169);

dd = 1;
for i = 1:169
    T_hour(1,i) = T(dd,1);
    dd = dd + 3599;
end

figure('DefaultAxesFontSize',52); plot(time, T_hour, 'LineWidth', 4); hold on; xlabel('Time [h]','Interpreter','latex'); ylabel('$T_0^s$ [$^{\circ}$C]','Interpreter','latex'); xlim([0 168]); ylim([63 93]); box off; % xticks([0 4 8 12 16 20]);

%% Power 7 days
time = 0:1:168;
dist = zeros(5,169);

dd = 1;
for i = 1:169
    dist(1,i) = P_inp1(dd,2);
    dist(2,i) = P_inp4(dd,2);
    dist(3,i) = P_inp2(dd,2);
    dist(4,i) = P_inp5(dd,2);
    dist(5,i) = P_inp3(dd,2);
    dd = dd + 3599;
end

figure('DefaultAxesFontSize',52); plot(time, -1/1000*dist(1,:), 'LineWidth', 4); hold on; plot(time, -1/1000*dist(3,:), 'LineWidth', 4); plot(time, -1/1000*dist(4,:), 'LineWidth', 4); plot(time, -1/1000*dist(2,:), 'LineWidth', 4); plot(time, -1/1000*dist(5,:), 'LineWidth', 4); xlabel('Time [h]','Interpreter','latex'); ylabel('$P_i^c$ [kW]','Interpreter','latex'); xlim([0 168]); ylim([100 390]); box off; yticks([100 150 200 250 300 350]);

%% Temperature 1 day
time = 0:1:24;
T_hour = zeros(1,25);

dd = 1;
for i = 1:25
    T_hour(1,i) = T_inp_sim(dd,2);
    dd = dd + 3599;
end

figure('DefaultAxesFontSize',52); plot(time, T_hour, 'LineWidth', 4); hold on; xlabel('Time [h]','Interpreter','latex'); ylabel('$T_0^s$ [$^{\circ}$C]','Interpreter','latex'); xlim([2 24]); ylim([63 93]); box off; xticks([4 8 12 16 20 24]);

%% Power 1 day
time = 0:1:24;
dist = zeros(5,25);

dd = 1;
for i = 1:25
    dist(1,i) = P_inp1(dd,2);
    dist(2,i) = P_inp4(dd,2);
    dist(3,i) = P_inp2(dd,2);
    dist(4,i) = P_inp5(dd,2);
    dist(5,i) = P_inp3(dd,2);
    dd = dd + 3599;
end

figure('DefaultAxesFontSize',52); plot(time, -1/1000*dist(1,:), 'LineWidth', 4); hold on; plot(time, -1/1000*dist(3,:), 'LineWidth', 4); plot(time, -1/1000*dist(4,:), 'LineWidth', 4); plot(time, -1/1000*dist(2,:), 'LineWidth', 4); plot(time, -1/1000*dist(5,:), 'LineWidth', 4); xlabel('Time [h]','Interpreter','latex'); ylabel('$P_i^c$ [kW]','Interpreter','latex'); xlim([2 24]); ylim([100 390]); box off; yticks([100 150 200 250 300 350]); xticks([4 8 12 16 20 24]);

%% Temperature 2 days
time = 0:1:168;
T_hour = zeros(1,169);

dd = 1;
for i = 1:49
    T_hour(1,i) = T_inp_sim(dd,2);
    dd = dd + 3599;
end

figure('DefaultAxesFontSize',52); plot(time, T_hour, 'LineWidth', 4); hold on; xlabel('Time [h]','Interpreter','latex'); ylabel('$T_0^s$ [$^{\circ}$C]','Interpreter','latex'); xlim([2 48]); ylim([63 93]); box off; % xticks([0 4 8 12 16 20]);

%% Power 2 days
time = 0:1:168;
dist = zeros(5,169);

dd = 1;
for i = 1:49
    dist(1,i) = P_inp1(dd,2);
    dist(2,i) = P_inp4(dd,2);
    dist(3,i) = P_inp2(dd,2);
    dist(4,i) = P_inp5(dd,2);
    dist(5,i) = P_inp3(dd,2);
    dd = dd + 3599;
end

figure('DefaultAxesFontSize',52); plot(time, -1/1000*dist(1,:), 'LineWidth', 4); hold on; plot(time, -1/1000*dist(3,:), 'LineWidth', 4); plot(time, -1/1000*dist(4,:), 'LineWidth', 4); plot(time, -1/1000*dist(2,:), 'LineWidth', 4); plot(time, -1/1000*dist(5,:), 'LineWidth', 4); xlabel('Time [h]','Interpreter','latex'); ylabel('$P_i^c$ [kW]','Interpreter','latex'); xlim([2 48]); ylim([100 390]); box off; yticks([100 150 200 250 300 350]);
