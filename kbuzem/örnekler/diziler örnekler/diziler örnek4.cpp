#include <iostream>
using namespace std;
//elelmanlarý topalyýn /elemanlarýn ortalamasý/elemanlarýn karesi 
int main(int argc, char** argv) {
	int boyut,toplam=0;
	float ortalama;
	
	cout<<"Dizinineleman boyutunu giriniz;";
	cin>>boyut;
	int dizi[boyut];
	for(int i=0;i<boyut;i++){
		cout<<i+1<<".nci elemaný giriniz";
		cin>>dizi[i];
		
	}
	for(int j=0;j<boyut;j++){
		toplam=toplam+dizi[j];
		ortalama=(float)toplam/(float)boyut;
		cout<<dizi[j]<<"\t";
	}
	cout<<"Toplam="<<toplam<<endl;
	cout<<"Ortalama="<<ortalama<<endl;

   for  (int i=0; i<boyut ;i++){
	dizi[i]=dizi[i]*dizi[i];
	cout<<"Karesi;"<<dizi[i]<<endl;
}
}
