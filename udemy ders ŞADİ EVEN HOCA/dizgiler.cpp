#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;
int boyut(char *s){
		int b=0;
		char c=s[0];
		while(c!='\0'){
			c=s[++b];
		}
		return b;
	}
int main(int argc, char** argv) {
	   
	  char *s="evren";  //immutable (deðiþtirilemez)
	  cout<<s<<endl;
	  cout<<s[2]<<endl;
	  char c[6]="evren";
	  char a[5];
	  a[0]='e';
	  a[1]='v';
	  a[2]='r';
	  cout<<c<<endl;
	  cout<<a<<endl;
	  //s=c;  shollow copy sýð kopyalama
	  //strcmp --> string compare 
	  // sozluk karþýlaþtýrmasý  == 0,-1,1	
	  if(strcmp(c,s)==0){
	  	cout<<"esitler"<<endl;
	  }else	{
	  	cout<<"esit degiller"<<endl;
	  }
	  c[2]='x';
		cout<<c<<endl;
		cout<<s<<endl;
    	cout<<boyut(s)<<endl;
    	cout<<boyut(c)<<endl;
		cout<<strlen(c)<<endl;
		char *x=(char*)malloc(sizeof(char)*7);
		strcpy(x,s);// kopyalama
		cout<<x<<endl;
}
