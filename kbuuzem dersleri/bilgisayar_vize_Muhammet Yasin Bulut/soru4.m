clc;
clear;
clear all;

A=[6 21;5 7];
for i=1:1:2
    for j=1:1:2
        if( (mod(A(i,j),2)==0) && (mod(A(i,j),3)==0 ))
            fprintf('A n�n (%g, %g) elamn� hem 2 hem 3 ile tam b�l�n�r ',i,j)
        end
    end
end

        