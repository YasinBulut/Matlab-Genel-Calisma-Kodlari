#include <iostream>
using namespace std;




int main(int argc, char** argv) {
	int a,b,sonuc;
	cout<<"birinci sayiyi giriniz"<<endl;
	cin>>a;
	cout<<"ikiinci sayiyi giriniz"<<endl;
	cin>>b;
	if (a>b){
		sonuc=a-b;
		cout<<"a sayisi b sayisindan buyuktur"<<sonuc<<endl;
		
	}
	else if (b>a){
		sonuc=b-a;
		cout<<"b sayisi a sayisindan buyuktur"<<sonuc<<endl;
		
	}
	else {
	sonuc= a=b;
	cout<<"a sayisi b sayisina esittir"<<sonuc<<endl;
	return 0;
}
cout<<"SONUC="<<sonuc<<endl;
}
