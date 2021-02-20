#include <iostream>
using namespace std;


int main(int argc, char** argv) {
	int sayi1,sayi2 ;
	int toplam;
	cout<<"birinci sayiyi giriniz"<<endl;
	cin>>sayi1;
	cout<<"ikinci sayiyi giriniz"<<endl;
	cin>>sayi2;
	if ( sayi1>sayi2 ){
		cout<<"birinci sayi buyuktur"<<endl;
	}else if (sayi1<sayi2){
			cout<<"ikinci sayi buyuktur"<<endl;
	}else{
		cout<<"sayilar esittir"<<endl;
	}
	toplam=sayi1+sayi2;
	cout<<"Toplam:"<<toplam<<endl;
	
}
