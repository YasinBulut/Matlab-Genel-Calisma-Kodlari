//1-100 arasýndaki asal sayýlarý bulan program
//2,3,5,7,11,13,17,19,23...
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int  i,j,N,sayac,e;
	float d;
    cout<< "Asal sayi icin araligi girin: "; //1 ve kendisine bölünecek =2
    cin>> N;
	for(i=2; i<=N; i++){
		sayac=0;
		for(j=1;j<=i;j++){
			d=(float)i/j;  // float  kesirli sayui
			e=ceil(i/j); // ceil sayý yuvarlama 
			if(d==e)
			sayac++; //2
		}
		if(sayac==2)
			cout<<i<<"\t";
		
	}  		
      
	  
  
  
}
