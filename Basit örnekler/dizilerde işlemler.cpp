#include<iostream>
using namespace std;
//Diziye eleman giri�i
//soru: dizinin elemanlar�n� toplay�n�z...
//soru: dizinin elamanlar�n�n ortalamas�n� bulunuz...
//soru: dizinin elemanlar�n�n karelerini yazd�r�n�z...1,2,3,4,5-->1,4,9,16,25
int main(){
	int boyut, toplam=0;
	float ortalama;
	cout<<"Dizinin elaman boyutunu giriniz: ";
	cin>>boyut;
	int dizi[boyut];
	for(int i=0; i<boyut; i++){
		cout<<i+1<<" .nci sayiyi giriniz: ";
		cin>>dizi[i];
	}
	for(int j=0; j<boyut; j++){
		toplam=toplam+dizi[j];
		cout<<dizi[j]<<"\t";
	}
	cout<<"Toplam: "<<toplam<<endl;
	ortalama=(float)toplam/(float)boyut;
	cout<<"Ortalama: "<<ortalama<<endl;
	
	for(int i=0; i<boyut; i++){
		dizi[i]=dizi[i]*dizi[i];
		cout<<"Karesi: "<<dizi[i]<<endl;
	}

}
