clc;
clear;
clear all;
 islem =input ('Toplama için 1  , Çýkarma için 2 , çarpma için 3 , bölme için 4');
 a=input ('Bir sayý giriniz');
 b=input ('Bir sayý daha giriniz');
 switch (islem )
     case 1
         sonuc=a+b;
     case 2 
         sonuc=a-b;
     case 3
         sonuc =a*b
     case 4 
         sonuc=a/b
     otherwise
         disp ('Hatalý rakam girdiniz');
 end
 fprintf ('sonuç=%f',sonuc);
         