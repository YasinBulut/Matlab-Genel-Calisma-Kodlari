#include <iostream>
using namespace std;
int i,n,gecensayisi;
int gecemeyen;
int main(int argc, char** argv) {
   cout<<"Ogrenci sayisini giriniz";
   cin>>n;
   float dizi[n];
   for(i=0;i<n;i++){
   	cout<<i+1<<".ogrencinin notunu giriniz";
   	cin>>dizi[i];
   }
   for( i=0;i<n;i++){
   	if (dizi[i]>=70){
	 
	    gecensayisi=gecensayisi+1;
   }
   else if (dizi[i]<70){
    gecemeyen=gecemeyen+1;
}
 
}
 cout<<"Dersi gecen ogrenci sayisi"<<gecensayisi<<endl;
  cout<<"Dersi gecenmeyen ogrenci sayisi"<<gecemeyen<<endl;
}
