#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	double taban,us;
	int F=1;
	cout<<"Taban degerini giriniz";
	cin>>taban;
	cout<<"us degerini giriniz";
	cin>>us;
	for(int i=1;i<=us;i++){
		F=F*taban;
		
	}
	cout<<"Sonuc="<<F;
	
	
	return 0;
}
