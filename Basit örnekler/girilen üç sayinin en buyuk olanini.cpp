#include <iostream>
using namespace std;
int sayi1,sayi2,sayi3,eb;
int main(int argc, char** argv) {
	cout<<"Birinci sayiyi girin=";
    cin>>sayi1;
    eb=sayi1;
    cout<<"Ikınci sayiyi girin=";
    cin>>sayi2;
    if (sayi2>sayi3)
    {
        eb=sayi2;
    }
    cout<<"Ucuncu sayiyi girin=";
    cin>>sayi3;
     if(sayi3>eb)
    {
       eb=sayi3;
    }
    cout<<"Girilen en buyuk sayi="<<eb;
}
