#include <iostream>
using namespace std;


int main(int argc, char** argv) {
	int sayi,faktoriyel=1;
	cout<<"sayi giriniz";
	cin>>sayi;
	for (int i=1;i<=sayi;i++ ){
		faktoriyel=faktoriyel*i;
		
	}
	cout<<"faktoriyel sonucu="<<faktoriyel;
	return 0;
}
