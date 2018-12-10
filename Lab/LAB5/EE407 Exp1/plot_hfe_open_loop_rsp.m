%
%% Load Data
% load raw data from MAT file
load('data_open_loop.mat');
% save into variables
t = data_hfe_ol(1,:);
T1 = data_hfe_ol(2,:);
T2 = data_hfe_ol(3,:);
T3 = data_hfe_ol(4,:);
Vh = data_hfe_ol(5,:);
Vb = data_hfe_ol(6,:);
%
%% Plot
subplot(2,1,1);
plot(t,T1);
axis([0 60 20 60]);
ylabel('T_1 (deg C)');
% subplot(2,2,2);
% plot(t,T2);
% ylabel('T_2 (deg C)');
% subplot(2,2,4);
% plot(t,T3);
% ylabel('T_3 (deg C)');
subplot(2,1,2);
plot(t,Vh,'r-',t,Vb,'b--');
axis([0 60 -1 6]);
ylabel('Input (V)');
xlabel('time (s)');
legend('heater','blower');
%
%% Bumptest
% obtain steady-state gain and time constant at each sensor
[K1,tau1] = d_bumptest(t,Vh,T1);
[K2,tau2] = d_bumptest(t,Vh,T2);
[K3,tau3] = d_bumptest(t,Vh,T3);
% display gains and time constants
disp(' ');
disp(['K1 = ' num2str(K1,3) ' degC/V  tau1 = ' num2str(tau1,3) ' s']);
disp(['K2 = ' num2str(K2,3) ' degC/V  tau2 = ' num2str(tau2,3) ' s']);
disp(['K3 = ' num2str(K3,3) ' degC/V  tau3 = ' num2str(tau3,3) ' s']);
%
%% Design PI control
% peak time and overshoot specifications
tp = 15.0; % v1 - 10%
PO = 15.0; % v1 - 10 sec
% find PI gains
[kp,ki] = d_hfe_pi(K1, tau1, PO, tp)
%