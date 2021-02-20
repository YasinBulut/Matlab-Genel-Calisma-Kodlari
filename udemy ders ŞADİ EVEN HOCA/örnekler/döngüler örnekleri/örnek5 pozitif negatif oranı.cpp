#include <iostream>
using namespace std;
// kullanıcıdan bir sayı alıp verilen sayı kadar sayıyı pokuyunuz  bu sayılarda pozitif  negatif ve sıfırların oranını hesaplayın

int main(int argc, char** argv) {
	
	int n ;
	cout<<"lutfen kac sayi gireceginizi yazınız"<<endl;
	cin>>n;
	int esayi=0,asayi=0,ssayi=0;
	 for(int i =0;i<n;i++){
		 int g; // geçiçi her döngüde okunur 
		 cin>>g;
		 if(g>0){
		 asayi++;
	}
		 else if (g<0)
		 esayi++;
		 else
		 ssayi++;
	}
		
	
	cout<<"Pozitifler"  <<(float)asayi/n<<endl;
      cout<<"Negatifler"<<(float)esayi/n<<endl;
      cout<<"sıfırlar"  <<(float)ssayi/n<<endl;

	
	return 0;
}
