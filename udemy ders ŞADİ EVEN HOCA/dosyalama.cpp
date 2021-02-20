#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char** argv) {
	// yazma
	ofstream dosya;
	dosya.open("deneme.txt");
	if(dosya.is_open()){
		dosya<<"SADÝ EVREN SEKER\n";
		dosya.close();
	}
	//okuma
	string satir;
	ifstream dosya2("deneme.text");
	if(dosya2.is_open()){
		while(getline(dosya2,satir)){
			cout<<satir<<'\n';
		}
		dosya2.close();
			}
}
