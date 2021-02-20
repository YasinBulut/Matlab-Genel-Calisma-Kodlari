#include<iostream>
#include <cstdlib>
using namespace std;
int main(){
	int gizli;
	int tahmin;
	gizli=rand()%100;
	//cout<<gizli;
	while(1){
	
	cout<<"Sayiyi tahmin ediniz: ";
	cin>>tahmin;
	if(tahmin==gizli){
		cout<<"Tebrikler gizli sayiyi buldunuz ";
	}else{
		cout<<"Hatali tahmin\n";
		if(tahmin>gizli){
			cout<<"Tahmininiz buyuktur\n";
		}else{
			cout<<"Tahmininiz kucuktur\n";
		}
		
	}
	
}
}
