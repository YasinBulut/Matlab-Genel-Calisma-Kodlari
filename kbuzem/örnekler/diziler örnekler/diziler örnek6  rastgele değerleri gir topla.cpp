#include <iostream>
#include <stdlib.h>
using namespace std;
//dizi boyutunu biz belirliceðiz rastgele içine sayi atýp toplayacaðýz

int main(int argc, char** argv) {
	int n,toplam=0,ortalama=0;
	cout<<"Dizinin eleman sayisini giriniz";
	cin>>n;
	int dizi[n];
	for(int i=0;i<n;i++){
		dizi[i]=rand()%99+1;
		toplam = toplam + dizi[i];
		ortalama=toplam/n;
		cout<<dizi[i]<<"\t";
	}
	cout<<"Toplam="<<toplam<<endl;
	cout<<"ortalama"<<ortalama<<endl;
}
