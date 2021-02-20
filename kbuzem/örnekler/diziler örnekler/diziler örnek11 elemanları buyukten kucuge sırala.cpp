#include <iostream>
using namespace std;
// dizi elemanlarýný kucukten buyuge sýrala
int main(int argc, char** argv) {
    int n;
    cout<<"Dizinin eleman sayisini giriniz";
    cin>>n;
    int dizi[n];
    for(int i=0;i<n;i++){
    	cout<<"Tam sayi giriniz";
    	cin>>dizi[i];}
    for	( int i=1;i<n;i++){
    	int gecici;
    		for (int k=0; k<(n-i);k++){
    			if(dizi[k]>dizi[k+1]){
    				gecici=dizi[k];
    				dizi[k]=dizi[k+1];
    				dizi[k+1]=gecici;
}
}
}

	    	cout<<"Siralanmis hali"<<endl;
      for(int i=0; i<n;i++){
        	cout<<dizi[i]<<"\t";
}
}


