#include <iostream>
#include<cstdlib>
using namespace std;
// tahmin program�
int main(int argc, char** argv) {
	int gizli;
	int tahmin;
	int yanit;
	gizli= rand ()%100;
	//cout<<gizli;
	
	cout<<"Tahmininizi giriniz";
	cin>>tahmin;
	if (tahmin==gizli){
		cout<<"Tebrikler gizli sayiyi buldunuz \n";
		cout<<"Gizli sayi="<<gizli<<"\n";
		return 0 ;	}
		 else {
		 cout<<"Uzgunum gizli sayiyi bulamad�n�z. \n";
		 if(tahmin>gizli)
		 cout<<"Tahmininiz daha buyuktur \n";
		 else cout<<"Tahmininiz daha kucuktur. \n";
		 cout<<"Gizli sayiyi bilmek istermisin?"<<"\n";
		 cout<<"Ever i�in 1 - Hay�r i�in 0 giriniz";
		 cin>>yanit;
		 if(yanit==1)
		 cout<<"Gizli sayi="<<gizli<<"\n";
		 if(yanit==0)
		 cout<<"Program kapan�yor... \n" ;	
		 	
		 }
	
	
	
	
	
	
	
	return 0;
}
