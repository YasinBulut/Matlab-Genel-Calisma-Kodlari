#include <iostream>
using namespace std;
int faktoriyel(int sayi){
	int fakto=1;
	for(int i=1;i<=sayi;i++){
		fakto=fakto*i;
	}
	cout<<"Faktoriyel="<<fakto;
}

int main( ) {
	 int sayi;
	 cout<<"Faktoriyeli alincak sayiyi giriniz";
	 cin>>sayi;
	 faktoriyel(sayi);
}
