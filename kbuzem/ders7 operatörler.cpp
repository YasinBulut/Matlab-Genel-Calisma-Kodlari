#include <iostream>
using namespace std;
// 4 iþlem

int main(int argc, char** argv) {
	
	float sayi1;
	float sayi2;
	while(1){
	
	cout<<"birinci sayiyi giriniz"<<endl;
	cin>>sayi1;
	cout<<"ikinci sayiyi giriniz"<<endl;
	cin>>sayi2;
	float toplam =sayi1+sayi2;
    float fark = sayi1-sayi2;
	float carpim = sayi1*sayi2;
	float bolum = sayi1/sayi2;
	cout<<"toplam"<<toplam<<endl;
	cout<<"fark"<<fark<<endl;
	cout<<"carpim"<<carpim<<endl;
	cout<<"bolum"<<bolum<<endl;

		
		
	return 0;
}
}

