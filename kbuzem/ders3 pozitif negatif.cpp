#include <iostream>
using namespace std;

// dýsardan girilen sayýnýn pozitif negatif 0 olduðunu yazdýr
int main(int argc, char** argv) {
	int x;
	 cout<<"Bir sayi giriniz"<<endl;
	 cin>>x;
	 if(x>0)
	 cout<<"sayý pozitif"<<endl;
	 else if (x<0)
	 cout<<"saayi negatif"<<endl;
	 else
	 cout<<"sayi 0 esittir"<<endl;
	
	
	return 0;
}
