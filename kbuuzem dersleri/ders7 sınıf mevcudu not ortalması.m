clc;
clear;
clear all;
% sýnýf mevcudu belli olan bir sýnýfýn öðrencilerinin notunun girilmesi ve
% harf notu  ile beraber geçtiði veya kaldýðý tespit eden program 
%not 0 ile 100 arasýnda olmazsa uyarý ver
mevcut =input ('sýnýf mevcudunu giriniz');
for i=1:1:mevcut
   ad=input('öðrencinin adýný girin:\n');
   not=input('öðrencinin notunu girin\n');
        while (not<0)  || (not>100) % veya anlamý 
    not=input('hatalý not tekrar giriniz');
   end 
    fprintf ('%s adlý öðrenvinin notu=%f/n',ad,not); 
   if (not>=80)&& (not <=100);  % ve anlamý 
   fprintf ('%s A harf notu ile geçti',ad);
   elseif (not >=60)&& (not <=80)
    fprintf ('%s B harf notu ile geçti',ad);
     elseif (not >=40)&& (not <=60)
    fprintf ('%s C harf notu ile geçti',ad);  
   else  
    fprintf ('%s F harf notu ile kaldý',ad);    
   end

end