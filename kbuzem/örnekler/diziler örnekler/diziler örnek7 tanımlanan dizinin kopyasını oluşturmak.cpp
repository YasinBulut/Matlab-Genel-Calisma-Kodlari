#include <iostream>
using namespace std;
// tanýmlanan dizinin kopyasýný olusturmak (a--->b)

int main(int argc, char** argv) {
	int a[5]={1,3,5,7,9};
	cout<<"a dizisi=";
	for (int i=0;i<5;i++){
		cout<<"a["<<i<<"]="<<a[i]<<"\t";
	}
	int b[5];
	cout<<endl<<endl;
	cout<<"b dizisi="
;	for(int j=0;j<5;j++){
		b[j]=a[j];
		cout<<"b["<<j<<"]="<<b[j]<<"\t";
	}
	
	

}
