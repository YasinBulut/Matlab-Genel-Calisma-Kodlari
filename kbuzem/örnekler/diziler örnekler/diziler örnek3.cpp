#include <iostream>
using namespace std; 

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Turkish");//t�rk�e karakter kullan
	string isimler[5];  //String (java)
	isimler[0]="Beyxa";
	isimler[1]="Seni";
	isimler[2]="�ok";
	isimler[3]="�zledim";
	isimler[4]="B�TS�N BU ��LE";
	for(int i=0;i<5;i++){
		cout<<isimler[i]<<endl;
	}
/*	string sehirler[]={"karabuk","izmir","erzurum","malatya","istanbul"};
	for (int i=0;i<5;i++){
		cout<<sehirler[i]<<endl;
	}*/
}

