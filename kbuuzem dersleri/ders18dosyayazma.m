% klavyeden girilen notu  bir dosyaya yazan prograam 
dosya=fopen('not.txt','w');
for i=1:3
    fprintf('%g. öðrencinin notu=',i);
    not = input ('');
    fprintf(dosya,'not(%g)=%g',i,not);
end
fclose(dosya);