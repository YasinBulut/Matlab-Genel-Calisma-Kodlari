#include <iostream>
#include<stdio.h>
using namespace std;
// ücgen hesaplama
int main()
{
 int a,b,c;
 cout<<"Kenarlari giriniz";
 cin>>"%d%d%d",&a,&b,&c;
 if((a==b)&&(b==c))
 {
  cout<<"Bu ucgen eskenardir";
 }
 else if((a!=b)&&(b!=c))
 {
  cout<<"Bu ucgen cesitkenardir";
 }
 else
 {
  cout<<"Bu ucgen ikizkenardir";
 }
 return 0;
}
