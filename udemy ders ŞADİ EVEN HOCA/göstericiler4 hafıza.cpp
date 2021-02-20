#include <iostream>
#include <stdlib.h>
using namespace std;
int f(int *p){
	*p=10;
}

int main(int argc, char** argv) {
	int a[3];
	int *p=(int *)malloc(sizeof(int)*3);
     //int *p;  sadece bu hata verir 
	p[2]=6;
	cout<<p[2]<<endl;
	int *q=(int *)malloc(sizeof(int));  
	*q=50;
	f(q);
	cout<<*q<<endl;	
	
}
