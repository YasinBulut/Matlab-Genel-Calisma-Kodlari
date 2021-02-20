#include <iostream>
using namespace std;
int i,n,dizi[10];
float ortalama;
float toplam;
int main(int argc, char** argv) {
  cout<<"n degerini giriniz";
  cin>>n;
  for(i=0;i<n;i++){
  	cout<<"Dizinin"<<i<<".elemanýný giriniz";
  	cin >>dizi[i];
  	toplam=toplam+dizi[i];
  }
  for (i=0;i<n;i++){
  	cout<<dizi[i]<<"\n";
  }
   cout<<"toplam="<<toplam<<endl;
  cout<<"Ortalama="<<toplam/n<<endl;
}
	
	

