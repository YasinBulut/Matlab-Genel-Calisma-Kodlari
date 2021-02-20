#include <iostream>
using namespace std;
int toplam,sayi,i,n,ortalama;
main(){
	cout<<"n degerini girin=";
	cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Sayinin "<<i+1<<".degerini gitiniz";
        cin>>sayi;
        toplam=toplam+sayi;
        ortalama=toplam/n;
    }
    cout<<"Toplam="<<toplam<<endl;
    cout<<"Ortalama="<<ortalama<<endl;
}

