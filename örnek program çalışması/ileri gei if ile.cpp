// i= ileri git g= geri git d=dur h=hýzlan k=kapat
#include<iostream>
using namespace std;
int main(){
	char komut;  
	while(1){
	
	cout<<"Komutu giriniz(i/g/d/h/k):  ";
	cin>>komut;
	if(komut=='i')
		cout<<"Ileri git"<<endl;
	else if(komut=='g')
		cout<<"Geri git"<<endl;
	else if(komut=='d')
		cout<<"Durunuz"<<endl;
	else if(komut=='h')
		cout<<"Hizlanin"<<endl;
	else if(komut=='k')
		cout<<"Kapat"<<endl;
	else
		cout<<"Hatali komut girdiniz"<<endl;
}
}
