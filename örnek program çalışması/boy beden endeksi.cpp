#include <iostream>
#include <stdlib.h>
using namespace std;
 // bki=beden kilo indeksi
int main(int argc, char** argv) {
	int boy;
	double kilo,bki;
	cout<<"Boyunuz (cm olaak) giriniz"<<endl;
	cin>>boy;
	cout<<"Kilonuzu (kg olarak)giriniz"<<endl;
	cin>>kilo;
	
	bki=kilo/((boy*boy)/10000);
	
	if(bki<18){
		cout<<"Beden kitle indeksiniz ,zayiftir"<<bki<<endl;
	}
	else if(bki<25){
		cout<<"Beden kitle indeksiniz, idealdir"<<bki<<endl;
	}
	else if(bki<30){
		cout<<"Beden kitle indeksini,kilolusunuz"<<bki<<endl;
	}
	else if(bki<35){
		cout<<"Beden kitle indeksiniz, 1. derece obezsiniz"<<bki<<endl;
	}
	else if(bki<18){
		cout<<"Beden kitle indeksiniz,2.ddereceden obezsiniz"<<bki<<endl;
	}
	else {
		cout<<"Beden kitle indeksiniz ,3. dereceden morbid obezsinz"<<bki<<endl;
	}
}
