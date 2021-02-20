% üçgen dikdortgen ve kare için  cevre ve alan hesaplama fonksiyon ile
% ucgen alanı= (taban kenarı *yukseklik)/2
sekil=input('ucgen için 1,dikdörtgen için 2,');
while sekil>2 || sekil<1
   sekil=input('ucgen için 1,dikdörtgen için 2,');
end
switch(sekil)
    case 1
        a=input('taban kenarını giriniz');
        b=input('yüksekliği giriniz');
        c=input('diğer kenarlardan biini girin');
        d=input('son kenarları  girin');
          alan=alan_ucgen(a,b) ;
          cevre=cevre_ucgen(a,c,d);
         
    case 2
            e=input('kısa kenarı girin');
            f=input('uzun kenarıı giriniz');
            alan2=alan_dikdortgen(e,f);
            cevre2=cevre_dikdortgen(e,f);
      
        
end
