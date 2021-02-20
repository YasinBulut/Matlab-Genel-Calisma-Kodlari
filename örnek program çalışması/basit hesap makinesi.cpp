#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char** argv) {
	int secim;
	double sayi1;
	double sayi2;
	
	printf("Birinci sayiyiyi giriniz");
	cin>>sayi1;	
	printf("Ýkinci sayiyiyi giriniz"); 
	cin>>sayi2;
	
	
	printf("Ne yapmak istiyorsunuz\n1. Toplama \n2. CÝkarma\n3. Carpma\n4. Bolme\n"); scanf("%d",&secim);
	
	if(secim==1){
	printf("Sonuc:%.2f",sayi1+sayi2);
	}
	else if (secim==2){
	printf("Sonuc:%.2f",sayi1-sayi2);
	}
	else if (secim==3){
	printf("Sonuc:%.2f",sayi1*sayi2);
	}
	else if (secim==4){
	printf("Sonuc:%.2f",sayi1/sayi2);
	}
	else{
		printf("Hatali giris yaptiniz");
	}
	}	


