#include <iostream>

using namespace std;
 
 /* �rnek soru : ders notlar�n� 100 l�k sistemde say� olarak alan ve a��a��daki tabloya g�re harf kar��l���n� yazan kodu yaz�n 
 0-50:F
 50-70:C
 70-90:B
 90+:A
 */
 
 
int main(int argc, char** argv) {
	int a;
	cout<< "l�tfen notun say� de�erini giriniz"<< endl;
	cin>>a;
	if (a<50 && a>=0){
		cout<<"F"<<endl;
	}
	else if (a<=50 && a<70){
		cout<<"C"<<endl;
	}
	else if (a>=70 && a<90){
		cout<<"B"<<endl;
	}
	else if (a>=90 && a<100){
		cout<<"A"<<endl;
		
	}
	
	return 0;
	
}
