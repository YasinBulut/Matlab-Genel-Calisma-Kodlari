#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	for (int i=1;i<100;i++){
		if(i%3==0 && i%7==0){//ve hem hemde
		cout<<i<<" ";	
		}
	}
	  
/*	for (int i=0;i<100;i++){
		if(i%3==0 || i%7==0){//veya
		cout<<i<<" \f";	
		}
	}*/
}
