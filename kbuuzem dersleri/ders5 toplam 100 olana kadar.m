clc;
clear;
clear all;
%klavyeden girilen say�lar�n toplam� 100 oluncaya kadar devam et 

toplam=0;
while toplam <= 100
    sayi = input ('Bir say� giriniz=');
    toplam=toplam+sayi;
    disp (toplam);
end


% toplam=0;
% if toplam <=100
%     sayi = input ('bir sayi giriniz=');
%     toplam=toplam+sayi;
%     disp(toplam);
% end  bi kere �al���r d�nmez
