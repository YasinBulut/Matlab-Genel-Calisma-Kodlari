clc;
clear;
clear all
% hepsini temizler

x =input ('bir say� giriniz')

if (0>x)  % while ile hata ald�m tekrar d�ng�den ��kmamas� i�in while kullan�lmal� derste sorulcak
end

fprintf ('say� negatiftir tekrar giriniz');

    if   mod (x, 2 ) == 0;
    fprintf ( 'say� �ift say�d�r');
else
    fprintf ('say� tek say�d�r');
end

