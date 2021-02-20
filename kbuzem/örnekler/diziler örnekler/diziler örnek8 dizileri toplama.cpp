#include <iostream>
using namespace std;
// dýsardan elemanalrý girilen iki diziyi toplamýný yeni dizi yapýn
int main(int argc, char** argv) {
	int n;
	cout<<"Dizinin boyutunu giriniz"<<endl;
	cin>>n;
	int a[n];
	int b[n];
	int c[n];
	// ikisi bir arada sekilde 
	/* for (int i=0;i<n;i++){
	cout<<"1."dizinin"<<i+1<<"elemanýný giriniz;
	cin>>a[i];
	cout<<"2."dizinin"<<i+1<<"elemanýný giriniz;
	cin>>b[i];
	c[i]=a[i]+b[i];
	}*/
	cout<<"1.nci dizinin elemanlarini giriniz";
	for(int i=0;i<n;i++){
		cout<<"Tam sayi giriniz";
		cin>>a[i];
	}
	cout<<"2.nci dizinin elemanlarini giriniz";
	for(int i=0;i<n;i++){
		cout<<"Tam sayi giriniz";
		cin>>b[i];
	
}
    for(int i=0;i<n;i++){
     	c[i]=a[i]+b[i];
     	cout<<c[i]<<"\t";

}
}  
