
clc;
clear;
clear all;
 
gun=input ('Haftan�n ka��nc� g�n�ndeyiz')
switch (gun)
    case 1  % if==1
        disp ('pazartesi');
      case 2  % if==2
        disp ('sal�');
        case 3  % if==3
        disp ('�ar�amba');
        case 4
        disp ('per�embe');
        case 5
        disp ('cuma');
        case 6
        disp ('cumartesi');
        case 7  % if (gun<1) || (gun>7)
        disp ('pazar');
    otherwise
        disp ('Hatal� bir rakam girdiniz');
end

        