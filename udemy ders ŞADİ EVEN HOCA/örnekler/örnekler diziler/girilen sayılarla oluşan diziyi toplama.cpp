#include <iostream>
using namespace std;
// iki sat�rda say�lar al�n, ilk sat�rdaki sayi ikinci sat�rdaki say�lar�n say�s�n� veriyor ,ikinci sat�rdaki say�lar�n toplam�n� ekrana yazd�r�n 
int main(int argc, char** argv) {
	int n;
	cin>>n;
	int a [n];
	for(int i=0;i<n;i++){
	cin>>a[i];
}
	int toplam=0;
	for(int i=0;i<n;i++){
	toplam+=a[i];
}
cout<<"toplam"<<toplam;	
}
