#include <iostream>
using namespace std;


// bir iþçinin iþi bitirme süresini ve toplam iþçi sayýsýný alarak , iþin btme süresini hesaplayan kodlama

int main(int argc, char** argv) {
	
	cout<<"bir isci isi kac gunde bitimekte?"<<endl;
	int kacgun,kacisci;
	cin>>kacgun;
	cout<<"Toplam kac isci calýsacak ?"<<endl;
	cin>>kacisci;
	cout<<"isin bitme suresi"<<kacgun/kacisci<<"gundur"<<endl;
	return 0;
}
