clc;
clear;
clear all;
 % DÝZÝLER
 % A dizisinde kaç tame tek çift vardýr
A= [5  22 25  44  45 65 74 67 85]; % not adlý dizi
%A=Not(1)*Not(2)
%    disp(A);
 B = length (A);
 cift=0;
 tek=0;
 for  i=1:1:B
    if mod(A(i),2)==0
        fprintf('A(%f)=%f  ve bu sayi cifttir\n',i,A(i));
        cift = cift+1;
    else
         fprintf('A(%f)=%f  ve bu sayi tektir\n',i,A(i));
         tek = tek +1;
    end
 end
 fprintf ('A dizisinde %f tane tek sayi,%f tane cift say varýr',tek,cift);
 
    

