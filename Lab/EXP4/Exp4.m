%% %%%%%%%%%% Q1 %%%%%%%%%%
%% Var Declr.

L=5
A=4.9
p=2.7
k=0.497
c=0.215
a=k/(p*c)
Te=0
M=1
%% Calculation of  the response
t=1:1:100
i=1
while (i < 101)
   T(i)=Te+(M-Te)*erfc(L/(2*sqrt(a*i)))
   i=i+1
end
%% Plotting the response
plot(t,T)
grid on
title('Variation of Temperature T(L,t) vs t for a Unit Step Input')
xlabel ('time')
ylabel ('T(L,t)')

%% %%%%%%%%%% Q2 %%%%%%%%%%
%% for n=1

tau1=(L^2)/(a)

taue=10^(-5)*tau1

C=10^-6
            
R=taue/C

%% for n=2
L2=L/2

tau2= (L2^2)/(a)

taue2=10^(-5)*tau2

C2=10^-6
            
R2=taue2/C2

%% for n=3
L3=L/3

tau3= (L3^2)/(a)

taue3=10^(-5)*tau3

C3=10^-6
            
R3=taue3/C3

%% for n=5
L5=L/5

tau5= (L5^2)/(a)

taue5=10^(-5)*tau5

C5=10^-6
            
R5=taue5/C2

%% %%%%%%%%%% Q2 %%%%%%%%%%
%% n=1

T1=tf([1],[tau1 1])

figure;
grid on
subplot(1,2,1)
plot(t,T)
subplot(1,2,2)
step(T1)

%% n=2

T2=tf([1],[tau2^2 3*tau2 1])

figure;
grid on
subplot(1,2,1)
plot(t,T)
subplot(1,2,2)
step(T2)

%% n=3

T3=tf([1],[tau3^3 5*tau3^2 7*tau3 1])

figure;
grid on
subplot(1,2,1)
plot(t,T)
subplot(1,2,2)
step(T3)

%% n=5
a=tf([tau5 2],[1])
b=tf([tau5 1],[1])
c= a^4*b-1

T5=1/c

figure;
grid on
subplot(1,2,1)
plot(t,T)
subplot(1,2,2)  
step(T5)




