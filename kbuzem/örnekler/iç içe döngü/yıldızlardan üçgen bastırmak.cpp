#include <iostream>
using namespace std;
//* 
//**
//***
int main(int argc, char** argv) {
	int n;
	cout<<"Bir sayi giriniz"<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<i+1;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	/* ters üçgen yapmak
		int n;
	cout<<"Bir sayi giriniz"<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
	for(int j= ;j<n-(1+i);j++){
	cout<<" ";
	}
		for(int j=0;j<i+1;j++){
			cout<<"*";
		}
		cout<<endl;
	}*/
	
	
	
	return 0;
}
