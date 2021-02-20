//71-72-72,74-->70
//76-77-78-79-->75
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int sayi,sonuc;
	cout<<"Tam sayi giriniz: ";
	cin>>sayi;
	sonuc=ceil(ceil((sayi*2)/10)*5);
	
	cout<<sonuc;
}

