#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int toplam=0,sayi;
	for(int i=1;i<=5;i++){
		cout<<i<<". sayiyi giriniz";
		cin>>sayi;
		toplam=toplam+sayi;
	}
	cout<<"Girilen 5 sayinin toplami : "<<toplam;
}
