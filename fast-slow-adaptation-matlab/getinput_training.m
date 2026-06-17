%% T_ref
% Define parameters
total_time = 700000; % simulation time
freq_range = [0 5e-4]; % frequency range 0.0005
ampl_range = [0.99, 1.01]; % amplitude range (multiplied by a and b)
a = 65; % lower amplitude limit
b = 92; % upper amplitude limit
rng(10); % for low consumption
%rng(100); % for high consumption

% Generate input signal of type prbs
u_T = idinput(total_time, 'prbs', freq_range, ampl_range);

d = diff(u_T); % difference: [u(2)-u(1)  u(3)-u(2)...]
idx = find(d) + 1; % returns the linear indices corresponding to the nonzero entries of the array d
idx = [1; idx];
for j = 1 : (length(idx)-1)
     amp = (b - a).*rand + a; % rand: uniformly distributed pseudorandom numbers
     u_T(idx(j):idx(j+1)-1) = amp * u_T(idx(j));
end

u_T = awgn(u_T, 70, 'measured'); % add random WGN: the value is the signal-to-noise ratio in dB, specified as a scalar
% Create an iddata object from the generated signal u
u_T = iddata([],u_T(1:604800),1); 

figure('DefaultAxesFontSize',18); plot(u_T); grid on; xlabel('Time [s]', 'Interpreter','latex', 'FontSize',26); ylabel('Temperature [$^{\circ}$C]', 'Interpreter','latex','FontSize',26); xlim([1 604800])


%% Potenze low consumption
data = readtable("CaricoTermicoNovate.xlsx");
P1 = table2array(data(2354:2377,"PotenzaTotale"));
P2 = table2array(data(2378:2401,"PotenzaTotale"));
P3 = table2array(data(2402:2425,"PotenzaTotale"));
P4 = table2array(data(2426:2449,"PotenzaTotale"));
P5 = table2array(data(2450:2473,"PotenzaTotale"));
P6 = table2array(data(2474:2497,"PotenzaTotale"));
P7 = table2array(data(2498:2521,"PotenzaTotale"));

P_tot1 = P1*91.1;
P_tot2 = P2*91.1;
P_tot3 = P3*91.1;
P_tot4 = P4*91.1;
P_tot5 = P5*91.1;
P_tot6 = P6*91.1;
P_tot7 = P7*91.1;

P_inp1 = zeros(604800,2);
P_inp2 = zeros(604800,2);
P_inp3 = zeros(604800,2);
P_inp4 = zeros(604800,2);
P_inp5 = zeros(604800,2);
for i = 1:604800
    P_inp1(i,1) = i;
    P_inp2(i,1) = i;
    P_inp3(i,1) = i;
    P_inp4(i,1) = i;
    P_inp5(i,1) = i;
end

k=0;
for j = 1:24
    for i = 1:3600
        P_inp1(k+i,2) = - 0.11*P_tot1(j)-100000;
        P_inp2(k+i,2) = - 0.34*P_tot1(j)-100000;
        P_inp3(k+i,2) = - 0.08*P_tot1(j)-100000;
        P_inp4(k+i,2) = - 0.38*P_tot1(j)-100000;
        P_inp5(k+i,2) = - 0.09*P_tot1(j)-100000;
    end
    k = k +3600;
end

k=0;
for j = 1:24
    for i = 1:3600
        P_inp1(86400+k+i,2) = - 0.11*P_tot2(j)-100000;
        P_inp2(86400+k+i,2) = - 0.34*P_tot2(j)-100000;
        P_inp3(86400+k+i,2) = - 0.08*P_tot2(j)-100000;
        P_inp4(86400+k+i,2) = - 0.38*P_tot2(j)-100000;
        P_inp5(86400+k+i,2) = - 0.09*P_tot2(j)-100000;
    end
    k = k +3600;
end

k=0;
for j = 1:24
    for i = 1:3600
        P_inp1(172800+k+i,2) = - 0.11*P_tot3(j)-100000;
        P_inp2(172800+k+i,2) = - 0.34*P_tot3(j)-100000;
        P_inp3(172800+k+i,2) = - 0.08*P_tot3(j)-100000;
        P_inp4(172800+k+i,2) = - 0.38*P_tot3(j)-100000;
        P_inp5(172800+k+i,2) = - 0.09*P_tot3(j)-100000;
    end
    k = k +3600;
end

k=0;
for j = 1:24
    for i = 1:3600
        P_inp1(259200+k+i,2) = - 0.11*P_tot4(j)-100000;
        P_inp2(259200+k+i,2) = - 0.34*P_tot4(j)-100000;
        P_inp3(259200+k+i,2) = - 0.08*P_tot4(j)-100000;
        P_inp4(259200+k+i,2) = - 0.38*P_tot4(j)-100000;
        P_inp5(259200+k+i,2) = - 0.09*P_tot4(j)-100000;
    end
    k = k +3600;
end

k=0;
for j = 1:24
    for i = 1:3600
        P_inp1(345600+k+i,2) = - 0.11*P_tot5(j)-100000;
        P_inp2(345600+k+i,2) = - 0.34*P_tot5(j)-100000;
        P_inp3(345600+k+i,2) = - 0.08*P_tot5(j)-100000;
        P_inp4(345600+k+i,2) = - 0.38*P_tot5(j)-100000;
        P_inp5(345600+k+i,2) = - 0.09*P_tot5(j)-100000;
    end
    k = k +3600;
end

k=0;
for j = 1:24
    for i = 1:3600
        P_inp1(432000+k+i,2) = - 0.11*P_tot6(j)-100000;
        P_inp2(432000+k+i,2) = - 0.34*P_tot6(j)-100000;
        P_inp3(432000+k+i,2) = - 0.08*P_tot6(j)-100000;
        P_inp4(432000+k+i,2) = - 0.38*P_tot6(j)-100000;
        P_inp5(432000+k+i,2) = - 0.09*P_tot6(j)-100000;
    end
    k = k +3600;
end

k=0;
for j = 1:24
    for i = 1:3600
        P_inp1(518400+k+i,2) = - 0.11*P_tot7(j)-100000;
        P_inp2(518400+k+i,2) = - 0.34*P_tot7(j)-100000;
        P_inp3(518400+k+i,2) = - 0.08*P_tot7(j)-100000;
        P_inp4(518400+k+i,2) = - 0.38*P_tot7(j)-100000;
        P_inp5(518400+k+i,2) = - 0.09*P_tot7(j)-100000;
    end
    k = k +3600;
end

figure; plot(-1/1000*P_inp1(:,2)); hold on; plot(-1/1000*P_inp2(:,2)); plot(-1/1000*P_inp3(:,2)); plot(-1/1000*P_inp4(:,2)) ; plot(-1/1000*P_inp5(:,2)); xlim([1 604800])

%% Potenze high consumption
data = readtable("CaricoTermicoNovate.xlsx");
P1 = table2array(data(2354:2377,"PotenzaTotale"));
P2 = table2array(data(2378:2401,"PotenzaTotale"));
P3 = table2array(data(2402:2425,"PotenzaTotale"));
P4 = table2array(data(2426:2449,"PotenzaTotale"));
P5 = table2array(data(2450:2473,"PotenzaTotale"));
P6 = table2array(data(2474:2497,"PotenzaTotale"));
P7 = table2array(data(2498:2521,"PotenzaTotale"));

P_tot1 = P1*91.1;
P_tot2 = P2*91.1;
P_tot3 = P3*91.1;
P_tot4 = P4*91.1;
P_tot5 = P5*91.1;
P_tot6 = P6*91.1;
P_tot7 = P7*91.1;

P_inp1 = zeros(604800,2);
P_inp2 = zeros(604800,2);
P_inp3 = zeros(604800,2);
P_inp4 = zeros(604800,2);
P_inp5 = zeros(604800,2);
for i = 1:604800
    P_inp1(i,1) = i;
    P_inp2(i,1) = i;
    P_inp3(i,1) = i;
    P_inp4(i,1) = i;
    P_inp5(i,1) = i;
end

k=0;
for j = 1:24
    for i = 1:3600
        P_inp1(k+i,2) = - 0.11*P_tot1(j)-150000;
        P_inp2(k+i,2) = - 0.34*P_tot1(j)-150000;
        P_inp3(k+i,2) = - 0.08*P_tot1(j)-150000;
        P_inp4(k+i,2) = - 0.38*P_tot1(j)-150000;
        P_inp5(k+i,2) = - 0.09*P_tot1(j)-150000;
    end
    k = k +3600;
end

k=0;
for j = 1:24
    for i = 1:3600
        P_inp1(86400+k+i,2) = - 0.11*P_tot2(j)-150000;
        P_inp2(86400+k+i,2) = - 0.34*P_tot2(j)-150000;
        P_inp3(86400+k+i,2) = - 0.08*P_tot2(j)-150000;
        P_inp4(86400+k+i,2) = - 0.38*P_tot2(j)-150000;
        P_inp5(86400+k+i,2) = - 0.09*P_tot2(j)-150000;
    end
    k = k +3600;
end

k=0;
for j = 1:24
    for i = 1:3600
        P_inp1(172800+k+i,2) = - 0.11*P_tot3(j)-150000;
        P_inp2(172800+k+i,2) = - 0.34*P_tot3(j)-150000;
        P_inp3(172800+k+i,2) = - 0.08*P_tot3(j)-150000;
        P_inp4(172800+k+i,2) = - 0.38*P_tot3(j)-150000;
        P_inp5(172800+k+i,2) = - 0.09*P_tot3(j)-150000;
    end
    k = k +3600;
end

k=0;
for j = 1:24
    for i = 1:3600
        P_inp1(259200+k+i,2) = - 0.11*P_tot4(j)-150000;
        P_inp2(259200+k+i,2) = - 0.34*P_tot4(j)-150000;
        P_inp3(259200+k+i,2) = - 0.08*P_tot4(j)-150000;
        P_inp4(259200+k+i,2) = - 0.38*P_tot4(j)-150000;
        P_inp5(259200+k+i,2) = - 0.09*P_tot4(j)-150000;
    end
    k = k +3600;
end

k=0;
for j = 1:24
    for i = 1:3600
        P_inp1(345600+k+i,2) = - 0.11*P_tot5(j)-150000;
        P_inp2(345600+k+i,2) = - 0.34*P_tot5(j)-150000;
        P_inp3(345600+k+i,2) = - 0.08*P_tot5(j)-150000;
        P_inp4(345600+k+i,2) = - 0.38*P_tot5(j)-150000;
        P_inp5(345600+k+i,2) = - 0.09*P_tot5(j)-150000;
    end
    k = k +3600;
end

k=0;
for j = 1:24
    for i = 1:3600
        P_inp1(432000+k+i,2) = - 0.11*P_tot6(j)-150000;
        P_inp2(432000+k+i,2) = - 0.34*P_tot6(j)-150000;
        P_inp3(432000+k+i,2) = - 0.08*P_tot6(j)-150000;
        P_inp4(432000+k+i,2) = - 0.38*P_tot6(j)-150000;
        P_inp5(432000+k+i,2) = - 0.09*P_tot6(j)-150000;
    end
    k = k +3600;
end

k=0;
for j = 1:24
    for i = 1:3600
        P_inp1(518400+k+i,2) = - 0.11*P_tot7(j)-150000;
        P_inp2(518400+k+i,2) = - 0.34*P_tot7(j)-150000;
        P_inp3(518400+k+i,2) = - 0.08*P_tot7(j)-150000;
        P_inp4(518400+k+i,2) = - 0.38*P_tot7(j)-150000;
        P_inp5(518400+k+i,2) = - 0.09*P_tot7(j)-150000;
    end
    k = k +3600;
end

figure; plot(-1/1000*P_inp1(:,2)); hold on; plot(-1/1000*P_inp2(:,2)); plot(-1/1000*P_inp3(:,2)); plot(-1/1000*P_inp4(:,2)) ; plot(-1/1000*P_inp5(:,2)); xlim([1 604800])


%% Potenze high & low consumption
data = readtable("CaricoTermicoNovate.xlsx");
P1 = table2array(data(2354:2377,"PotenzaTotale"));
P2 = table2array(data(2378:2401,"PotenzaTotale"));
P3 = table2array(data(2402:2425,"PotenzaTotale"));
P4 = table2array(data(2426:2449,"PotenzaTotale"));
P5 = table2array(data(2450:2473,"PotenzaTotale"));
P6 = table2array(data(2474:2497,"PotenzaTotale"));
P7 = table2array(data(2498:2521,"PotenzaTotale"));

P_tot1 = P1*91.1;
P_tot2 = P2*91.1;
P_tot3 = P3*91.1;
P_tot4 = P4*91.1;
P_tot5 = P5*91.1;
P_tot6 = P6*91.1;
P_tot7 = P7*91.1;

P_inp1 = zeros(604800,2);
P_inp2 = zeros(604800,2);
P_inp3 = zeros(604800,2);
P_inp4 = zeros(604800,2);
P_inp5 = zeros(604800,2);
for i = 1:604800
    P_inp1(i,1) = i;
    P_inp2(i,1) = i;
    P_inp3(i,1) = i;
    P_inp4(i,1) = i;
    P_inp5(i,1) = i;
end

k=0;
for j = 1:24
    for i = 1:3600
        P_inp1(k+i,2) = - 0.11*P_tot1(j)-100000;
        P_inp2(k+i,2) = - 0.34*P_tot1(j)-100000;
        P_inp3(k+i,2) = - 0.08*P_tot1(j)-100000;
        P_inp4(k+i,2) = - 0.38*P_tot1(j)-100000;
        P_inp5(k+i,2) = - 0.09*P_tot1(j)-100000;
    end
    k = k +3600;
end

k=0;
for j = 1:24
    for i = 1:3600
        P_inp1(86400+k+i,2) = - 0.11*P_tot2(j)-100000;
        P_inp2(86400+k+i,2) = - 0.34*P_tot2(j)-100000;
        P_inp3(86400+k+i,2) = - 0.08*P_tot2(j)-100000;
        P_inp4(86400+k+i,2) = - 0.38*P_tot2(j)-100000;
        P_inp5(86400+k+i,2) = - 0.09*P_tot2(j)-100000;
    end
    k = k +3600;
end

k=0;
for j = 1:24
    for i = 1:3600
        P_inp1(172800+k+i,2) = - 0.11*P_tot3(j)-100000;
        P_inp2(172800+k+i,2) = - 0.34*P_tot3(j)-100000;
        P_inp3(172800+k+i,2) = - 0.08*P_tot3(j)-100000;
        P_inp4(172800+k+i,2) = - 0.38*P_tot3(j)-100000;
        P_inp5(172800+k+i,2) = - 0.09*P_tot3(j)-100000;
    end
    k = k +3600;
end

k=0;
for j = 1:24
    for i = 1:3600
        P_inp1(259200+k+i,2) = - 0.11*P_tot4(j)-150000;
        P_inp2(259200+k+i,2) = - 0.34*P_tot4(j)-150000;
        P_inp3(259200+k+i,2) = - 0.08*P_tot4(j)-150000;
        P_inp4(259200+k+i,2) = - 0.38*P_tot4(j)-150000;
        P_inp5(259200+k+i,2) = - 0.09*P_tot4(j)-150000;
    end
    k = k +3600;
end

k=0;
for j = 1:24
    for i = 1:3600
        P_inp1(345600+k+i,2) = - 0.11*P_tot5(j)-150000;
        P_inp2(345600+k+i,2) = - 0.34*P_tot5(j)-150000;
        P_inp3(345600+k+i,2) = - 0.08*P_tot5(j)-150000;
        P_inp4(345600+k+i,2) = - 0.38*P_tot5(j)-150000;
        P_inp5(345600+k+i,2) = - 0.09*P_tot5(j)-150000;
    end
    k = k +3600;
end

k=0;
for j = 1:24
    for i = 1:3600
        P_inp1(432000+k+i,2) = - 0.11*P_tot6(j)-150000;
        P_inp2(432000+k+i,2) = - 0.34*P_tot6(j)-150000;
        P_inp3(432000+k+i,2) = - 0.08*P_tot6(j)-150000;
        P_inp4(432000+k+i,2) = - 0.38*P_tot6(j)-150000;
        P_inp5(432000+k+i,2) = - 0.09*P_tot6(j)-150000;
    end
    k = k +3600;
end

k=0;
for j = 1:24
    for i = 1:3600
        P_inp1(518400+k+i,2) = - 0.11*P_tot7(j)-150000;
        P_inp2(518400+k+i,2) = - 0.34*P_tot7(j)-150000;
        P_inp3(518400+k+i,2) = - 0.08*P_tot7(j)-150000;
        P_inp4(518400+k+i,2) = - 0.38*P_tot7(j)-150000;
        P_inp5(518400+k+i,2) = - 0.09*P_tot7(j)-150000;
    end
    k = k +3600;
end

figure; plot(-1/1000*P_inp1(:,2)); hold on; plot(-1/1000*P_inp2(:,2)); plot(-1/1000*P_inp3(:,2)); plot(-1/1000*P_inp4(:,2)) ; plot(-1/1000*P_inp5(:,2)); xlim([1 604800])

%% Potenze full range
data = readtable("CaricoTermicoNovate.xlsx");
P1 = table2array(data(2354:2377,"PotenzaTotale"));
P2 = table2array(data(2378:2401,"PotenzaTotale"));
P3 = table2array(data(2402:2425,"PotenzaTotale"));
P4 = table2array(data(2426:2449,"PotenzaTotale"));
P5 = table2array(data(2450:2473,"PotenzaTotale"));
P6 = table2array(data(2474:2497,"PotenzaTotale"));
P7 = table2array(data(2498:2521,"PotenzaTotale"));

P_tot1 = P1*120;
P_tot2 = P2*120;
P_tot3 = P3*120;
P_tot4 = P4*120;
P_tot5 = P5*120;
P_tot6 = P6*120;
P_tot7 = P7*120;

P_inp1 = zeros(604800,2);
P_inp2 = zeros(604800,2);
P_inp3 = zeros(604800,2);
P_inp4 = zeros(604800,2);
P_inp5 = zeros(604800,2);
for i = 1:604800
    P_inp1(i,1) = i;
    P_inp2(i,1) = i;
    P_inp3(i,1) = i;
    P_inp4(i,1) = i;
    P_inp5(i,1) = i;
end

k=0;
for j = 1:24
    for i = 1:3600
        P_inp1(k+i,2) = - 0.11*P_tot1(j)-100000;
        P_inp2(k+i,2) = - 0.34*P_tot1(j)-100000;
        P_inp3(k+i,2) = - 0.08*P_tot1(j)-100000;
        P_inp4(k+i,2) = - 0.38*P_tot1(j)-100000;
        P_inp5(k+i,2) = - 0.09*P_tot1(j)-100000;
    end
    k = k +3600;
end

k=0;
for j = 1:24
    for i = 1:3600
        P_inp1(86400+k+i,2) = - 0.11*P_tot2(j)-100000;
        P_inp2(86400+k+i,2) = - 0.34*P_tot2(j)-100000;
        P_inp3(86400+k+i,2) = - 0.08*P_tot2(j)-100000;
        P_inp4(86400+k+i,2) = - 0.38*P_tot2(j)-100000;
        P_inp5(86400+k+i,2) = - 0.09*P_tot2(j)-100000;
    end
    k = k +3600;
end

k=0;
for j = 1:24
    for i = 1:3600
        P_inp1(172800+k+i,2) = - 0.11*P_tot3(j)-100000;
        P_inp2(172800+k+i,2) = - 0.34*P_tot3(j)-100000;
        P_inp3(172800+k+i,2) = - 0.08*P_tot3(j)-100000;
        P_inp4(172800+k+i,2) = - 0.38*P_tot3(j)-100000;
        P_inp5(172800+k+i,2) = - 0.09*P_tot3(j)-100000;
    end
    k = k +3600;
end

k=0;
for j = 1:24
    for i = 1:3600
        P_inp1(259200+k+i,2) = - 0.11*P_tot4(j)-100000;
        P_inp2(259200+k+i,2) = - 0.34*P_tot4(j)-100000;
        P_inp3(259200+k+i,2) = - 0.08*P_tot4(j)-100000;
        P_inp4(259200+k+i,2) = - 0.38*P_tot4(j)-100000;
        P_inp5(259200+k+i,2) = - 0.09*P_tot4(j)-100000;
    end
    k = k +3600;
end

k=0;
for j = 1:24
    for i = 1:3600
        P_inp1(345600+k+i,2) = - 0.11*P_tot5(j)-100000;
        P_inp2(345600+k+i,2) = - 0.34*P_tot5(j)-100000;
        P_inp3(345600+k+i,2) = - 0.08*P_tot5(j)-100000;
        P_inp4(345600+k+i,2) = - 0.38*P_tot5(j)-100000;
        P_inp5(345600+k+i,2) = - 0.09*P_tot5(j)-100000;
    end
    k = k +3600;
end

k=0;
for j = 1:24
    for i = 1:3600
        P_inp1(432000+k+i,2) = - 0.11*P_tot6(j)-100000;
        P_inp2(432000+k+i,2) = - 0.34*P_tot6(j)-100000;
        P_inp3(432000+k+i,2) = - 0.08*P_tot6(j)-100000;
        P_inp4(432000+k+i,2) = - 0.38*P_tot6(j)-100000;
        P_inp5(432000+k+i,2) = - 0.09*P_tot6(j)-100000;
    end
    k = k +3600;
end

k=0;
for j = 1:24
    for i = 1:3600
        P_inp1(518400+k+i,2) = - 0.11*P_tot7(j)-100000;
        P_inp2(518400+k+i,2) = - 0.34*P_tot7(j)-100000;
        P_inp3(518400+k+i,2) = - 0.08*P_tot7(j)-100000;
        P_inp4(518400+k+i,2) = - 0.38*P_tot7(j)-100000;
        P_inp5(518400+k+i,2) = - 0.09*P_tot7(j)-100000;
    end
    k = k +3600;
end

figure; plot(-1/1000*P_inp1(:,2)); hold on; plot(-1/1000*P_inp2(:,2)); plot(-1/1000*P_inp3(:,2)); plot(-1/1000*P_inp4(:,2)) ; plot(-1/1000*P_inp5(:,2)); xlim([1 604800])


%% From iddata to normal
T = u_T.InputData;
T_inp_sim = zeros(604800,2);

for i = 1:604800
    T_inp_sim(i,1) = i;
    T_inp_sim(i,2) = T(i,1);
end

figure; plot(T_inp_sim(:,2))

