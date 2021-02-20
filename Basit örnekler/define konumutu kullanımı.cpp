#include<iostream>
#include <string>
#define PI 3.14159
#define KBU "Karabuk University"
using namespace std;
int main(){
	int sayi=100;  
	cout <<sayi<<endl; //100	1	
	sayi=101;
	cout <<sayi<<endl; //101	1	
	sayi=300;
	cout <<sayi<<endl; //300	1
	sayi=500;
	cout <<sayi<<endl; //500	1
	sayi=1;
	cout <<sayi<<endl; //1		1
	string kelime="Ali";
	cout <<kelime<<endl;
	kelime="Veli";
	cout <<kelime<<endl;
	const int X= 100;
	cout<<X<<endl;
	cout<<PI<<endl;
	cout<<KBU<<endl;
	
}
