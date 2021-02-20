#include <iostream>
using namespace std;
//global deðiþken 
int say1=100,say2=200;
int toplama(){
	int toplam; // yerel deðiþken 
	toplam=say1+say2;
	cout<<"Toplam="<<toplam<<endl;
	return 0;
}
void cikar(int x){
	int cik; //local deðiþken
	cik=say1-say2;
	cout<<"Fark="<<cik<<endl;
	
}
float bol(int s){
	int bol;
	bol= say2/say1;
	cout<<"Bolumler="<<bol<<endl;
	
}
double carp(int a,int b){
	return a*b;
//	return say1*say2;
}

int main( ) {
	toplama();
     cikar(900);
     bol(10);
     cout<<"Carpim="<<carp(5,6);
}
