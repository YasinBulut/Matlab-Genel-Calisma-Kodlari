#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int sayi,deger;
	float toplam=0;
	cout<<"sayi adedini giriniz";
	cin>>sayi;
	for(int i=1;i<=sayi;i++){
		cout<<i<<".nci sayiyi giriniz";
		cin >> deger;
		toplam=toplam+deger;
		
	}
	cout<<"Toplam"<<toplam;
	return 0;
}
