#include <iostream>
#include <math.h>
using namespace std;

// dik ��genin alan� ve �evresi

int main(int argc, char** argv) {
		int a,b,c;
	cout <<"a kenar�n� girin"<< endl;
	cin>>a;
	cout <<"b kenar�n� girin"<< endl;
	cin>>b;
		c= sqrt  (a*a+b*b) ;
	cout<<"h="<< c <<endl;
	cout<<"cevresi="<<a+b+c<<endl;
	cout<<"alan�="<<a*b/2<<endl;
	
	
	
	return 0;
}
