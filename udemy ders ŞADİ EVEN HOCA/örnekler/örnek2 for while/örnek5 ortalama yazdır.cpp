#include <iostream>
using namespace std;

// kullan�c�dan 5 say� alarak  ortalamalar�n� ekrana yazd�r 

int main(int argc, char** argv) {
	
	// ortalama= toplam / say�
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
