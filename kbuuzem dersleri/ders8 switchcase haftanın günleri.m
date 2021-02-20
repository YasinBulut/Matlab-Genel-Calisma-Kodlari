
clc;
clear;
clear all;
 
gun=input ('Haftanýn kaçýncý günündeyiz')
switch (gun)
    case 1  % if==1
        disp ('pazartesi');
      case 2  % if==2
        disp ('salý');
        case 3  % if==3
        disp ('çarþamba');
        case 4
        disp ('perþembe');
        case 5
        disp ('cuma');
        case 6
        disp ('cumartesi');
        case 7  % if (gun<1) || (gun>7)
        disp ('pazar');
    otherwise
        disp ('Hatalý bir rakam girdiniz');
end

        