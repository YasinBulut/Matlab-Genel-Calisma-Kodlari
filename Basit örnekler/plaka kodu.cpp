//trafik plakalarýný yazarak illeri bulalým
#include<iostream>
using namespace std;
int main(){
	short plaka;
	while(1){
	
	cout<<"Il plaka kodunuz giriniz: ";
	cin>>plaka;
	switch(plaka){
		case 7:
			cout<<"Antalya\n";
			break;
		case 78:
			cout<<"Karabuk\n";
			break;
		case 16:
			cout<<"Bursa\n";
			break;
		default:
			cout<<"Hatali giris\n";
			break;
	}
}
}
