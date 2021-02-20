clc;
clear;
clear all;
% hepsini temizler 
N=input ( 'Bir sayi giriniz=\n')
carpim=1;
for i=1:1:N  
    sayi=input('Bir sayi giriniz=')
    carpim=carpim*sayi;
end
  fprintf('Çrpým=%g',carpim)  