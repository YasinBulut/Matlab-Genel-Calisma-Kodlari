clc;
clear;
clear all;
% A dizisine ka� tane tek sayi ka� tane �ift sayi vard�r 

A=[5 22 44 65 85 74 67 90];
B=length(A);
cift=0;
tek=0;
for i=1:1:B
    if mod(A(i),2)==0;
        fprintf('A(%d)=%d ve bu sayi cifttir\n',i,A(i));
        cift=cift+1;
    else
         fprintf('A(%d)=%d ve bu sayi tektir\n',i,A(i));
         tek=tek+1;
    end
end
fprintf ('A dizisinde %F tane tek sayi, %f tane cift sayi vardir',tek,cift);
    
