clear
clc
load('Exp2_SysIDData.mat')
plot(time,input)
grid on;
hold on 
plot(time,output)
title('Input and Experimental Output for Bump Test');
ylabel('Tempertature');
xlabel('Time');
legend('Input','Output');
savefig('images/exp2.fig');
fig=openfig('images/exp2.fig');
saveas(fig,'images/exp2.png');
close(fig);
hold off;

%% - for systemIdent.

inputa(:)=input(:)-2

plot(time,inputa)

outputa(:)=output(:)-17.5

plot(time,outputa)  


%% - from exp data

Kp=63.553
Tp1=130.03
Td=3
s = tf('s')
G = (Kp/(1+Tp1*s))*exp(-Td*s)

step(G)
grid on

%% -
    
Yi =17.5
Yf=217.8
DY=Yf-Yi
Y1_3=Yi+DY/3
Y2_3=Yi+2*DY/3
u_in=2
u_fin=3.5
Du=u_fin-u_in
K_p=DY/Du

t_in=52.7
t1_3=101
t2_3=167
tau_p=(t2_3-t1_3)/0.7

theta_p=t1_3-0.4*tau_p-t_in

%% - 

Kc_p_exp =(0.2/K_p)*(tau_p/theta_p)^1.22

Kc_pi_exp = (0.586/K_p)*(tau_p/theta_p)^0.916

tau_pi_exp = tau_p/(1.03-0.165*(theta_p/tau_p))

%% 

K_p_m = P1D.Kp
tau_p_m= P1D.Tp1
theta_p_m = P1D.Td/10



Kc_p_model =(0.2/K_p_m)*(tau_p_m/theta_p_m)^1.22
Kc_pi_model = (0.586/K_p_m)*(tau_p_m/theta_p_m)^0.916
tau_pi_model = tau_p_m/(1.03-0.165*(theta_p_m/tau_p_m))


