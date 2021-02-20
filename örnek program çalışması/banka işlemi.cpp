//Bankamatik 1-Bakiye görüntüle 2-Para Çekme 3-Para Yatırma 4-Kart İade
#include<iostream>
using namespace std;
int main(){
	int bakiye=1000,tutar;
	short islem;
	while(1){
	
	cout<<"Islemi seciniz: ";
	cin>>islem;
	switch(islem){
		case 1: 
			cout<<"Bakiyeniz: "<<bakiye<<endl;
			break;
		case 2:
			cout<<"Cekmek istediginiz tutar: ";
			cin>>tutar;
			if(tutar>bakiye){
				cout<<"Bakiyeniz yetersiz..\n";
			}else{
				bakiye=bakiye-tutar;
				cout<<"Kalan bakiyeniz: "<<bakiye<<endl;
			}
			break;
		case 3:
			cout<<"Yatırmak istediginiz tutar: ";
			cin>>tutar;
			bakiye+=tutar;
			cout<<"Yeni bakiyeniz: "<<bakiye<<endl;
			break;
		case 4:
			cout<<"Kartinizi aliniz..\n";
			break;
		default:
			cout<<"Hatali islem yaptiniz..\n";
			break;
	}
}
	
}
