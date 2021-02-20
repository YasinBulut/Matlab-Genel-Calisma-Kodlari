#include <iostream>
using namespace std;
int sayi1,sayi2;
int main(  ) {
cout<<"1.sayiyi giriniz"<<endl;
cin>>sayi1;
cout<<"2.sayiyi giriniz"<<endl;
cin>>sayi2;
if (sayi1>sayi2){
	cout<<"Birinci sayi	"<<sayi1<<"	ikinci sayi	"<<sayi2<<"	den buyuktur	"<<endl;
} else if(sayi2>sayi1){
	cout<<"ikinci sayi	"<<sayi2<<"	birinci sayi	"<<sayi1<<"	den buyuktur	"<<endl;
}else{
	cout<<"Sayilar esittir"<<endl;
}

}
