clc;
clear;
clear all;
% hepsini temizler 

aci1=input('A��lardan birini giriniz=')
aci2=input ('A��lardan di�erini giriniz=')
while(aci1+aci2)>=180 || (aci1==0)|| (aci2==0)
    aci1=input('A��lardan birini giriniz=')
    aci2=input ('A��lardan di�erini giriniz=')
end
aci3=180-(aci1+aci2);
fprintf('3.a��m�n de�eri=%d\n',aci3)