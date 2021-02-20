clc;
clear;
clear all;

% klavyeden girilen 2 sayýnýn ortak bölenlerini ekrana yazdýr 
sayi1 =input ('1.sayý girin=');
sayi2 = input ('2. sayý girin=');
 if sayi1>sayi2 
     kucuk=sayi2;
 else
     	kucuk=sayi1;
 end
%%%%%%%
for i=1:1:kucuk
    if (mod(sayi1,i)==0) && (mod(sayi2,i)==0)
        bolen=i;
        fprintf ('ortak bölünenlerden biri= %f\n',i);
        
    end
end