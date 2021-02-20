#include <iostream>
using namespace std;

// fibonacci serisi   1 1 2 3 5 8 13 21....
int main(int argc, char** argv) {
int n;
cout<<"bir sayi girini<"<<endl;
cin>>n;	
int a=1;
int b=1;
cout<<a<<endl;
cout<<b<<endl;	
for(int i = 0;i<n-2;i++){
int c =a+b;
a=b;
b=c;
cout<<c<<endl;
	
}

	 
	
	
	return 0;
}
