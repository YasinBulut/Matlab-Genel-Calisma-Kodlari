
#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;
 
bool Asal(int sayi)
{
	int sayac=0;
	for(int j=2; j<sayi; j++)
     {
      if(sayi % j == 0)
         {
          sayac++;
          break;
         }
     }
  	if(sayac == 0)
      return true;
 	else
      return false;
	
}
 
int main()
{
	for(int i=2;i<=100;i++)
	{
		if(Asal(i))
		{
			cout<<i<<"  ";
		}
	}
      
}
 
