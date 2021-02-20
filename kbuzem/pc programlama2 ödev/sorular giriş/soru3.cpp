#include <iostream>
#include <stdio.h>
#include <conio.h>
 using namespace std;
//Girilen 3 sayýyý vbuyukten kucuge  sýralama 

 
int main(){
    
    int sayi1, sayi2, sayi3;
    
// Kullanýcýdan 3 sayý girmesini istiyoruz
    printf("Birinci Sayiyi Giriniz: ");
    scanf("%d", &sayi1);    
    printf("Ikinci Sayiyi Giriniz: ");
    scanf("%d", &sayi2);    
    printf("Ucuncu Sayiyi Giriniz: ");
    scanf("%d", &sayi3);
    
    // sayi1 en küçük ise
    if(sayi1 < sayi3 && sayi1 < sayi2){
            
        if(sayi2 < sayi3)
            printf("%d %d %d", sayi3, sayi2, sayi1);
            
        else
            printf("%d %d %d", sayi2, sayi3, sayi1);
    }
        
    // sayi2 en küçük ise
    else if(sayi2 < sayi1 && sayi2 < sayi3){
            
        if(sayi1 < sayi3)
            printf("%d %d %d", sayi3, sayi1, sayi2);
            
        else
            printf("%d %d %d", sayi1, sayi3, sayi2);
            
        }
        
    //sayi3 en küçük ise
    else{
            
        if(sayi1 < sayi2)
            printf("%d %d %d", sayi2, sayi1, sayi3);
            
        else 
            printf("%d %d %d", sayi1, sayi2, sayi3);
            
        }
    
    getch();
     
}
