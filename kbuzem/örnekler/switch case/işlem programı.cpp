// i=ileri g=geri d=dönme iþlemi s=durma iþlemi 

#include<iostream>
using namespace std;
int main(){
	char islem;
	while(1){
	cout<<"Islemi giriniz: (i/g/d/s)";
	cin>>islem;
	switch(islem){
		case 'i': cout<<"Ileri git\n"; break;
		case 'g': cout<<"Geri git\n"; break;
		case 'd': cout<<"Donme yap\n"; break;
		case 's': cout<<"Durdur\n"; break;
		default: cout<<"Hatali islem\n"; break;
			
	}
}
}
