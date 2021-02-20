#include<iostream>
using namespace std;
int main(){
int a,b;
cout<<"a degerini giriniz=  "<<endl;
cin>>a;
cout<<"b degerini giriniz=  "<<endl;
cin>>b;
if(a>b){
	a=a-b;
	cout<<a<<endl;
	}else if(b>a){
	b=b-a;
	cout<<b<<endl	;
	}else{
		cout<<a<<endl;
		
	}
return 0 ;
}

