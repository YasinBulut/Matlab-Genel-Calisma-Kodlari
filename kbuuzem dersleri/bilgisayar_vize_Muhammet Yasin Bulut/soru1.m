clc;
clear;
clear all;

ad=input('Musterinin ad�n� giriniz=');
d.yili = input ('Musterinin dogum yilini giriniz=');
while (d.yili>2020) || (d.yili<1800)
    d.yili=input ('Musterinin dogum y�l�n� giriniz=');
end
yas= 2020 - d.yili;
if  yas<10
    bilet=30-30*0.5;
elseif yas>65
    bilet=30-30*0,2;
else
     bilet=30;   
end
    

    fprintf ('Ad�=%s Yas=%g ucret=%g ',ad, yas , bilet);
    