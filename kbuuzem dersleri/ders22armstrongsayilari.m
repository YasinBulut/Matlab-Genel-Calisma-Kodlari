%armstron sayisi=ABC  A^3+    B^3 +   C^ 3;  
% 153= 1^+5^3+3^3;
% mod(153,100)=53;
% mod(53,10)=3;
% 53-3=50
%50/10=5
clear;
for i=100:999
    a=mod(i,100);
    b=mod(a,10);
    c=(a-b)/10;
    d=(i-a)/100;
    if i==(b^3+c^3+d^3)
        fprintf('%g sayisi armstron sayisidir\n',i);
    end
end