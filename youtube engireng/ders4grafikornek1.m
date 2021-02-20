clc;
clear;
clear all;

x=0:pi/100:2*pi;
y= sin(x); % cos deðerini de dene / - kullan
h=polar(x,y,':r')
set (h,'linewidth',4)
hold on
y2=cos(x);
h2=polar(x,y2,'--m')
set(h2,'linewidth',2)
legend('y','y2')