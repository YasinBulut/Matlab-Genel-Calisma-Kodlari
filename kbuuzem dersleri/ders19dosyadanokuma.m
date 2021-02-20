% dosyadan okuma iþelmi 
a=fopen('not2.txt','r');
[not,adet]=fscanf(a,'%g',3);
fclose(a);
ortalama=(not(1)+not(2)+not(3))/3;
fprintf('not(1)=%g,not(2)=%g,not(3)=%g,adet=%g,ortalama=%g',not,adet,ortalama);