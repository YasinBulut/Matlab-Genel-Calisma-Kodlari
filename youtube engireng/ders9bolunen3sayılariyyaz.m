clc;
clear;
clear all;

x =[3 4 6 7 9 11 12 14 15 ]
% amacým x teki 3 bölünen sayýlarý y de yaz y =(3 6 9 12 15 )
j=1;
for i =1:1:9
    if rem (x(i),3)==0
        y(j)=x(i)
        j=j+1;
    end
end
x
y