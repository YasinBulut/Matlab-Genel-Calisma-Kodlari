#include <iostream>
#include <math.h>
using namespace std;

// hipoten�s hesaplayan kod 

int main(int argc, char** argv) {
	int a,b,c;
	cout <<"a kenar�n� girin"<< endl;
	cin>>a;
	cout <<"b kenar�n� girin"<< endl;
	cin>>b;
	c= sqrt(a*a+b*b);
	cout<<"h="<< c <<endl;
	
	return 0;
}
