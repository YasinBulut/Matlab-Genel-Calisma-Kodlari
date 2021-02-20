#include <iostream>
#include <stdlib.h>
using namespace std;
//  1. YOL
/*int main(int argc, char** argv) {
	cout<<"Lütfen 5 adet sayi giriniz"<<endl;
	int a,b,c,d,e;
	cin>>a>>b>>c>>d>>e;
	cout<<a<<b<<c<<d<<e<<endl;
}*/
//   2 .YOL
/*int main(int argc, char** argv) {
	cout<<"Lütfen 5 adet sayi giriniz"<<endl;
	int a[5];
	for(int i=0;i<5;i++){
		cin>>a[i];
	}
		for(int i=0;i<5;i++){
		cout<<a[i]<<endl;
	}
}*/
//  3. Yol
int main(int argc, char** argv) {
	cout<<"Lütfen 5 adet sayi giriniz"<<endl;
	int *p;
     p=(int *)malloc(sizeof(int)*5);
     	for(int i=0;i<5;i++){
		cin>>*(p+i);
	}
		for(int i=0;i<5;i++){
		cout<<*(p+i);
	}
}
