clc;
clear;
clear all
% hepsini temizler

x =input ('bir sayý giriniz')

if (0>x)  % while ile hata aldým tekrar döngüden çýkmamasý için while kullanýlmalý derste sorulcak
end

fprintf ('sayý negatiftir tekrar giriniz');

    if   mod (x, 2 ) == 0;
    fprintf ( 'sayý çift sayýdýr');
else
    fprintf ('sayý tek sayýdýr');
end

