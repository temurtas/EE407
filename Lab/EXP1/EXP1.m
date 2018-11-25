u=tf(1)

g1=tf([1],[1 1])

g2=tf([1],[10 11 1])

g3=tf([1],[10 1])

g4=tf([10 1],[100 30 2])

g5=tf([12 1],[120 34 2])

g6=tf([8 1],[80 26 2])

step(u)

hold on 

step(g1)

hold on 

step(g2)

hold on 
step(g3)

hold on 
step(g4)

hold on 
step(g5)

hold on 
step(g6)

%% -
hold off
%% -
pzmap(g1)
grid on
hold on
pzmap(g2)
grid on