clc;
clear;
clear all;

% cift boyutlu diziler

 for i=1:1:2;
     for j=1:1:2;
    B(i,j)=input ('elemani giriniz=\n');
     end
 end
B=[2 3;4 5]
C=B(1,2)+B(2,1);
disp(C)