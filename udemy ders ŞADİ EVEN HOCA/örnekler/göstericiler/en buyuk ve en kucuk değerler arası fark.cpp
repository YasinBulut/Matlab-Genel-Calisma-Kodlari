#include <iostream>
using namespace std;

int f(int *a,int boyut){
	int eb=a[0];
	int ek=a[0];
	for(int i=0;i<boyut;i++){
		if(a[i]>eb){
		eb=a[i];
	}
		if(ek>a[i]){
		ek=a[i];
	}
	}
	cout<<eb<<endl<<ek<<endl;
	return eb-ek;
}

int main(int argc, char** argv) {
	int a[8]={9,8,7,6,4,3,2,1};
	cout<<f(a,8)<<endl;
}
