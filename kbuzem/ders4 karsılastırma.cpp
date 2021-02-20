#include <iostream>
using namespace std;
// dýþarýdan girilen iki sayýnýn durumlarýný hesapla
int main(int argc, char** argv) {
	int x,y;
	while(1){
	
	cout<<"birinci sayi giriniz"<<endl;
	cin>>x;
	cout<<"ikinci sayiyigirin"<<endl;
	cin>>y;
	if(x>y){
		cout<<"x buyuktur"<<endl;
		cout<<"y kucuktur"<<endl;
	}else if (y>x){
		cout<<"y buyuktur"<<endl;
		cout<<"x kucuktur"<<endl;
	}else
	cout<<"esittirler"<<endl;
}
	
	
	
	
	
	return 0;
}
