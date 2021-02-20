clc;
clear;
clear all;

vize=input ('vize notunu giriniz');
final=input ('final notunu giriniz');
not=vize*0.4+final*0.6;
if not <=100 && not>80
    fprintf('not=A1');
elseif not<=80 && not>60
    fprintf('not=A2');
else
    fprintf('not=FF')
end
