#include <iostream>
#include <ctime>
#include <stdlib.h> 
using namespace std;

int main(int argc, char** argv) {
	int rg;
	srand(time(NULL));//seed
	rg=rand()%6+1;//1 ile 6 arasýnda sayi döndürür
	cout<<rg<<endl;
	rg=rand()%2;//0 veya 1 gelir
	cout<<rg<<endl;
	rg=rand()%100;
	cout<<rg<<endl;
	
	
	

}
