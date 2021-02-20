a=8;
b=-3;
k=[2 3 5;1 4 7;1 2 -2]
c=max(a,b); %max alma
d=min(a,b); %min alma 
e=abs(b);  % mutlak deðer 
f=sqrt(25);  % karakok alma
g=det(k)  % determinant alýr
h=inv(k);
i=length(k); % eleman sayisi
% grafik çizdirme 
Not=[89 56 45 34 78 92 45 33 22 12];
a=[1 2 3 4 5 6 7 8 9 10];
Not2=[56 63 32 45 78 34 90 98 33 12];
plot(a,Not,'r--',a,Not2,'g');
grid on % ýzgara seklinde
title('Not deðiþimi'); % baþlýk 
xlabel ('Sýra no') ; % x baþlýk
ylabel ('Not'); % y baþlýk
legend ('Sýnýf1','Sýnýf2'); 
