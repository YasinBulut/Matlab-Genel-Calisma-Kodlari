clc;
clear;
clear all;
% 2. dereceden bir denklemin katsay�lar� kullan�c� taraf�ndan girildi�inde 
% reel koklerini bulan program 
% ax^2+bx+c=0
a=input('a degerini giriiniz');
b=input('b degerini giriiniz');
c=input('c degerini giriiniz');
delta=b^2-4*a*c;
if delta<0
    fprintf('reel kok yoktur')
end
if delta==0
    x1=-b/(2*a)
    x2=x1;
    fprintf('k�klerden biri =%g,di�eri =\n',x1,x2);
end
if delta>0
    x1=(-b+sqrt(delta))/(2*a);
    x2=(-b-sqrt(delta))/(2*a);
    fprintf('k�klerden biri =%g,di�eri =\n',x1,x2);
       
end




