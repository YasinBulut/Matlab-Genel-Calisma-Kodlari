#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	int a[7]={3,7,2,8,9,1,6};// 9+8+7 =24
	int as1 =a[0];
	int as2= a[0];
	int as3=a[0];

	for(int i=0;i<7;i++){
		if(as1<a[i]){
			as3=as2;
			as2=as1;
			as1=a[i];
		} 
		else if (as2<a[i]){
			 as1= as2;
			 as2= a[i];
		}
		else if(as3<a[i]){
			as3=a[i];
		}
		
	}
		int toplam=as1+as2+as3;
	cout<<"en buyuk 3 sayi= "<<as1<<","<<as2<<", "<<as3<<endl;
	cout<<"Toplam="<<as1+as2+as3<<endl;
	
	cout<<"Ortalama="<<toplam/3<<endl;

}
