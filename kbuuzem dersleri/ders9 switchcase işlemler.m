clc;
clear;
clear all;
 islem =input ('Toplama i�in 1  , ��karma i�in 2 , �arpma i�in 3 , b�lme i�in 4');
 a=input ('Bir say� giriniz');
 b=input ('Bir say� daha giriniz');
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
         disp ('Hatal� rakam girdiniz');
 end
 fprintf ('sonu�=%f',sonuc);
         