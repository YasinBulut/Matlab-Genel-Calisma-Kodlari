#include <iostream>
#include <stdlib.h>
using namespace std;
// mum\0
int main(int argc, char** argv) {
cout<<"lütfen bir mesaj giriniz"<<endl;
char c[100];
cin>>c;
char *p,*q;
p=c;
q=c;
while(*q!='\0'){
	q++; // dizgi sonu
	
}
q--;  //dizginin son elemaný
bool palindrome=true;
while(q>p){
	if(*p!=*q){
		palindrome=false;
	}
	p++;
	q--;
}	
if(palindrome)	
cout<<"girilen dizgi bir polindromedu"<<endl;
else
cout<<"girilen dizgi bir polindrome deüildir"<<endl;
}
