  % herhangi bi say� aral��� verilmemi� (0-100) gibi verilse uyar�
    % koyulmas� gerekirdi

    topla=0;
    ortalama=0;
    for i=1:1:5
    fprintf('%g ��rencinin notunu giriniz=',i);
    A(i)=input('');
    topla=topla+A(i);
    ortalama=topla/5;
%     if  ortalama<=60
%         topla=A(i)+25;
%     end
 
    end
 disp(ortalama)