#include<iostream>
//1-100 aras� say�lar
//0-100 aras� �ift say�lar�
//0-100 aras� tek say�lar�
//0-100 aras� 5'er 5 er
//0-100 aras� 7'e bol�nebilen say�lar� ekrana yazd�r
//0-100 aras� hem 7'e hem 3'e bol�nebilen say�lar� ekrana yazd�r
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
	
	
