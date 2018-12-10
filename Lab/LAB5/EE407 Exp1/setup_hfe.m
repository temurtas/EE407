%% HEATFLOW
% Run this file before running any of the HFE Simulink models.
%
%% Sensor Calibration 
% Temperature Sensors 
K_TEMP = 20; % deg C/V
% Fan Tachometer
K_TACH_V2HZ = 17.73; % Hz/V
HZ2RPM = 60; % RPM/Hz
K_TACH = K_TACH_V2HZ * HZ2RPM; % RPM/V
