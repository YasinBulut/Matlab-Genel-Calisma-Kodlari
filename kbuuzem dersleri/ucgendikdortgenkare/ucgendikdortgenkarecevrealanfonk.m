% ��gen dikdortgen ve kare i�in  cevre ve alan hesaplama fonksiyon ile
% ucgen alan�= (taban kenar� *yukseklik)/2
sekil=input('ucgen i�in 1,dikd�rtgen i�in 2,');
while sekil>2 || sekil<1
   sekil=input('ucgen i�in 1,dikd�rtgen i�in 2,');
end
switch(sekil)
    case 1
        a=input('taban kenar�n� giriniz');
        b=input('y�ksekli�i giriniz');
        c=input('di�er kenarlardan biini girin');
        d=input('son kenarlar�  girin');
          alan=alan_ucgen(a,b) ;
          cevre=cevre_ucgen(a,c,d);
         
    case 2
            e=input('k�sa kenar� girin');
            f=input('uzun kenar�� giriniz');
            alan2=alan_dikdortgen(e,f);
            cevre2=cevre_dikdortgen(e,f);
      
        
end
