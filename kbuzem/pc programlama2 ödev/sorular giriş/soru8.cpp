#include<iostream>
 using namespace std;
 //ascii deðerini bulma
  
int main()
{
    char c;
    cout << "sayi giriniz: ";
    cin >> c;
    if(0<=c&& c>=255){
	
    cout << "Girilen Karakterin ASCII Degeri: " << int(c);
} else {

cout<<"Hatali sayi girdiniz"<<endl;
    return 0;
}
}
