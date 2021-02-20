// int notlar=100;
// int ogr1_not=100;
// int ogr2_not=95;
// int ogr3_not=90;
//DÝZÝ KAVRAMINI KULLANMALIYIZ
// Dizi isimleri deðiþken tanýmlama kurallarý ile tanýmlanýr
// Dizide kullanýlan veri ayný olmak zorundadýr(int, float, double, char)
// veri_tipi degisken_ismi[elaman sayýsý]={deðerler,deðerler,,,};
//indis=eleman sayýsý - 1--> indis deðerleri sýfýrdan baþlar
#include<iostream>
using namespace std;
int main(){
	//veri sayýsý 5 -->500 veri kullanýlsaydý
	int ogr1_not=100, ogr2_not=90,ogr3_not=80,ogr4_not=95,ogr5_not=85;
	cout<<"Ogrenci 1 notu: "<<ogr1_not<<endl<<"Ogrenci 2 notu: "<<ogr2_not<<endl;
	cout<<"Ogrenci 3 notu: "<<ogr3_not<<endl<<"Ogrenci 4 notu: "<<ogr4_not<<endl;
	cout<<"Ogrenci 5 notu: "<<ogr5_not<<endl;
	//bu iþ yükünden kurtulmamýz gerekir.
	//ayný tip veriler diziler için kullanýlýr
	int ogrenci[5]={100,90,80,95,85};
	for(int i=0; i<5; i++){
		cout<<"Ogrenci "<<i+1<< " notu: "<<ogrenci[i]<<endl;
	
}
}
