#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
using namespace std; 

int main(int argc, char** argv) {
	int n;
	cin>>n ;// kaç zar atýlcaðý 
	srand(time(NULL));
	int skor;
	for(int i=0;i<n;i++){
		int z1=rand()%6+1;
		int z2=rand()%6+1;
		cout<<z1<<" "<<z2<<" "<<endl;
		if(z1>z2){
			skor++;
		}else if (z2>z1){
			skor--;
		}
	}
if(skor>0)
cout<<"1. kazandý"<<endl;
else if (skor<0)
cout<<"2. kazandý"<<endl;
else 
cout<<"beraber"<<endl;
}
