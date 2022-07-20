
close all
close all
clear all
clc
%%

load InputBoost.txt
load OutputBoost.txt

[n, p] = size(InputBoost);
[m,z] = size( OutputBoost);
t = 1:n; 
t1 = 1:m;


InputBoost=smooth(InputBoost,0.7,'rlowess');
OutputBoost=smooth(OutputBoost,0.65,'rlowess');
t=t';
I=fit(t,InputBoost,'poly4'); 

I2=fit(t1',OutputBoost,'poly1'); 


plot(I,'k')
hold on

plot(t,  InputBoost)
legend('Input voltage') 
xlabel('Time [cs]')
ylabel('Voltage [V]')
ylim([18 55])
grid on
%title('Boost operation mode')
hold on 
%plot(t1, OutputBoost) 
hold on
plot(I2,'r')
