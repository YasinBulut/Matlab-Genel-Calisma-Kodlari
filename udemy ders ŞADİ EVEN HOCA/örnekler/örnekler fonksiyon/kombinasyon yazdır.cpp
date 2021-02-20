#include <iostream>
using namespace std;
// C(n,r)=
int faktoriel (int x ){
	int carpim=1;
	for(int i=x;i>0;i--){
		carpim*=i;//carpim=carpim*i
	}
	return carpim;
}


int kombinasyon (int n,int r){
	return faktoriel(n)/(faktoriel(r)*faktoriel(n-r));
}


int main ( )
{
	cout<<faktoriel (3)<<endl;
	cout<<faktoriel(6)<<endl;
	cout<<kombinasyon(5,2)<<endl;
}
