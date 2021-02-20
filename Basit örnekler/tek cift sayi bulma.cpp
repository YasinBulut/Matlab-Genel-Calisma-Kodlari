#include <iostream>
using namespace std;
int tek,cift,i,sayi,n;
int main(int argc, char** argv) {
	cout<<"Sayi adedini girini<";
	cin>>n;
	for(i=0;i<n;i++){
	cout<<i+1<<".sayiyiyi giriniz";
	cin>>sayi;
	if(sayi%2==0){
		cift=cift+1;
	}else{
	tek=tek+1;
}

}
cout<<"Tek sayilar="<<tek<<endl;
cout<<"Cift sayilar="<<cift<<endl;
}
