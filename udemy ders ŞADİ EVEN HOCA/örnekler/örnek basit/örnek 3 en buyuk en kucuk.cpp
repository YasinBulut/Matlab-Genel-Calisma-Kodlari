#include <iostream>
using namespace std;





int main(int argc, char** argv) {
	
	int x,y,z;
	cout<<"l�tfen birinci say�y� giriniz"<<endl;
	cin>>x;
	cout<<"l�tfen ikinci say�y� giriniz"<<endl;
	cin>>y;
	cout<<"l�tfen ucuncu say�y� giriniz"<<endl;
	cin>>z;
	int enbuyuk=x;
	if( y>enbuyuk)
	enbuyuk=y;
	if (z>enbuyuk)
	enbuyuk=z;
		int enkucuk=x;
		if (y< enkucuk)
     	enkucuk=y;
		if(z<enkucuk)
		enkucuk=z;
		cout<<"enbuyuk:"<<enbuyuk<<endl;
		cout<<"enkucuk:"<<enkucuk<<endl;
	
	/*if (x>y && x>z){
	cout<<"enbuyuk"<<x;
	if (y<z)
		cout<<"enkucuk"<<y;
		else
		cout<<"enkucuk"<<z;	
	}
		if (x>z && y>x){
	cout<<"enbuyuk"<<y;
	if (y>z)
		cout<<"enkucuk"<<x;
		else
		cout<<"enkucuk"<<z;	
	}
		if (z>y && z>x){
	cout<<"enbuyuk"<<z;
	if (y<x)
		cout<<"enkucuk"<<y;
		else
		cout<<"enkucuk"<<x;	
	}*
}*/
	return 0;
}
