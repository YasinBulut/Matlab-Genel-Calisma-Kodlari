#include <iostream>
using namespace std;
int s1,s2,sonuc;
int main(int argc, char** argv) {
	cout<<"Birinci sayiyi giriinz"<<endl;
	cin>>s1;
	cout<<"Ýkinci sayiyi giriniz"<<endl;
	cin>>s2;
	if(s1>s2){
		sonuc=s1-s2;
	}else if(s1<s2){
		sonuc=s2*s1;
	}else{
		sonuc=0;
	}
	cout<<"Sonuc="<<sonuc<<endl;

}
