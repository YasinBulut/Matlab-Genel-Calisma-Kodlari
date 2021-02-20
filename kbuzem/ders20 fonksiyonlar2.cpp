#include <iostream>
using namespace std;

void yazdir(){
	  cout<<10+20<<endl;	
      //	return ;  void de return kullanýlamaz
}
int yazdir1(){
	 return 10+20; // isteye baðlý return yazýlýr int de 
}
float cikarma (int a, int b){
	return a-b;
}
int main(int argc, char** argv) {
 yazdir();
 cout<<yazdir1( )<<endl;
 cout<<cikarma(100,15);
}
