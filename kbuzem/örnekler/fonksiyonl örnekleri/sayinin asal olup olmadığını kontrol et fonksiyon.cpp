#include <iostream>
using namespace std;
bool Asal(int sayi){
	int sayac=0;
	for(int j=2;j<sayi;j++){
		if(sayi%j==0){
			sayac++;
			break;
		}
	}
	if(sayac==0){
		return true;
	}else
	    return false;
}

int main(int argc, char** argv) {
	int sayi;
	cout<<"Sayiyi giriniz";
	cin>>sayi;
	if(Asal(sayi)){
		cout<<"Sayi asal";
	}else{
		cout<<"Sayi asal degildir";
	}
	return 0;
}
