#include <iostream>
using namespace std;
//dikdörtgen alan ve çevre
float Alan(float a , float b){
	return a*b;
}
float Cevre(float a, float b){
	return 2*(a+b);
}
int main( ) {
    /* float alan,a,b;
     cout<<"Kisa kenari giriniz";
     cin>>a;
     cout<<"Uzun kenari giriniz";
     cin>>b;
     cout<<"Alan="<<a*b<<"cevre="<<2*a*b;*/
     cout<<Alan(4,8)<<endl;
     cout<<Cevre(4,8);
}
