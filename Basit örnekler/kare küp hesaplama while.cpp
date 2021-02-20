//1-10'a olan sayýlarýn karelerini ve küplerini ekrana yazdýr (while)
#include<iostream>
using namespace std;
int main() {
	int sayi=1,kare,kup;
	while(sayi<=10){
		kare=sayi*sayi;
		cout<<sayi<<" .nci sayinin karesi: "<<kare<<endl;
		kup=sayi*sayi*sayi;
		cout<<sayi<<" .nci sayinin kupu: "<<kup<<endl;
		sayi++;
	}
	
}

