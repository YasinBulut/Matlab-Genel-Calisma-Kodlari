% m�kemmel sayi= kendisi hari� pozitif tam b�lenlerin toplam� kendine 
% e�it olan sayidir (1-1000 aras�nda )
clear;
topla=0;
for  i=2:1:10000
    for  j=1:1:i-1
        if mod(i,j)==0 
            bolen=j;
            topla=topla+bolen;
        end   
    end
    if i==topla
        fprintf ('%g sayisi mukemmel sayidir\n',i);  
    end
    topla=0;
end

