
clc;
clear;
clear all;

x= [3 4 6 7 9 11 12 14 15,]
    % amacým x teki 3 e bölünen sayýlarýn y de topla = (3 6 9 12 15)]
i=1;
 j=1;
 while  i<=9
     if  rem (x(i),3)==0
         y(j)=x(i);
         j=j+1;
     end 
     i=i+1;
 end
 y