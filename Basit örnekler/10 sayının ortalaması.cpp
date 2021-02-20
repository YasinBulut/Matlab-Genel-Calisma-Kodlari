#include <iostream>
using namespace std;
int toplam=0,sayi;
int main(int argc, char** argv) {
	for(int i=1;i<=10;i++){
		cout<<i<<".sayiyi giriniz";
		cin>>sayi;
		toplam=toplam+sayi;
	}
	cout<<"Girilen 10 sayinin ortalamasi : "<<toplam/10;
}
