#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int sayac=0,sayi;
	float toplam=0,ortalama=0;
	while(1){
		cout<<"Sayiyi giriniz";
		cin>>sayi;
		if(sayi<0){
			break;
		}else{
			toplam= toplam+sayi;
			sayac++;
			
		}
	}
	cout<<"Toplam="	<<toplam<<endl;
	ortalama=toplam/sayac;
	cout<<"Ortlama="<<ortalama;
	
	
	return 0;
}
