#include <iostream>
using namespace std;
// 1 den 100 kadar olan çift sayıları bastır
int main(int argc, char** argv) {
	cout<<"do-while ornegi"<<endl;
int sayi = 2 ;
do{
	cout<<sayi;
	sayi+=2;
	cout<<endl;
	cout<<"\t";	
}while(sayi<=100);

cout<<"while ornegi"<<endl;
int sayi1=2;
while(sayi1<=100){

	cout<<sayi1;
	sayi1+=2;	
}
	return 0;
}
