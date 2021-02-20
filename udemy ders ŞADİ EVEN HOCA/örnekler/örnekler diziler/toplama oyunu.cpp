#include <iostream>
using namespace std;

// kullanýcýdan 5 sayi alýp  nu sayýlardan 4 tanesiyle üretilebilcek en buyuk ve en kucuk deðerleri ekrana bastýr

int main(int argc, char** argv) {
	int a[5];
	cout<<"Lütfen 5 sayi giriniz"<<endl;
	for(int i=0;i<5;i++){
		cin>>a[i];
	}
	int eb=a[0];
	int ek= a[0];
	int toplam=0;
	for(int i=0;i<5;i++){
		toplam +=a[i];
		if(eb<a[i])
		eb=a[i];
		if(ek> a[i])
		ek=a[i];
	}
	cout<<"maks"<<toplam-ek<<endl;
	cout<<"min"<<toplam-eb<<endl;
}
