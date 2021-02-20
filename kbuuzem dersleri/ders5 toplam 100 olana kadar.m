clc;
clear;
clear all;
%klavyeden girilen sayýlarýn toplamý 100 oluncaya kadar devam et 

toplam=0;
while toplam <= 100
    sayi = input ('Bir sayý giriniz=');
    toplam=toplam+sayi;
    disp (toplam);
end


% toplam=0;
% if toplam <=100
%     sayi = input ('bir sayi giriniz=');
%     toplam=toplam+sayi;
%     disp(toplam);
% end  bi kere çalýþýr dönmez
