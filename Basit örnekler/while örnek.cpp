#include<iostream>
//1-100 arası sayılar
//0-100 arası çift sayıları
//0-100 arası tek sayıları
//0-100 arası 5'er 5 er
//0-100 arası 7'e bolünebilen sayıları ekrana yazdır
//0-100 arası hem 7'e hem 3'e bolünebilen sayıları ekrana yazdır
using namespace std;
int main() {
	int sayi=0;
	while(sayi<=100){
		if(sayi%7==0 && sayi%3==0){
			cout<<sayi<<" ";
		}
		sayi++;
	}
}
	
	
