#include <iostream>
using namespace std;
// kullan�c�dan bir say� al�p verilen say� kadar say�y� pokuyunuz  bu say�larda pozitif  negatif ve s�f�rlar�n oran�n� hesaplay�n

int main(int argc, char** argv) {
	
	int n ;
	cout<<"lutfen kac sayi gireceginizi yaz�n�z"<<endl;
	cin>>n;
	int esayi=0,asayi=0,ssayi=0;
	 for(int i =0;i<n;i++){
		 int g; // ge�i�i her d�ng�de okunur 
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
      cout<<"s�f�rlar"  <<(float)ssayi/n<<endl;

	
	return 0;
}
