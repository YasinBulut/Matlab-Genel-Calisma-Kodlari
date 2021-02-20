#include <iostream>
using namespace std;
int sayi;
int main(int argc, char** argv) {
	cout<<"Klavyeden bir sayi giriniz"<<endl;
	cin>>sayi;
	if(sayi<0){
		cout<<"Sayi negatiftir"<<endl;
	}else if(sayi>0){
		cout<<"Sayi pozitiftir"<<endl;
	}else{
		cout<<"Sayi sifirdir"<<endl;
	}
}
