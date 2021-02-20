#include <iostream>
using namespace std;
int faktorielr (int n){
	if(n==1)
	return 1;	
	return n* faktorielr(n-1);
}
int main(int argc, char** argv) {
	
	
		cout<<faktorielr(2)<<endl;
		cout<<faktorielr(3)<<endl;
		cout<<faktorielr(4)<<endl;
     	cout<<faktorielr(5)<<endl;
		cout<<faktorielr(6)<<endl;
}
