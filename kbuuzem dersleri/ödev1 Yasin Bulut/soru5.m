clc;
clear;
clear all;
% hepsini temizler

toplam=0;
  for i=10:10:100;
     fprintf('%g10 un kat�d�r\n',i);
     toplam=toplam+1;
  end
  fprintf('toplam %g adet 10 un kat� kadar sayi vard�r',toplam);
