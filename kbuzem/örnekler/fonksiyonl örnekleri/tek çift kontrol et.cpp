#include <iostream>
using namespace std;
//d�sardan girilen sayinin tek �ift oldu�unu tes edelim
bool ciftmi(int sayi){
	if(sayi%2==0){
		return true;
	}else{
		return false;	
	}
}
int main( ) {
	
	int sayi;
	cout<<"Sayi giriniz";
	cin>>sayi;
	if(ciftmi(sayi)){
		cout<<"Sayi cift";
	}else{
		cout<<"Sayi tek";
	}
}
