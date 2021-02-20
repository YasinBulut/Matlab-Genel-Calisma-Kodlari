clc;
clear;
clear all;

x=[1 2 3 4 5 6 7 8 9 10]
% amacým y= ( 1 3 5 7 9)  z=(2 4 6 8 10) 
i=1;
j=1;% z ayracý için sayaç
k=1;% y ayracý inin sayaç 
while i<=10
    if rem (x(i),2)==0
      z(j)=x(i)
      j=j+1;
    elseif rem (x(i),2)==1
        y(k)=x(i);
        k=k+1;
    end
    i=i+1;
end

  y
  z