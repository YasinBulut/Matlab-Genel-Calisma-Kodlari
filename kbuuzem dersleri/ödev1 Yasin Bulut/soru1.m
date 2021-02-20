clc;
clear;
clear all;
% hepsini temizler 

aci1=input('Açýlardan birini giriniz=')
aci2=input ('Açýlardan diðerini giriniz=')
while(aci1+aci2)>=180 || (aci1==0)|| (aci2==0)
    aci1=input('Açýlardan birini giriniz=')
    aci2=input ('Açýlardan diðerini giriniz=')
end
aci3=180-(aci1+aci2);
fprintf('3.açýmýn deðeri=%d\n',aci3)