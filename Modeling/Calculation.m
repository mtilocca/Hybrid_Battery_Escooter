clear all;close all;clc;
%% Calculations 
Vbat = 22;
Vdc= 48;
Idc = 22.64;
f=32000;
T=1/f;
P=Vdc*Idc;
Iin = P/Vbat;
Rboost = P/(Idc^2);
Rbuck = P/(Iin^2);
%Boost
d=1-(Vbat/Vdc);
rip=(0.35*Idc*Vdc)/Vbat;  
L = (Vbat*d)/(f*rip);  
dVl  = 0.01*Vdc;
C= (Idc*d)/(f*dVl); 

% Buck 
Vbat1 = 38;
d1 = Vbat1/Vdc;
dV2 = 0.01*Vbat;
C1= (d1*Iin)/(f*dV2);
L1 = (Vbat*(1-d1))/(2*f*Iin);