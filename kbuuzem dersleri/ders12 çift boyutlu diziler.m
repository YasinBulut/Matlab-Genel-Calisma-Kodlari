clc;
clear;
clear all;
% �ift boyutlu diziler

%  1.satur 1.sutun     /  1.sat�r 2.sutun       / 1.satur 3. sutun
%  2.sat�r 1.sutun    /   2.sat�r 2. sutun     / 2.sat�r 3.sutun
%  3.sat�r 1.sutun   /  3.sat�r  2.sat�r      / 3.sat�r 3.sutun

for i=1:1:2
    for j=1:1:2     
    B(i,j)= input ('eleman� giriniz ')
    end
end
C=B(1,2)+B(2,1);
disp(C);
disp(B);    
