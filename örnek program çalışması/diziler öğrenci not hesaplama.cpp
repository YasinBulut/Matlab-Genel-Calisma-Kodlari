// int notlar=100;
// int ogr1_not=100;
// int ogr2_not=95;
// int ogr3_not=90;
//D�Z� KAVRAMINI KULLANMALIYIZ
// Dizi isimleri de�i�ken tan�mlama kurallar� ile tan�mlan�r
// Dizide kullan�lan veri ayn� olmak zorundad�r(int, float, double, char)
// veri_tipi degisken_ismi[elaman say�s�]={de�erler,de�erler,,,};
//indis=eleman say�s� - 1--> indis de�erleri s�f�rdan ba�lar
#include<iostream>
using namespace std;
int main(){
	//veri say�s� 5 -->500 veri kullan�lsayd�
	int ogr1_not=100, ogr2_not=90,ogr3_not=80,ogr4_not=95,ogr5_not=85;
	cout<<"Ogrenci 1 notu: "<<ogr1_not<<endl<<"Ogrenci 2 notu: "<<ogr2_not<<endl;
	cout<<"Ogrenci 3 notu: "<<ogr3_not<<endl<<"Ogrenci 4 notu: "<<ogr4_not<<endl;
	cout<<"Ogrenci 5 notu: "<<ogr5_not<<endl;
	//bu i� y�k�nden kurtulmam�z gerekir.
	//ayn� tip veriler diziler i�in kullan�l�r
	int ogrenci[5]={100,90,80,95,85};
	for(int i=0; i<5; i++){
		cout<<"Ogrenci "<<i+1<< " notu: "<<ogrenci[i]<<endl;
	
}
}
