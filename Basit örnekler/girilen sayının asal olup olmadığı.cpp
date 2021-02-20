#include <iostream>
using namespace std; 
int main(int argc, char** argv) {
	int sayi,sayac=0;
	cout<<"Bir sayi giriniz";
	cin>>sayi;
	
	for(int j=2;j<sayi;j++){
		if(sayi%j==0){

		sayac++;
		break;	
	}
	}
	
if (sayac==0){
	cout<<"Asaldir"<<endl;
}else{
	cout<<"Asal degildir"<<endl;
}
}
