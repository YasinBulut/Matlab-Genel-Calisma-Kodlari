clc;
clear;
clear all;
% s�n�f mevcudu belli olan bir s�n�f�n ��rencilerinin notunun girilmesi ve
% harf notu  ile beraber ge�ti�i veya kald��� tespit eden program 
%not 0 ile 100 aras�nda olmazsa uyar� ver
mevcut =input ('s�n�f mevcudunu giriniz');
for i=1:1:mevcut
   ad=input('��rencinin ad�n� girin:\n');
   not=input('��rencinin notunu girin\n');
        while (not<0)  || (not>100) % veya anlam� 
    not=input('hatal� not tekrar giriniz');
   end 
    fprintf ('%s adl� ��renvinin notu=%f/n',ad,not); 
   if (not>=80)&& (not <=100);  % ve anlam� 
   fprintf ('%s A harf notu ile ge�ti',ad);
   elseif (not >=60)&& (not <=80)
    fprintf ('%s B harf notu ile ge�ti',ad);
     elseif (not >=40)&& (not <=60)
    fprintf ('%s C harf notu ile ge�ti',ad);  
   else  
    fprintf ('%s F harf notu ile kald�',ad);    
   end

end