#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
//k���k harfi b�uy�k harfe �evirme
int main (){
 
char a ;
printf("kucuk bir harf yaziniz");
scanf("%c",&a);
if(a>86){
printf ("buyuk harfi: %c",a-32);//�rnek olarak b yazarsak bundan 32 ��kartarak B yazar.( b,Bden daha b�y�k
}
else
printf("buyuk harf girdiniz \n lutfen kucuk harf giriniz");
return 0;
}

