#include <iostream>
using namespace std;


// bir i��inin i�i bitirme s�resini ve toplam i��i say�s�n� alarak , i�in btme s�resini hesaplayan kodlama

int main(int argc, char** argv) {
	
	cout<<"bir isci isi kac gunde bitimekte?"<<endl;
	int kacgun,kacisci;
	cin>>kacgun;
	cout<<"Toplam kac isci cal�sacak ?"<<endl;
	cin>>kacisci;
	cout<<"isin bitme suresi"<<kacgun/kacisci<<"gundur"<<endl;
	return 0;
}
