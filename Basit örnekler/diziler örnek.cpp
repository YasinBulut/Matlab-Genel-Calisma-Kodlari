#include<iostream>
#include<String.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"Turkish");//t�rk�e karakterleri kullanmam�z� sa�lar
	string isimler[5]; //String (java)
	isimler[0]="Ali";
	isimler[1]="Veli";
	isimler[2]="Can";
	isimler[3]="�eyma";
	isimler[4]="�i�dem";
	for(int i=0; i<5; i++){
		cout<<isimler[i]<<endl;
	}
	string sehirler[]={"Karab�k","Ankara","Bursa"};
	for(int i=0; i<3; i++){
		cout<<sehirler[i]<<endl;
	}
}
