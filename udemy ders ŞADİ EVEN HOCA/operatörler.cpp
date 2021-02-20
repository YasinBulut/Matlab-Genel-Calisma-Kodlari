#include <iostream>

using namespace std;

int main() {
	 int a;
	 a=10;
	 cout<< a << endl;
	 a++;//bir arttýr 
	 cout<<a<<endl;
	 ++a;//bir arttýr	
	 cout<<a<<endl;
	int b =20;
cout<<a+b<<endl;
	cout<<15%2<<endl;//modulo 15%2=1   7%5=2
	a--;//bir eksilt
	a=a-1;
	cout<< a <<endl; // 10 
	cout << a++ <<endl; //a nýn deðeri alýnýp kullanýlýr sonra bir artýrýlýr
	//10 basýlýyor ama hafýzadaki arýk 11 oldu
	cout<< ++a <<endl;//a nýn deðeri önce arttýrýlýr sonra denkleme konulur
// önce artýrýlýp 12 olacak ondan sonra ekrana basýacak 

    int x = 10 ;
	x=x-1;
	x--;
	--x;
	x-=1;
	x+=5;//x=x+5;
	cout<<x<<endl;	
	return 0;
}
