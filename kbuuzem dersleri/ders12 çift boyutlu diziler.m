clc;
clear;
clear all;
% çift boyutlu diziler

%  1.satur 1.sutun     /  1.satır 2.sutun       / 1.satur 3. sutun
%  2.satır 1.sutun    /   2.satır 2. sutun     / 2.satır 3.sutun
%  3.satır 1.sutun   /  3.satır  2.satır      / 3.satır 3.sutun

for i=1:1:2
    for j=1:1:2     
    B(i,j)= input ('elemanı giriniz ')
    end
end
C=B(1,2)+B(2,1);
disp(C);
disp(B);    
