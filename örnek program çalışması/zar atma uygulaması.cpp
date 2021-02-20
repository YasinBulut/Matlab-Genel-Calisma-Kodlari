#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main(int argc, char** argv) {
	int zar1,zar2;
	srand(time(NULL));
	zar1=1+rand()%6;
	zar2=1+rand()%6;

	
cout<<"Zarlar"<<" "<<zar1<<" ve "<<zar2<<endl;
}
