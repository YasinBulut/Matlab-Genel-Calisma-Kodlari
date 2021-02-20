#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char** argv) {
	char a[200],b;
	int c[100];
	int sayac=0;
	cout<<"Metni giriniz";
	cin>>a;
	cout<<"Aranan harf";
	cin>>b;
	for(int i=0; i<strlen(a);i++){
		if(a[i]==b){
			sayac=sayac+1;
		}
		cout<<"Aranan harften"<<sayac<<"adet vardir"<<endl;
		cout<<"toplam adet"<<sayac<<endl;
	}
	
	
	
	

}
