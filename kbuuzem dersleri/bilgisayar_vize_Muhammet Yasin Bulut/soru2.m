clc;
clear;
clear all;
% 3 market sorusu 
% kazanc(1,1......12)  kazanc(2,1........12)  kazanc(3,1........1.2)
topla=0;
buyuk=0;
for i=1:1:3
   for j=1:1:12
       fprintf(' %g.marketin %g.Aylýk kazancýný girin ',i,j);
       kazanc(i,j)= input ('=');
       topla=topla+kazanc(i,j);
       if kazanc(i,j)>buyuk
           buyuk = kazanc(i,j);
           a=j;
       end
   end
  
   ortalama(i)=topla/12;
   fprintf('%g.marketin kazancý=%g\n',i,ortalama(i));
   topla=0;
  a(i)=buyuk;
   fprintf('%g.marketin en yuksek kazancý%s.ayýnda %g TL olmustur=%g\n',i,buyuk);
   buyuk=0;
end




    
  

   

         