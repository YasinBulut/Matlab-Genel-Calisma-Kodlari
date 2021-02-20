#include <iostream>
using namespace std;


int main(int argc, char** argv) {
	float  not1,not2,not3,ortalama;
	cout<<"1.notu giriniz";
	cin>>not1;
	cout<<"2.notu giriniz";
	cin>>not2;
	cout<<"3.notu giriniz";
	cin>>not3;
	
	if(0<=not1<=100 &&0<=not2<=100&&0<=not3<=100 ){
		
		ortalama=(not1+not2+not3)/3;
		if(ortalama>=0 && ortalama<=49)
		cout 	<<"Kaldýnýz..";
		else
		cout<<"geçtiniz"; 
		
	}else{
		cout<<"hatalý not giriþi(0-100) arasýnda giriniz "<<endl;
		
		
	}
	
	
	
	return 0;
}
