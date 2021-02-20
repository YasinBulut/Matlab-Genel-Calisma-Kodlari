#include <iostream>
using namespace std;


int main(int argc, char** argv) {
	int a;
	int b=100 ;
	a=b++;
	cout<<a<<endl; //100
	cout<<b<<endl;//101
	
	int x;
	 int y =100;
	x=++y;
	cout<<x<<endl;  //101
	cout<<y<<endl;//101
	
	
	return 0;
}
