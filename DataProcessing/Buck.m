close all
clear all
clc
%%

load BUCKIN.txt
load OutputBuck.txt

[n, p] = size(BUCKIN);
[m,z] = size( OutputBuck);
t = 1:n; 
t1 = 1:m;

BUCKIN=smooth(BUCKIN,0.7,'rlowess');
OutputBuck=smooth(OutputBuck,0.65,'rlowess');
t=t';
I=fit(t,BUCKIN,'poly4'); 

I2=fit(t1',OutputBuck,'poly1'); 


plot(I,'k')
hold on

plot(t,  BUCKIN),
legend('Input voltage') 
xlabel('Time [cs]')
ylabel('Voltage [V]')
ylim([18 55])
grid on
%title('Buck operation mode')
hold on 
plot(t1, OutputBuck) 
hold off