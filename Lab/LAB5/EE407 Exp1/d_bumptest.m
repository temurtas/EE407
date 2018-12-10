%
%% d_find_model
% Finds the steady-state gain and time constant of a bumptest response.
%
function [K,tau] = d_bumptest(t,u,y)
%
%% Collect data
% number of samples
n = max(size(u));
% index when step starts      
k = 1;
u_prev = u(1);
% find index when step starts
while (k < n)
    u_prev = u(k);
    k = k + 1;
    if (u(k) > u_prev)
        i0 = k;
    end
end
% time of step
t0 = t(i0)
% step amplitude
du = u(i0) - u(i0-1);
% initial response value
y0 = y(i0)
% steady-state
y_ss = y(n)
% temperature change
dy = y_ss - y0
%
%% Find steady-state gain and time constant
% steady-state gain
K = dy / du;
% Output at first decay time
y_t1 = (1-exp(-1))*dy + y0;
% Find index at first decay
i1 = min(find(y > y_t1));
% Time at first decay (s)
t1 = t(i1)
% Experimentally derived time constant (s)
tau = t1 - t0;
%
end
