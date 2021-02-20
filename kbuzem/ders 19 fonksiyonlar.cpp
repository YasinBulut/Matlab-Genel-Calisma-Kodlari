#include <iostream>
using namespace std;
// fonksiyon tipleri vardýr ( geri deðer döndürmesine göre)
// fonksiyon isimleri deðiþken tnýmlama kuallarýna göre tanýmlanýr
// tipi / fonksiyon ismi /  parantez aç kapa ()/ süslü parantez {} / { Yapýlacak iþler }
// fonksiyon içine parametre tanýmlanabilir 
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
