#include <iostream>
#include <math.h>
using namespace std;
float v0,h,t,menzil,g,birincihedef,ikincihedef,ucuncuhedef;
int main(int argc, char** argv) {
    cout<<"Ucagin hizi=405.5m/s.\n";
	v0=405.5;
	cout<<"Ucagin yerden yuksekligi=5000m.\n";
	h=5000;
	cout<<"Yer cekimii ivmesi 9.81m/s^2 alinmisir.\n";
	g=9.81;
		//sqrt fonksiyonu kök alma fonksiyonudur sqrt(kök alýnacaklar iþlem) olarak kullanýlýr
	t = sqrt((2*h)/g);
	menzil = v0*t;
	cout<<"Bombanin havada kalma suresi="<<t<<"\n";
	cout<<"Bombanin dusecegi mesafe "<<menzil<<"m ilersidir.\n";
	cout<<"Hedeflenen 3 konumun sizden uzakliklari 25, 30 ve 35km dir\n";
	birincihedef=25000-menzil;
	ikincihedef=30000-menzil;
	ucuncuhedef=35000-menzil;
	cout<<"Birinci hedefi vurmak için "<<birincihedef<<"m ilerleyip atesleme yapmalisiniz.\n";
	cout<<"Ikinci hedefi vurmak için "<<ikincihedef<<"m ilerleyip atesleme yapmalisiniz.\n";
	cout<<"Ucuncu hedefi vurmak için "<<ucuncuhedef<<"m ilerleyip atesleme yapmalisiniz.\n";
}
