#include <iostream>
using namespace std;

// kullan�c�dan 5 sayi al�p  nu say�lardan 4 tanesiyle �retilebilcek en buyuk ve en kucuk de�erleri ekrana bast�r

int main(int argc, char** argv) {
	int a[5];
	cout<<"L�tfen 5 sayi giriniz"<<endl;
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
