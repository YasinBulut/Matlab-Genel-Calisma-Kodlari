#include <iostream>
using namespace std;
/* 4 kolon �eklinde a��a��daki de�erleri yazd�r 
1den 100 kadar olan 15in katlar� 
1den 30 a kadar olan 5in katlar�
100 de 50 ye kadar olan 10 un katlar�
2den 64 olan 2 nin katlar�
*/

int main(int argc, char** argv) {
	int i =1;
	int j =1;
	int k =100;
	int l=2;
/*	while(i<100){	
	cout<<i<<"\t"<<j<<"\t"<<k<<"\t"<<l<<endl;
	i +=15;
	j +=5;
	k -=10;
	l *=2;
	
}*/
int us =2;
for(int i = 1;i<=6;i++){
cout<<i*15<<"\t"<<i*5<<"\t"<<100-(i-1)*10<<"\t"<<us<<endl;
us*=2;
 

}


	
	
	
	return 0;
}
