#include <iostream>
using namespace std;
int g( int x){// call by value
	x=10;
}

int f(int *x,int *y,int *z){  //call by reference
	*x=20;
	*y=90;
	*z=100;
	return 50;
}

int main(int argc, char** argv) {
 int a=10;
 int b=10 , c=10;
 int *p,*q,*r;
 p=&a;
 q=&b;
 r=&c;
 g(a);
 cout<<a<<endl;
 f(p,q,r);
 cout<<*p<<" "<<*q<<" "<<*r;
}
