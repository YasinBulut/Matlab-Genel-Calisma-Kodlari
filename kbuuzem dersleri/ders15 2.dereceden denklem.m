clc;
clear;
clear all;
% 2. dereceden bir denklemin katsayýlarý kullanýcý tarafýndan girildiðinde 
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
    fprintf('köklerden biri =%g,diðeri =\n',x1,x2);
end
if delta>0
    x1=(-b+sqrt(delta))/(2*a);
    x2=(-b-sqrt(delta))/(2*a);
    fprintf('köklerden biri =%g,diðeri =\n',x1,x2);
       
end




