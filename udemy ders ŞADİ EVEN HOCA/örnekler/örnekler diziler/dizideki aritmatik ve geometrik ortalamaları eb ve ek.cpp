#include <iostream>
#include  <math.h>
using namespace std;

int main(int argc, char** argv) {
	//2,4--> 2*4=8, kare kökü 
	//2,4,5-->2*4*5=40, küp kökü
	int a[8]={5,7,2,8,9,1,4,3};
	int toplam=0;
	int carpim =1;
	int tektoplam=0;
	int ttsayisi=0;
	int eb=a[0],ek=a[0];
	for(int i=0;i<8;i++){
		toplam+=a[i];
		if(a[i]%2==1){
			tektoplam+=a[i];
			ttsayisi++;
		}
		if(a[i]%2==0){
			if(eb<a[i]){
				eb=a[i];
			}
			if(ek>a[i]){
				ek=a[i];
			}
		}
	carpim*=a[i];	
	}
	
cout<<"ortalama"<<(float)toplam/8<<endl;
cout<<"geometrik ortalama="<<pow(carpim,(float)1/8)<<endl;
cout<<"tek sayilarin ortalamasi"<<(float)tektoplam/ttsayisi<<endl;
cout<<"	enbuyuk çift sayi ile en büyük tek sayi ortalamasi"<<(float)(eb+ek)/2<<endl;

}
