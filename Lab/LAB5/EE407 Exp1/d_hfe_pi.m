%% D_HFE_PI
%
% Designs a proportional-integral (PI) temperature controller for the
% Heatflow plant based on the desired overshoot and peak time 
% specifications.
%
% ************************************************************************
% Input paramters:
% K         Model steady-state gain                 (deg C/V)
% tau       Model time constant                     (s)
% PO        Percentage overshoot specification      (%)
% tp        Peak time specifications                (s)
%
% ************************************************************************
% Output parameters:
% kp        Proportional gain                       (V.s/degC)
% ki        Integral gain                           (V/degC)
%
% Copyright (C) 2009 Quanser Consulting Inc.
% Quanser Consulting Inc.
%%
%
function [ kp, ki ] = d_hfe_pi( K, tau, PO, tp )
    % Damping ratio from overshoot specification.
    zeta = -log(PO/100) * sqrt( 1 / ( ( log(PO/100) )^2 + pi^2 ) );
    % Natural frequency from specifications (rad/s)
    wn = pi / ( tp * sqrt(1-zeta^2) );
    % Proportional gain (V.s/rad)
    kp = (-1+2*zeta*wn*tau)/K;
    % Integral gain (V/rad)
    ki = wn^2*tau/K;
end
