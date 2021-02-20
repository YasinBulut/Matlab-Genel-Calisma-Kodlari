#include <iostream>
#include <stdlib.h>
using namespace std;
// 12 lik sistemdeki saati 24 saatlik sisteme çevirme
//  '\0' --> Satýr sonuna gelir
int main(int argc, char** argv) {
	cout<<"Lütfen 12lik sistemde bir sayi giriniz"<<endl;
      char s[11];
      cin>>s;
      if(s[8]=='P'){
      	cout<<'P'<<endl;
      	char x[3];
      	x[0]=s[0];
      	x[1]=s[1];
      	x[2]='\0';
      	int saat=atoi(x); // alttaki 3 satýrý yapar
      	/*int saat=0;
      	saat +=(x[0]-48)*10;  // karakteri intecira cevirme 
      	saat +=x[1]-48;	 */
      	saat +=12;
      	s[0]=48+saat/10;
      	s[1]=48+saat%10;
      	s[8]='\0';
      	cout<<"saat+12:"<<saat+12<<endl;
      	cout<<"YENÝ S:"<<s<<endl;
	  }
     else{
     	s[8]='\0';
     	cout<<s<<endl;
	 }
      
}
