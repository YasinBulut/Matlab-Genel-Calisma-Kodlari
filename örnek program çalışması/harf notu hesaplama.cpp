#include<iostream>
using namespace std;
int sayi;
main(){
    baslangic:
    cout<<"Ogrencinin notunu girin=";
    cin>>sayi;
    if(sayi>=0 && sayi<40)
    {
        cout<<"F Kaldi";
    }
    else if(sayi>=40 && sayi<60)
    {
        cout<<"E";
    }
    else if(sayi>=60 && sayi<70)
    {
        cout<<"D";
    }
    else if(sayi>=70 && sayi<80)
    {
        cout<<"C";
    }
    else if(sayi>=80 && sayi<90)
    {
        cout<<"B";
    }
    else if(sayi>=90 && sayi<=100)
    {
        cout<<"A";
    }
    else
    {
        cout<<"Lutfen 0 ile 100 arasi deger girin\n";
        goto baslangic;
    }
}
