% dosyadan okunan verileri analizi 
clear;
dosya=fopen('not3.txt','r');
[b,adet]=fscanf(dosya,'%s',inf);
fclose(dosya);
fprintf('%s',b)

sayac=0;
for i=1:1:length(b)
  if   b(i)=='A'  
     sayac=sayac+1;
  
  end
end
fprintf(' Metinde %g tane a harfi vardýr',sayac)