#include<iostream>
#include<String.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"Turkish");//türkçe karakterleri kullanmamýzý saðlar
	string isimler[5]; //String (java)
	isimler[0]="Ali";
	isimler[1]="Veli";
	isimler[2]="Can";
	isimler[3]="Þeyma";
	isimler[4]="Çiðdem";
	for(int i=0; i<5; i++){
		cout<<isimler[i]<<endl;
	}
	string sehirler[]={"Karabük","Ankara","Bursa"};
	for(int i=0; i<3; i++){
		cout<<sehirler[i]<<endl;
	}
}
