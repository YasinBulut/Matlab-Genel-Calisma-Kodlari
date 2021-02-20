#include <iostream>
using namespace std;
// 0001  i=0 j=3                               i+j>=b-1
// 0011  (i=1j=2) (i=1 j=3)
// 0111  (i=2 j=1) (i=2 j=2)  (i=2 j=)
// 1111î=3 j=0
int main(int argc, char** argv) {
	int b ;
	cout<<"Boyutu giriniz"<<endl;
	cin>>b;
	for(int i=0;i<b;i++){
		for(int j =0;j<b;j++){
			if(i+j>=b-1)
			cout<<"";
			else
			cout<<"*";
		}
		cout<<endl;
	}
	
	
	
	
	
	
	
	
	return 0;
}
