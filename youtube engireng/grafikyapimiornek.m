clc;
clear;
clear all;
Not=[89 56 45 34 78 92 45 33 22 12];
a=[1 2 3 4 5 6 7 8 9 10];
Not2=[56 63 32 45 78 34 90 98 33 12];
plot(a,Not,'r--',a,Not2,'g');
grid on % �zgara seklinde
title('Not de�i�imi'); % ba�l�k 
xlabel ('S�ra no') ; % x ba�l�k
ylabel ('Not'); % y ba�l�k
legend ('S�n�f1','S�n�f2'); 