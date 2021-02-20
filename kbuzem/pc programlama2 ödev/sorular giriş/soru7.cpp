#include <iostream>
using namespace std;

int main(  ) {
	cout<<"Bir sayi giriniz";
	int sayi;
	cin>>sayi;
	while(sayi>0){
		cout<<sayi%10<<endl;
		sayi=sayi/10;
	}
	
	
	
	
	return 0;
}
