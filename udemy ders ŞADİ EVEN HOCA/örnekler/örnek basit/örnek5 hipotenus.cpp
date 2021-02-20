#include <iostream>
#include <math.h>
using namespace std;

// hipotenýs hesaplayan kod 

int main(int argc, char** argv) {
	int a,b,c;
	cout <<"a kenarýný girin"<< endl;
	cin>>a;
	cout <<"b kenarýný girin"<< endl;
	cin>>b;
	c= sqrt(a*a+b*b);
	cout<<"h="<< c <<endl;
	
	return 0;
}
