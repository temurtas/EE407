%% Initial Datas %%%%%
load('Cont_data.mat')

Pcont(1,:) = [];
PIcont(1,:) = [];
PID1cont(1,:) = [];
PIDcont2(1,:) = [];

%% %% P Controller %%%%%%%%

P_time = Pcont{:,1};
P_PV = Pcont{:,2};
P_OP = Pcont{:,3};
P_SP = Pcont{:,4};
P_Model = Pcont{:,5};

plot(P_time , P_PV)
grid on;
title('P Controller');
ylabel('Water Level');
xlabel('Time');
hold on;
plot(P_time , P_OP)
hold on;
plot(P_time , P_SP)
hold on;
plot(P_time , P_Model)
legend('PV','OP','SP','Model');
savefig('P_cont.fig');
fig=openfig('P_cont.fig');
saveas(fig,'P_cont.png');
close(fig);
hold off;

%% %% PI Controller %%%%%%%%

PI_time = PIcont{:,1};
PI_PV = PIcont{:,2};
PI_OP = PIcont{:,3};
PI_SP = PIcont{:,4};
PI_Model = PIcont{:,5};

plot(PI_time , PI_PV)
grid on;
title('PI Controller');
ylabel('Water Level');
xlabel('Time');
hold on;
plot(PI_time , PI_OP)
hold on;
plot(PI_time , PI_SP)
hold on;
plot(PI_time , PI_Model)
legend('PV','OP','SP','Model');
savefig('PI_cont.fig');
fig=openfig('PI_cont.fig');
saveas(fig,'PI_cont.png');
close(fig);
hold off;

%% %% PID Controller with td=1min %%%%%%%%

PID1_time = PID1cont{:,1};
PID1_PV = PID1cont{:,2};
PID1_OP = PID1cont{:,3};
PID1_SP = PID1cont{:,4};
PID1_Model = PID1cont{:,5};

plot(PID1_time , PID1_PV)
grid on;
title('PID Controller with \tau_d=10 minutes');
ylabel('Water Level');
xlabel('Time');
hold on;
plot(PID1_time , PID1_OP)
hold on;
plot(PID1_time , PID1_SP)
hold on;
plot(PID1_time , PID1_Model)
legend('PV','OP','SP','Model');
savefig('PID1_cont.fig');
fig=openfig('PID1_cont.fig');
saveas(fig,'PID1_cont.png');
close(fig);
hold off;

%% %% PID Controller with td=10min %%%%%%%%

PID2_time = PIDcont2{:,1};
PID2_PV = PIDcont2{:,2};
PID2_OP = PIDcont2{:,3};
PID2_SP = PIDcont2{:,4};
PID2_Model = PIDcont2{:,5};

plot(PID2_time , PID2_PV)
grid on;
title('PID Controller with \tau_d=10 minutes');
ylabel('Water Level');
xlabel('Time');
hold on;
plot(PID2_time , PID2_OP)
hold on;
plot(PID2_time , PID2_SP)
hold on;
plot(PID2_time , PID2_Model)
legend('PV','OP','SP','Model');
savefig('PID2_cont.fig');
fig=openfig('PID2_cont.fig');
saveas(fig,'PID2_cont.png');
close(fig);
hold off;