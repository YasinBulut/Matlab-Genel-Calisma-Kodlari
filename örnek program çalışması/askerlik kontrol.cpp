#include <iostream>
using namespace std;
int yas;
char cinsiyet;
int main(int argc, char** argv) {
	cout<<"Yasinizi girin"<<endl;
	cin>>yas;
	cout<<"Cinsiyetinizi giriniz: (E/K) ";
	cin>>cinsiyet;
	if(cinsiyet=='E' && yas>=20 ){
		cout<<"Askere gidebilirsiniz";
	}else{
		cout<<"Askerlik icin uygun degilsiniz";
	}
}
