#include <iostream>
#include <math.h>
using namespace std;
//153=1*100+5*10+3*1==>> (1*1*1+5*5*5+1*1*1*)
int main(int argc, char** argv) {
	int i,j,k;
	for(i=1;i<=9;i++)
    	for(j=0;j<=9;j++)
	        for(k=0;k<=9;k++)
	        if((100*i+10*j+k)==(i*i*i+j*j*j+k*k*k))
	                  cout<<(100*i+10*j+k)<<endl;
	                  
	  
	
	
	return 0;
}
