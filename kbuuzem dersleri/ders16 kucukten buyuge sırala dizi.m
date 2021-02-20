clc;
clear;
clear all;
% dizideki elemanları kucukten buyuge sırala
A=[5 3 -4 7 9 2 6]; 
for i=1:1:6
    for j=i+1:1:7
        if A(i)>A(j)
            gecici= A(i);
            A(i)=A(j);
            A(j)=gecici;
        end
    end
end
disp (A)