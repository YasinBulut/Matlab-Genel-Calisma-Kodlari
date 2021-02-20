clc;
clear;
clear all;

x=0:1:10;
y1=x;
y2=x*2;
y3=x*4;

subplot (3,1,1) % 4 lü çizdir 
plot(x,y1,'-b','linewidth',3)% blue / linewidth kalýnlýk 
%hold on  % 2 grafigi tek yerde gösterme
subplot (3,1,2)
plot (x,y2,'--r','linewidth',4) % red / -- kesik kesik /o yuvarlak çizim 
%hold on 
%figure % ayrý yapar tabloyu
subplot (3,1,3)
plot (x,y3,':k','linewidth',2) % black  / : nokta nokta , 
grid on
%legend('a1','a2','a3') % isimlendirme 







