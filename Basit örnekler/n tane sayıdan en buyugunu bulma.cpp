#include <iostream>
using namespace std;
  int i,n,dizi[10],enbuyuk;
 
int main(int argc, char** argv) {
	cout<<"n degerini giriniz=";
	cin>>n;
	for(i=0;i<n;i++){
		cout<<"Dizinin"<<i<<". Elemanini griiniz";
		cin>>dizi[i];
	}
	enbuyuk=dizi[0];  //ilk olarak bir tane referans buyuk deger seciyoruz.
	for(i=0;i<n;i++){
		if(dizi[i]>enbuyuk){
			enbuyuk=dizi[i];
		}
	}
	cout<<"En buyuk eleman"<<enbuyuk<<endl;
	

}
