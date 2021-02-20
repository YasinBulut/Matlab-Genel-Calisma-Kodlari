#include <iostream>
using namespace std;


int main(int argc, char** argv) {
	int sayi,cift_adet=0,tek_adet=0;
	float toplam=0;
	for(int i =1;i<10;i++){
		cout<<i<<".nci sayiyi giriniz";
		cin>> sayi;
		toplam=	toplam+sayi;
		if(sayi%2==0){
			cift_adet++;
		}else{
			tek_adet++;
		}
	}
	cout<<"Tek sayilarin adedi"<<tek_adet<<endl;
	cout<<"Cift olanlarin adedi"<< cift_adet <<endl;
	cout<<"Toplam="<<toplam<<endl;
	
	return 0;
}
