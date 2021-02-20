#include <iostream>
using namespace std;
//tanýmlanan dizinin en buyuk ve en kucuk elemanlarýnýn bulunmasý 
int main(int argc, char** argv) {
	int boyut;
	cout<<"Dizinin eleman sayisini giriniz"<<endl;
	cin>>boyut;
	int dizi[boyut];
	for(int i; i<boyut;i++){
		cout<<"Tam sayi giriniz=";
		cin>>dizi[i];
	}
	int buyuk=dizi[0];
	int kucuk=dizi[0];
	for (int i=0;i<boyut;i++){
		if(buyuk<dizi[i]){
			buyuk=dizi[i];
			
		}
		if( kucuk>dizi[i]){
			kucuk=dizi[i];
		}
	}
	cout<<"En buyuk="<<buyuk<<endl;
	cout<<"En kucuk="<<kucuk<<endl;
}
