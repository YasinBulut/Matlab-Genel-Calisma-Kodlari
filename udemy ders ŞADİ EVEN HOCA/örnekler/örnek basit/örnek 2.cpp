#include <iostream>
using namespace std;

// a, b ve c aras�nda bir say� de�ildir 
// a, b veya c den daha buyuk bir say� de�ildir
//a,b ye esit ve ayn� zamanda c den kucuktur
//�� say� birbirine esit de�ildir



int main(int argc, char** argv) {
	int a,b,c;
	cout<<"birinci sayiyi giriniz"<<endl;
	cin>>a;
	cout<<"ikinci sayiyi giriniz"<<endl;
	cin>>b;
	cout<<"ucuncu sayiyi giriniz"<<endl;
	cin>>c;
	if (a>b && a<c|| a>c&& a<b) // b----a---c     c----a----b
	{
		cout<<"a,b ve c nin arasindaki bir deger"<<endl;
		
	}
	else {
		 cout<<" a, b ve c nin arasinda bir deger degildir"<<endl;
		 
	}
	// a n�n b ye e�iy ayn� zamanda c den k���k olup olmad�g�n� 
	if (a==b && a<c){
		cout<<"a, b ye esit ve ayni zamanda c den kucuk"<<endl;
	}
	else {
	cout<<"a, b ye esit degil  ve ayni zamanda c den kucuk degil"<<endl;	
		
	}
	if (a>b|| a>c){
		cout<<"a, b veya c den buyuktur"<<endl;
		
	}
	else{
		cout<<"a, b veya c den kucuktur veya esittir"<<endl;
	}
	if (a==b==c ){
		cout<<"uc sayi birbirine esittir"<<endl;
		
	}
	else{
		cout<<"uc sayi birbirine esit degildir"<<endl;
	}
	
	
	
	
	return 0;
}
