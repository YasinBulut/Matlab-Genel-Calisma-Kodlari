#include <iostream>
#include <math.h>
using namespace std;

// dik üçgenin alaný ve çevresi

int main(int argc, char** argv) {
		int a,b,c;
	cout <<"a kenarýný girin"<< endl;
	cin>>a;
	cout <<"b kenarýný girin"<< endl;
	cin>>b;
		c= sqrt  (a*a+b*b) ;
	cout<<"h="<< c <<endl;
	cout<<"cevresi="<<a+b+c<<endl;
	cout<<"alaný="<<a*b/2<<endl;
	
	
	
	return 0;
}
