clc;
clear;
clear all;

tt=1:9

t= [1 2 3 4 5 6 7 8 9]

ttt=8:0.5:9

zz=[1 2 3;4 5 6;7 8 9]

a=1;
for  i=1:3
    for j=i:3
    zzz(i,j)=a;
    a=a+1;
    end
end
zzz(2,2)
disp(zzz)

