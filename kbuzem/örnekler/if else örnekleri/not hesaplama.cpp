#include <iostream>
using namespace std;


int main(int argc, char** argv) {
	int basari;
	char harfnot;
cout<<"Ba�ar� notunuzu girin";
cin>> basari;
if (basari>=90)
 harfnot='A';
else if (basari>=80)
harfnot='B';
else if (basari>=70)
harfnot='C';
else if (basari>=60)
harfnot='D';
	else 
	harfnot='F';
	cout <<"�grencinin harf notu "<<harfnot<<endl;

}
