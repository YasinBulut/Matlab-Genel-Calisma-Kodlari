#include <iostream>
using namespace std;
// fonksiyon tipleri vard�r ( geri de�er d�nd�rmesine g�re)
// fonksiyon isimleri de�i�ken tn�mlama kuallar�na g�re tan�mlan�r
// tipi / fonksiyon ismi /  parantez a� kapa ()/ s�sl� parantez {} / { Yap�lacak i�ler }
// fonksiyon i�ine parametre tan�mlanabilir 
//
void cikti(){
	cout<<"Merhaba"<<endl;
}
void toplama(){
	cout<<5+10<<endl;
}
void  carpma(int a, int b){
	cout<<a*b<<endl;
}
void isim (string ad){
	cout<<" Merhaba "<<ad<<endl;
}
void toplam(int x, int y, int z){
	cout<<x+y+z<<endl;
	
}
void yazdir( ){
	for(int i=1;i<=100;i++){
		cout<<i<<" \t";
	}
	cout<<endl;
}
void carpma1(){
	int x,y;
	cout<<"1.nci sayiyi giriniz";
	cin>>x;
	cout<<"2.nci sayiyi giriniz";
	cin>>y;
	cout<<"Carpim"<<x*y<<endl;
}
int main(int argc, char** argv) {
	cikti();
	cikti();
	toplama();
	carpma(10,20);
	carpma1();
	isim ("Yasin");
	toplam(10,20,30);
	yazdir();  // 1 2 3 4 5 .....100
	yazdir();
}
