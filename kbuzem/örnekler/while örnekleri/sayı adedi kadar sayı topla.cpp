#include <iostream>
using namespace std;
// dýsardan girilen sayý kadar sayý toplayan program 
int main(int argc, char** argv) {
	int adet,sayi,sayac;
	float toplam=0 , ortalama=0 ;
	cout<<"Kac sayi girmek istersiniz"<<endl;
	cin>>adet;
	while(adet>0){
		cout<<"sayi giriniz"<<endl;
		cin>>sayi;
		toplam= toplam+sayi;
		adet--;
		sayac++;
		
		
	
	}
	ortalama=toplam/sayac;
	cout<<"Toplam="<<toplam<<endl;
	cout<<"ortalama="<<ortalama<<endl;
	
	
	
	
	return 0;
	
	
}
