clc;
clear;
clear all;

x =[ 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 ]

% amacým y arrayinde 3 ile bölünebilen sayýlar olsun ama bu sayýlar 2 ye
% bölünmesin  ( 3 9 15 ) 
    j=1;
  for i=1:1:length(x)
    if rem (x(i),3)==0
        y(j)=x(i);
        j=j+1;
        if rem (x(i),2)==0
            j=j-1;
        end
    end
  end

y

