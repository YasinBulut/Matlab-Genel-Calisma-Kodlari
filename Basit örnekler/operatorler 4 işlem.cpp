#include <iostream>
using namespace std;
int sayi1,sayi2,topla,fark,bol,carp,ortalama;
int main(int argc, char** argv) {
	cout<<"Birinci sayiyi giriniz"<<endl;
	cin>>sayi1;
	cout<<"ikinci sayiyi giriniz"<<endl;
	cin>>sayi2;
	topla=sayi1+sayi2;
	fark=sayi1-sayi2;
	bol=sayi1/sayi2;
	carp=sayi1*sayi2;
	ortalama=topla/2;
	cout<<"Toplam="<<topla<<endl;
	cout<<"Fark="<<fark<<endl;
	cout<<"Bolum="<<bol<<endl;
	cout<<"Carpim="<<carp<<endl;
	cout<<"Ortalama="<<ortalama<<endl;
}
