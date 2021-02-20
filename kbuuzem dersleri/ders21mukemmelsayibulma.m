% mükemmel sayi= kendisi hariç pozitif tam bölenlerin toplamý kendine 
% eþit olan sayidir (1-1000 arasýnda )
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

