#include <iostream>

using namespace std;

int main() {
	int a ;
	a=10;
	cout<<a<<endl;
	int b = a<<2; // shift
	cout<<b<< endl;
	int c = b >>3; // right shift
	cout << c << endl ; 
	int x = 22&13;
	cout<<x<< endl;
	x=22^13;
	cout<<x<<endl;
	x=22| 13;
	cout << x<<endl;
	 
	return 0;
} 
