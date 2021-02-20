#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int x,y ;
	cout << " lufen birinci sayiyi giriniz"<<endl;
	cin >> x;
	cout << "degisken"<< endl ;
	cin >> y ; 
	cout<< " toplam;"<<x +y<<endl;
	cout<< "   cikarma;"<< x -y<<endl;
	cout<< "  carpim;"<< x *y<<endl;
	cout<<  "kalan;"<< x %y <<endl;
	cout<< "  bolum;"<< (float)x /y <<endl;
/*	toplam:15
	fark=-5
	çarpým= 50
	bölüm= 0.5
	kalan=5*/
	
	return 0;
}
