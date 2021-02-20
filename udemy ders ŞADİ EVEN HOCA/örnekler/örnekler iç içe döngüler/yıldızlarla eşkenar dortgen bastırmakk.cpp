#include <iostream>
using namespace std;
// n=5,      2b+y-->   n=2b+y,b=(n-y)/2
//  n/2=2 -->	2*(i-1)+1,2i+1
//n/2 sonrasý  2(n-i)+1
// *         b3 y1
// ***       b1 y3
// *****     b0 y 5
// ***       b1 y3
// *         b3 y1
int main(int argc, char** argv) {
	

	cout<<"Bir sayi giriniz"<<endl;
		int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int y,b;
		if(i<=n/2){
			y=2*i+1;
		}else{
			y=2*(n-i-1)+1;	
		}
		
		b=(n-y)/2;
		for(int j=0;j<b;j++){
				cout<<" ";
		}
		for(int j=0;j<y;j++){
			cout<<"*";
		}
		cout<<endl;
	

}
}
