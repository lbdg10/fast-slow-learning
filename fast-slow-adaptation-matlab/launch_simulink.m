%% Run simulations
tic
simOut = sim('FastAndSlow_3.slx');
T_total = toc


%% Solo fast
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
    Ts1_GP(i-24) = simOut.yGP(1,1,i);
    Tr1_GP(i-24) = simOut.yGP(2,1,i);
    mfr1_GP(i-24) = simOut.yGP(3,1,i);
    Ts2_GP(i-24) = simOut.yGP(4,1,i);
    Tr2_GP(i-24) = simOut.yGP(5,1,i);
    mfr2_GP(i-24) = simOut.yGP(6,1,i);
    Ts3_GP(i-24) = simOut.yGP(7,1,i);
    Tr3_GP(i-24) = simOut.yGP(8,1,i);
    mfr3_GP(i-24) = simOut.yGP(9,1,i);
    Ts4_GP(i-24) = simOut.yGP(10,1,i);
    Tr4_GP(i-24) = simOut.yGP(11,1,i);
    mfr4_GP(i-24) = simOut.yGP(12,1,i);
    Ts5_GP(i-24) = simOut.yGP(13,1,i);
    Tr5_GP(i-24) = simOut.yGP(14,1,i);
    mfr5_GP(i-24) = simOut.yGP(15,1,i);
    Tr_GP(i-24) = simOut.yGP(16,1,i);
    mfr_GP(i-24) = simOut.yGP(17,1,i);
end

Ts1_plant = simOut.y_plant(25:end,1);
Ts2_plant = simOut.y_plant(25:end,4);
Ts3_plant = simOut.y_plant(25:end,2);
Ts4_plant = simOut.y_plant(25:end,3);
Ts5_plant = simOut.y_plant(25:end,5);
Tr1_plant = simOut.y_plant(25:end,6);
Tr2_plant = simOut.y_plant(25:end,9);
Tr3_plant = simOut.y_plant(25:end,7);
Tr4_plant = simOut.y_plant(25:end,8);
Tr5_plant = simOut.y_plant(25:end,10);
mfr1_plant = simOut.y_plant(25:end,11);
mfr2_plant = simOut.y_plant(25:end,14);
mfr3_plant = simOut.y_plant(25:end,12);
mfr4_plant = simOut.y_plant(25:end,13);
mfr5_plant = simOut.y_plant(25:end,15);
Tr_plant = simOut.y_plant(25:end,16);
mfr_plant = simOut.y_plant(25:end,17);


%% Fast and slow

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
    Ts1_lowcons(i-24) = simOut.y_lowcons(1,1,i);
    Tr1_lowcons(i-24) = simOut.y_lowcons(2,1,i);
    mfr1_lowcons(i-24) = simOut.y_lowcons(3,1,i);
    Ts2_lowcons(i-24) = simOut.y_lowcons(4,1,i);
    Tr2_lowcons(i-24) = simOut.y_lowcons(5,1,i);
    mfr2_lowcons(i-24) = simOut.y_lowcons(6,1,i);
    Ts3_lowcons(i-24) = simOut.y_lowcons(7,1,i);
    Tr3_lowcons(i-24) = simOut.y_lowcons(8,1,i);
    mfr3_lowcons(i-24) = simOut.y_lowcons(9,1,i);
    Ts4_lowcons(i-24) = simOut.y_lowcons(10,1,i);
    Tr4_lowcons(i-24) = simOut.y_lowcons(11,1,i);
    mfr4_lowcons(i-24) = simOut.y_lowcons(12,1,i);
    Ts5_lowcons(i-24) = simOut.y_lowcons(13,1,i);
    Tr5_lowcons(i-24) = simOut.y_lowcons(14,1,i);
    mfr5_lowcons(i-24) = simOut.y_lowcons(15,1,i);
    Tr_lowcons(i-24) = simOut.y_lowcons(16,1,i);
    mfr_lowcons(i-24) = simOut.y_lowcons(17,1,i);

    Ts1_highcons(i-24) = simOut.y_highcons(1,1,i);
    Tr1_highcons(i-24) = simOut.y_highcons(2,1,i);
    mfr1_highcons(i-24) = simOut.y_highcons(3,1,i);
    Ts2_highcons(i-24) = simOut.y_highcons(4,1,i);
    Tr2_highcons(i-24) = simOut.y_highcons(5,1,i);
    mfr2_highcons(i-24) = simOut.y_highcons(6,1,i);
    Ts3_highcons(i-24) = simOut.y_highcons(7,1,i);
    Tr3_highcons(i-24) = simOut.y_highcons(8,1,i);
    mfr3_highcons(i-24) = simOut.y_highcons(9,1,i);
    Ts4_highcons(i-24) = simOut.y_highcons(10,1,i);
    Tr4_highcons(i-24) = simOut.y_highcons(11,1,i);
    mfr4_highcons(i-24) = simOut.y_highcons(12,1,i);
    Ts5_highcons(i-24) = simOut.y_highcons(13,1,i);
    Tr5_highcons(i-24) = simOut.y_highcons(14,1,i);
    mfr5_highcons(i-24) = simOut.y_highcons(15,1,i);
    Tr_highcons(i-24) = simOut.y_highcons(16,1,i);
    mfr_highcons(i-24) = simOut.y_highcons(17,1,i);

    Ts1_comb(i-24) = simOut.y_comb(1,1,i);
    Tr1_comb(i-24) = simOut.y_comb(2,1,i);
    mfr1_comb(i-24) = simOut.y_comb(3,1,i);
    Ts2_comb(i-24) = simOut.y_comb(4,1,i);
    Tr2_comb(i-24) = simOut.y_comb(5,1,i);
    mfr2_comb(i-24) = simOut.y_comb(6,1,i);
    Ts3_comb(i-24) = simOut.y_comb(7,1,i);
    Tr3_comb(i-24) = simOut.y_comb(8,1,i);
    mfr3_comb(i-24) = simOut.y_comb(9,1,i);
    Ts4_comb(i-24) = simOut.y_comb(10,1,i);
    Tr4_comb(i-24) = simOut.y_comb(11,1,i);
    mfr4_comb(i-24) = simOut.y_comb(12,1,i);
    Ts5_comb(i-24) = simOut.y_comb(13,1,i);
    Tr5_comb(i-24) = simOut.y_comb(14,1,i);
    mfr5_comb(i-24) = simOut.y_comb(15,1,i);
    Tr_comb(i-24) = simOut.y_comb(16,1,i);
    mfr_comb(i-24) = simOut.y_comb(17,1,i);

    Ts1_unc(i-24) = simOut.e_inc1step(1,1,i);
    Tr1_unc(i-24) = simOut.e_inc1step(2,1,i);
    mfr1_unc(i-24) = simOut.e_inc1step(3,1,i);
    Ts2_unc(i-24) = simOut.e_inc1step(4,1,i);
    Tr2_unc(i-24) = simOut.e_inc1step(5,1,i);
    mfr2_unc(i-24) = simOut.e_inc1step(6,1,i);
    Ts3_unc(i-24) = simOut.e_inc1step(7,1,i);
    Tr3_unc(i-24) = simOut.e_inc1step(8,1,i);
    mfr3_unc(i-24) = simOut.e_inc1step(9,1,i);
    Ts4_unc(i-24) = simOut.e_inc1step(10,1,i);
    Tr4_unc(i-24) = simOut.e_inc1step(11,1,i);
    mfr4_unc(i-24) = simOut.e_inc1step(12,1,i);
    Ts5_unc(i-24) = simOut.e_inc1step(13,1,i);
    Tr5_unc(i-24) = simOut.e_inc1step(14,1,i);
    mfr5_unc(i-24) = simOut.e_inc1step(15,1,i);
    Tr_unc(i-24) = simOut.e_inc1step(16,1,i);
    mfr_unc(i-24) = simOut.e_inc1step(17,1,i);
end

Ts1_plant = simOut.y_plant(25:end,1);
Ts2_plant = simOut.y_plant(25:end,4);
Ts3_plant = simOut.y_plant(25:end,2);
Ts4_plant = simOut.y_plant(25:end,3);
Ts5_plant = simOut.y_plant(25:end,5);
Tr1_plant = simOut.y_plant(25:end,6);
Tr2_plant = simOut.y_plant(25:end,9);
Tr3_plant = simOut.y_plant(25:end,7);
Tr4_plant = simOut.y_plant(25:end,8);
Tr5_plant = simOut.y_plant(25:end,10);
mfr1_plant = simOut.y_plant(25:end,11);
mfr2_plant = simOut.y_plant(25:end,14);
mfr3_plant = simOut.y_plant(25:end,12);
mfr4_plant = simOut.y_plant(25:end,13);
mfr5_plant = simOut.y_plant(25:end,15);
Tr_plant = simOut.y_plant(25:end,16);
mfr_plant = simOut.y_plant(25:end,17);

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

%% Solo slow - full range
Ts1_fullrange = zeros(553,1);
Ts2_fullrange = zeros(553,1);
Ts3_fullrange = zeros(553,1);
Ts4_fullrange = zeros(553,1);
Ts5_fullrange = zeros(553,1);
Tr1_fullrange = zeros(553,1);
Tr2_fullrange = zeros(553,1);
Tr3_fullrange = zeros(553,1);
Tr4_fullrange = zeros(553,1);
Tr5_fullrange = zeros(553,1);
mfr1_fullrange = zeros(553,1);
mfr2_fullrange = zeros(553,1);
mfr3_fullrange = zeros(553,1);
mfr4_fullrange = zeros(553,1);
mfr5_fullrange = zeros(553,1);
Tr_fullrange = zeros(553,1);
mfr_fullrange = zeros(553,1);

for i=25:577
    Ts1_fullrange(i-24) = simOut.y_fullrange(1,1,i);
    Tr1_fullrange(i-24) = simOut.y_fullrange(2,1,i);
    mfr1_fullrange(i-24) = simOut.y_fullrange(3,1,i);
    Ts2_fullrange(i-24) = simOut.y_fullrange(4,1,i);
    Tr2_fullrange(i-24) = simOut.y_fullrange(5,1,i);
    mfr2_fullrange(i-24) = simOut.y_fullrange(6,1,i);
    Ts3_fullrange(i-24) = simOut.y_fullrange(7,1,i);
    Tr3_fullrange(i-24) = simOut.y_fullrange(8,1,i);
    mfr3_fullrange(i-24) = simOut.y_fullrange(9,1,i);
    Ts4_fullrange(i-24) = simOut.y_fullrange(10,1,i);
    Tr4_fullrange(i-24) = simOut.y_fullrange(11,1,i);
    mfr4_fullrange(i-24) = simOut.y_fullrange(12,1,i);
    Ts5_fullrange(i-24) = simOut.y_fullrange(13,1,i);
    Tr5_fullrange(i-24) = simOut.y_fullrange(14,1,i);
    mfr5_fullrange(i-24) = simOut.y_fullrange(15,1,i);
    Tr_fullrange(i-24) = simOut.y_fullrange(16,1,i);
    mfr_fullrange(i-24) = simOut.y_fullrange(17,1,i);
end

Ts1_plant = simOut.y_plant(25:end,1);
Ts2_plant = simOut.y_plant(25:end,4);
Ts3_plant = simOut.y_plant(25:end,2);
Ts4_plant = simOut.y_plant(25:end,3);
Ts5_plant = simOut.y_plant(25:end,5);
Tr1_plant = simOut.y_plant(25:end,6);
Tr2_plant = simOut.y_plant(25:end,9);
Tr3_plant = simOut.y_plant(25:end,7);
Tr4_plant = simOut.y_plant(25:end,8);
Tr5_plant = simOut.y_plant(25:end,10);
mfr1_plant = simOut.y_plant(25:end,11);
mfr2_plant = simOut.y_plant(25:end,14);
mfr3_plant = simOut.y_plant(25:end,12);
mfr4_plant = simOut.y_plant(25:end,13);
mfr5_plant = simOut.y_plant(25:end,15);
Tr_plant = simOut.y_plant(25:end,16);
mfr_plant = simOut.y_plant(25:end,17);

%% Figure
figure;
subplot(4,5,1); plot(Ts1_plant, 'LineWidth', 1.4); hold on; plot(Ts1_fullrange, 'LineWidth', 1.4); 
subplot(4,5,2); plot(Ts2_plant, 'LineWidth', 1.4); hold on; plot(Ts2_fullrange, 'LineWidth', 1.4); 
subplot(4,5,3); plot(Ts3_plant, 'LineWidth', 1.4); hold on; plot(Ts3_fullrange, 'LineWidth', 1.4); 
subplot(4,5,4); plot(Ts4_plant, 'LineWidth', 1.4); hold on; plot(Ts4_fullrange, 'LineWidth', 1.4); 
subplot(4,5,5); plot(Ts5_plant, 'LineWidth', 1.4); hold on; plot(Ts5_fullrange, 'LineWidth', 1.4); 
subplot(4,5,6); plot(Tr1_plant, 'LineWidth', 1.4); hold on; plot(Tr1_fullrange, 'LineWidth', 1.4); 
subplot(4,5,7); plot(Tr2_plant, 'LineWidth', 1.4); hold on; plot(Tr2_fullrange, 'LineWidth', 1.4); 
subplot(4,5,8); plot(Tr3_plant, 'LineWidth', 1.4); hold on; plot(Tr3_fullrange, 'LineWidth', 1.4); 
subplot(4,5,9); plot(Tr4_plant, 'LineWidth', 1.4); hold on; plot(Tr4_fullrange, 'LineWidth', 1.4); 
subplot(4,5,10); plot(Tr5_plant, 'LineWidth', 1.4); hold on; plot(Tr5_fullrange, 'LineWidth', 1.4);
subplot(4,5,11); plot(mfr1_plant, 'LineWidth', 1.4); hold on; plot(mfr1_fullrange, 'LineWidth', 1.4);
subplot(4,5,12); plot(mfr2_plant, 'LineWidth', 1.4); hold on; plot(mfr2_fullrange, 'LineWidth', 1.4); 
subplot(4,5,13); plot(mfr3_plant, 'LineWidth', 1.4); hold on; plot(mfr3_fullrange, 'LineWidth', 1.4); 
subplot(4,5,14); plot(mfr4_plant, 'LineWidth', 1.4); hold on; plot(mfr4_fullrange, 'LineWidth', 1.4); 
subplot(4,5,15); plot(mfr5_plant, 'LineWidth', 1.4); hold on; plot(mfr5_fullrange, 'LineWidth', 1.4); 
subplot(4,5,16); plot(Tr_plant, 'LineWidth', 1.4); hold on; plot(Tr_fullrange, 'LineWidth', 1.4); 
subplot(4,5,17); plot(mfr_plant, 'LineWidth', 1.4); hold on; plot(mfr_fullrange, 'LineWidth', 1.4); 

y_plant = [Ts1_plant.'; Tr1_plant.'; mfr1_plant.'; Ts2_plant.'; Tr2_plant.'; mfr2_plant.'; Ts3_plant.'; Tr3_plant.'; mfr3_plant.'; Ts4_plant.'; Tr4_plant.'; mfr4_plant.'; Ts5_plant.'; Tr5_plant.'; mfr5_plant.'; Tr_plant.'; mfr_plant.';];
y_fullrange = [Ts1_fullrange.'; Tr1_fullrange.'; mfr1_fullrange.'; Ts2_fullrange.'; Tr2_fullrange.'; mfr2_fullrange.'; Ts3_fullrange.'; Tr3_fullrange.'; mfr3_fullrange.'; Ts4_fullrange.'; Tr4_fullrange.'; mfr4_fullrange.'; Ts5_fullrange.'; Tr5_fullrange.'; mfr5_fullrange.'; Tr_fullrange.'; mfr_fullrange.';];

FIT_fullrange = mean(computefit(y_fullrange, y_plant))