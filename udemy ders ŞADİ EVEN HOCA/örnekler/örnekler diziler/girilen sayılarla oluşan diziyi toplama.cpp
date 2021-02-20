#include <iostream>
using namespace std;
// iki satýrda sayýlar alýn, ilk satýrdaki sayi ikinci satýrdaki sayýlarýn sayýsýný veriyor ,ikinci satýrdaki sayýlarýn toplamýný ekrana yazdýrýn 
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
