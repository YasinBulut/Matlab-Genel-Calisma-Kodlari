clc;
clear;
clear all;

% klavyeden girilen 2 say�n�n ortak b�lenlerini ekrana yazd�r 
sayi1 =input ('1.say� girin=');
sayi2 = input ('2. say� girin=');
 if sayi1>sayi2 
     kucuk=sayi2;
 else
     	kucuk=sayi1;
 end
%%%%%%%
for i=1:1:kucuk
    if (mod(sayi1,i)==0) && (mod(sayi2,i)==0)
        bolen=i;
        fprintf ('ortak b�l�nenlerden biri= %f\n',i);
        
    end
end