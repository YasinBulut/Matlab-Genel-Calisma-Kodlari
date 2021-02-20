#include <iostream>
using namespace std;

	// 2 3 5 7 11 13 ......
	bool asalmi (int x){
		for(int i =2;i<x;i++){
			if(x%i==0)
			return false;
		}
		return true;
	}
	


int main(int argc, char** argv) {

int c=0;

	for(int i=2;c<20;i++){//1000 kadar asallarý basan kod
	if(asalmi(i)){
		cout<<i<<endl;
		c++;
	}
	
		
	}
	
	
	
	
	return 0;
}
