#include <iostream>
using namespace std;
// 1 den 100 kadar olan tek say�lar� bast�r
int main(int argc, char** argv) {
	int a;
	a = 1;
	/*while(a<100){
	cout<<a<<" , ";
	a+2;
    }*/
	while(a<100){
		if(a%2==1){
		
		cout<<a<<" , ";
		
	}
	a++;
}
	
	return 0;
}
