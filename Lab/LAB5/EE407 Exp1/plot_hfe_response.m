%
%% Load Data
% load raw data from MAT file
% load('data_p_temp.mat');
% load('data_p_u.mat');
% save into variables
t = data_temp(:,1);
T1d = data_temp(:,2);
T1 = data_temp(:,3);
Vh = data_u(:,2);
Vb = data_u(:,3);
%
%% Plot
subplot(2,1,1);
plot(t,T1d,'b--',t,T1,'r-');
% axis([100 200 40 55]);
ylabel('T_1 (deg C)');
subplot(2,1,2);
plot(t,Vh,'r-',t,Vb,'b--');
% axis([60 120 -1 6]);
ylabel('Input (V)');
xlabel('time (s)');
legend('heater','blower');
%
%% Measure Specs
% Measure the peak time, settling time, steady-state error, and percentage
% overshoot of the response.
% uncomment the following lines to measure the specs automatically
c_ts = 0.1;
[ tp_m, ts_m, e_ss_m, PO_m ] = meas_step_rsp_specs( t, T1d, T1, c_ts, 0.1 );
 
%% Display Results
% disp(' ');
% disp( 'Measured specifications: ' )
disp( [ '       tp = ' num2str( tp_m, 3 ) ' s' ] )
disp( [ '       ts = ' num2str( ts_m, 3 ) ' s' ] )
disp( [ '       PO = ' num2str( PO_m, 3 ) ' %' ] )
disp( [ '     e_ss = ' num2str( e_ss_m, 3 ) ' degC' ] )