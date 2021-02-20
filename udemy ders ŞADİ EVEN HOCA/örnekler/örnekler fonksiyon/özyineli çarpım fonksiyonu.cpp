#include <iostream>
using namespace std;

// toplama iþlemi kullanarak çarpma iþlemi yapmak 



//a*b=a+a+a+a+.....+a//b kadar toplama
//f(a,b)=a+a+a+a+.....+a//b kadar toplama
//f(a,b-1) =a+a+a+a+.....+a//b-1 kadar toplama
//f(a,b)=a+f(a,b-10)
//
//f(a,0)=0
int carpimR (int a, int b){// bitiþ // adým//baþlangýç
   if(b==0|| a==0)
   return 0;
  return a+ carpimR (a,b-1);
	
}
//f(3,4)=3+f(3,3)
//f(3,3)=3+f(3,2)
//f(3,2)=3+f(3,1)
//f(3,1)=3+f(3,0)
int carpim(int a,int b){
	int sonuc=0;
	for(int i=0;i<b;i++){//3,4
	//0,3,6,9,12
	sonuc=sonuc+a;
}
return sonuc;
}
int main(int argc, char** argv) {
	cout<<carpim(3,4)<<endl;
	cout<<carpim(2,8)<<endl;
	cout<<carpim(8,5)<<endl;
	cout<<carpim(-8,5)<<endl;
	cout<<carpim(8,-5)<<endl;
	
	
	return 0;
}
