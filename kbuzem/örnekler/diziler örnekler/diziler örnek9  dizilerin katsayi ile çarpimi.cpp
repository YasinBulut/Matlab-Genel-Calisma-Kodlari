#include <iostream>
using namespace std;
// dizinin iki katýný alma 
int main(int argc, char** argv) {
	int a[5]={1,2,3,4,5};
	int b[5];
	for(int i=0;i<5;i++){
		b[i]=a[i]*2;
		cout<<b[i]<<endl;
	}

}
