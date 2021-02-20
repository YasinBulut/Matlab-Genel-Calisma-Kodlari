#include <iostream>
using namespace std;  
  //0001     i=0 j=3         i+j=b-1
 // 0010     i=1  j=2
 // 0100     i=2  j=1
 // 1000     i=3  j=0
int main(int argc, char** argv) {
	int b ;
	cout<<"Boyutu giriniz"<<endl;
	cin>>b;
	for(int i=0;i<b;i++){
		for(int j =0;j<b;j++){
			if(i+j==b-1)
			cout<<"1";
			else
			cout<<"0";
		}
		cout<<endl;
	}
	
	
	
	
	
	
}
