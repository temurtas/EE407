%% Load and process On/Off Controller with Width=1.0

load('data_open_loop.mat')

t=data_hfe_ol(1,:);
T1=data_hfe_ol(2,:);
T2=data_hfe_ol(3,:);
T3=data_hfe_ol(4,:);
Vh=data_hfe_ol(5,:);
Vb=data_hfe_ol(6,:);

plot(t,T1);
grid on;
ylim([0 110]);
title('Temperatue Response for Bump Test');
ylabel('Tempertature');
xlabel('Time');
hold on;
plot(t,T2);
hold on;
plot(t,T3);
legend('T1','T2','T3');
savefig('data_open_loop_temp.fig');
fig=openfig('data_open_loop_temp.fig');
saveas(fig,'data_open_loop_temp.png');
close(fig);
hold off;


plot(t,Vh);
grid on;
ylim([0 5]);
title('Applied Heater Voltages for Bump Test');
ylabel('Voltage');
xlabel('Time');
hold on;
plot(t,Vb);
legend('V_h','V_b');
savefig('data_open_loop_volt.fig');
fig=openfig('data_open_loop_volt.fig');
saveas(fig,'data_open_loop_volt.png');
close(fig);
hold off;


%% Load and process On/Off Controller with Width=1.0

load('data_u_onoff_width=1.0.mat')
load('data_temp_onoff_width=1.0.mat')

t=data_temp(:,1);
T1d=data_temp(:,2);
T1=data_temp(:,3);
Vh=data_u(:,2);
Vb=data_u(:,3);

plot(t,T1d);
grid on;
ylim([40 50]);
title('On/Off Controller with Width=1.0');
ylabel('Tempertature');
xlabel('Time');
hold on;
plot(t,T1);
legend('T1d','Tq');
savefig('onoff_width=1.0.fig');
fig=openfig('onoff_width=1.0.fig');
saveas(fig,'onoff_width=1.0.png');
close(fig);
hold off;


%% Load and process On/Off Controller with Width=0.2

load('data_u_onoff_width=0.2.mat')
load('data_temp_onoff_width=0.2.mat')

t=data_temp(:,1);
T1d=data_temp(:,2);
T1=data_temp(:,3);
Vh=data_u(:,2);
Vb=data_u(:,3);

plot(t,T1d);
grid on;
ylim([42 53]);
title('On/Off Controller with Width=0.2');
ylabel('Tempertature');
xlabel('Time');
hold on;
plot(t,T1);
legend('T1d','Tq');
savefig('onoff_width=0.2.fig');
fig=openfig('onoff_width=0.2.fig');
saveas(fig,'onoff_width=0.2.png');
close(fig);
hold off;


%% Load and process PI Controller with Kp=0.7 & Ki=0.05
load('data_u_pi_kp=0.7_ki=0.05.mat')
load('data_temp_pi_kp=0.7_ki=0.05.mat')

t=data_temp(:,1);
T1d=data_temp(:,2);
T1=data_temp(:,3);
Vh=data_u(:,2);
Vb=data_u(:,3);

plot(t,T1d);
grid on;
ylim([42 52]);
title('PI Controller with Kp=0.7 & Ki=0.05');
ylabel('Tempertature');
xlabel('Time');
hold on;
plot(t,T1);
legend('T1d','Tq');
savefig('pi_kp=0.7_ki=0.05.fig');
fig=openfig('pi_kp=0.7_ki=0.05.fig');
saveas(fig,'pi_kp=0.7_ki=0.05.png');
close(fig);
hold off;

%% Load and process P Controller with K_p=0.3

load('data_u_p_with_kp=0.3.mat')
load('data_temp_p_with_kp=0.3.mat')

t=data_temp(:,1);
T1d=data_temp(:,2);
T1=data_temp(:,3);
Vh=data_u(:,2);
Vb=data_u(:,3);

plot(t,T1d);
grid on;
ylim([38 52]);
title('P Controller with K_p=0.3');
ylabel('Tempertature');
xlabel('Time');
hold on;
plot(t,T1);
legend('T1d','Tq');
savefig('p_with_kp=0.3.fig');
fig=openfig('p_with_kp=0.3.fig');
saveas(fig,'p_with_kp=0.3.png');
close(fig);
hold off;

%% Load and process  P Controller with K_p=0.5

load('data_temp_p_with_kp=0.5.mat')
load('data_temp_p_with_kp=0.5.mat')

t=data_temp(:,1);
T1d=data_temp(:,2);
T1=data_temp(:,3);
Vh=data_u(:,2);
Vb=data_u(:,3);

plot(t,T1d);
grid on;
ylim([40 50]);
title('P Controller with K_p=0.5');
ylabel('Tempertature');
xlabel('Time');
hold on;
plot(t,T1);
legend('T1d','Tq');
savefig('p_with_kp=0.5.fig');
fig=openfig('p_with_kp=0.5.fig');
saveas(fig,'p_with_kp=0.5.png');
close(fig);
hold off;

%% Load and process PI Controller with Kp=0.5 & Ki=0.1
load('data_u_pi_kp=0.5_ki=0.1.mat')
load('data_temp_pi_kp=0.5_ki=0.1.mat')

t=data_temp(:,1);
T1d=data_temp(:,2);
T1=data_temp(:,3);
Vh=data_u(:,2);
Vb=data_u(:,3);

plot(t,T1d);
grid on;
ylim([42 52]);
title('PI Controller with K_p=0.5 & K_i=0.1');
ylabel('Tempertature');
xlabel('Time');
hold on;
plot(t,T1);
legend('T1d','Tq');
savefig('pi_kp=0.5_ki=0.1.fig');
fig=openfig('pi_kp=0.5_ki=0.1.fig');
saveas(fig,'pi_kp=0.5_ki=0.1.png');
close(fig);
hold off;

%% Load and process PI Controller with Kp=0.5 & Ki=0.06
load('data_u_pi_kp=0.5_ki=0.06.mat')
load('data_temp_pi_kp=0.5_ki=0.06.mat')

t=data_temp(:,1);
T1d=data_temp(:,2);
T1=data_temp(:,3);
Vh=data_u(:,2);
Vb=data_u(:,3);

plot(t,T1d);
grid on;
ylim([42 52]);
title('PI Controller with K_p=0.5 & K_i=0.06');
ylabel('Tempertature');
xlabel('Time');
hold on;
plot(t,T1);
legend('T1d','Tq');
savefig('pi_kp=0.5_ki=0.06.fig');
fig=openfig('pi_kp=0.5_ki=0.06.fig');
saveas(fig,'pi_kp=0.5_ki=0.06.png');
close(fig);
hold off;

%% Load and process PI Controller with Kp=0.5 & Ki=0.06 Without Anti-Windup
load('data_u_pi_kp=0.5_ki=0.06_withoutanti.mat')
load('data_temp_pi_kp=0.5_ki=0.06_withoutanti.mat')

t=data_temp(:,1);
T1d=data_temp(:,2);
T1=data_temp(:,3);
Vh=data_u(:,2);
Vb=data_u(:,3);

plot(t,T1d);
grid on;
ylim([42 52]);
title('PI Controller with K_p=0.5 & K_i=0.06 Without Anti-Windup');
ylabel('Tempertature');
xlabel('Time');
hold on;
plot(t,T1);
legend('T1d','Tq');
savefig('pi_kp=0.5_ki=0.06_withoutanti.fig');
fig=openfig('pi_kp=0.5_ki=0.06_withoutanti.fig');
saveas(fig,'pi_kp=0.5_ki=0.06_withoutanti.png');
close(fig);
hold off;

%% Load and process PI Controller with Kp=0.5 & Ki=0.075
load('data_u_pi_kp=0.5_ki=0.075.mat')
load('data_temp_pi_kp=0.5_ki=0.075.mat')

t=data_temp(:,1);
T1d=data_temp(:,2);
T1=data_temp(:,3);
Vh=data_u(:,2);
Vb=data_u(:,3);

plot(t,T1d);
grid on;
ylim([42 52]);
title('PI Controller with K_p=0.5 & K_i=0.075');
ylabel('Tempertature');
xlabel('Time');
hold on;
plot(t,T1);
legend('T1d','Tq');
savefig('pi_kp_0.5_ki_0.075.fig');
fig=openfig('pi_kp_0.5_ki_0.075.fig');
saveas(fig,'pi_kp_0.5_ki_0.075.png');
close(fig);
hold off;

%% Load and process PI Controller with Preliminary Kp & Ki values
load('data_u_pi_with_prelim_values.mat')
load('data_temp_pi_with_prelim_values.mat')

t=data_temp(:,1);
T1d=data_temp(:,2);
T1=data_temp(:,3);
Vh=data_u(:,2);
Vb=data_u(:,3);

plot(t,T1d);
grid on;
ylim([42 52]);
title('PI Controller with Preliminary K_p & K_i values');
ylabel('Tempertature');
xlabel('Time');
hold on;
plot(t,T1);
legend('T1d','Tq');
savefig('pi_with_prelim_values.fig');
fig=openfig('pi_with_prelim_values.fig');
saveas(fig,'pi_with_prelim_values.png');
close(fig);
hold off;
