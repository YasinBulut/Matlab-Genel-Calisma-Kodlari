#include <iostream>

using namespace std;

int main() {
	 int a;
	 a=10;
	 cout<< a << endl;
	 a++;//bir artt�r 
	 cout<<a<<endl;
	 ++a;//bir artt�r	
	 cout<<a<<endl;
	int b =20;
cout<<a+b<<endl;
	cout<<15%2<<endl;//modulo 15%2=1   7%5=2
	a--;//bir eksilt
	a=a-1;
	cout<< a <<endl; // 10 
	cout << a++ <<endl; //a n�n de�eri al�n�p kullan�l�r sonra bir art�r�l�r
	//10 bas�l�yor ama haf�zadaki ar�k 11 oldu
	cout<< ++a <<endl;//a n�n de�eri �nce artt�r�l�r sonra denkleme konulur
// �nce art�r�l�p 12 olacak ondan sonra ekrana bas�acak 

    int x = 10 ;
	x=x-1;
	x--;
	--x;
	x-=1;
	x+=5;//x=x+5;
	cout<<x<<endl;	
	return 0;
}
