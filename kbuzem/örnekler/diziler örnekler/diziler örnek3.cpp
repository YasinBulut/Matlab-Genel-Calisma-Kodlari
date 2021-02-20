#include <iostream>
using namespace std; 

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Turkish");//türkçe karakter kullan
	string isimler[5];  //String (java)
	isimler[0]="Beyxa";
	isimler[1]="Seni";
	isimler[2]="Çok";
	isimler[3]="Özledim";
	isimler[4]="BÝTSÝN BU ÇÝLE";
	for(int i=0;i<5;i++){
		cout<<isimler[i]<<endl;
	}
/*	string sehirler[]={"karabuk","izmir","erzurum","malatya","istanbul"};
	for (int i=0;i<5;i++){
		cout<<sehirler[i]<<endl;
	}*/
}

