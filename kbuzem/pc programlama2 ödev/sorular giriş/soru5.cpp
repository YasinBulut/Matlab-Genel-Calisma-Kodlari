#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
//küçük harfi büuyük harfe çevirme
int main (){
 
char a ;
printf("kucuk bir harf yaziniz");
scanf("%c",&a);
if(a>86){
printf ("buyuk harfi: %c",a-32);//örnek olarak b yazarsak bundan 32 çýkartarak B yazar.( b,Bden daha büyük
}
else
printf("buyuk harf girdiniz \n lutfen kucuk harf giriniz");
return 0;
}

