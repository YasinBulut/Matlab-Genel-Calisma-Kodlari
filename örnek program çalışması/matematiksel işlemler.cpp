#include<iostream>
#include <cmath>
using namespace std;
int main(){
//	x^2-6x+5  x1=-1 x2=-5 
//ax^2+bx+c   delta=b^2-4ac
float a,b,c,delta,x1,x2;
cout<<"a = ";
cin>>a;
cout<<"b= ";
cin>>b;
cout<<"c= ";
cin>>c;
//deltayaý hesapla
delta=b*b-(4*a*c);
//deltayý kontrol et delta>0 delta<0 delta=0
if(delta>0){
	cout<<"Iki reel kok vardir: "<<endl;
	x1=(-b+sqrt(delta))/2*a;
	x2=(-b-sqrt(delta))/2*a;
	cout<<"x1= "<<x1<<endl;
	cout<<"x2= "<<x2<<endl;
}else if(delta==0){
	cout<<"Iki reel kok vardýr: "<<endl;
	x1=-b/2*a;
	cout<<"x1=x2= "<<x1;
}else{
	cout<<"Reel kok yoktur";
	
}


}
