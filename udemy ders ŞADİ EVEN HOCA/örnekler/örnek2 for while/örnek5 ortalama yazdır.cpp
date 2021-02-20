#include <iostream>
using namespace std;

// kullanýcýdan 5 sayý alarak  ortalamalarýný ekrana yazdýr 

int main(int argc, char** argv) {
	
	// ortalama= toplam / sayý
	int toplam = 0;
	for (int i =0;i<5;i++){
	int okunan ;
    cout<< "bir sayi giriniz" <<endl;
	cin>>okunan;
		toplam+= okunan ;
		
		
		
	}
	cout<<"toplam="<<toplam<<endl;
	cout<<"ortalama="<<toplam/5<<endl;

}
