#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    int x[3]={1,2,3};
	int *q;
	//q=&x[0];  alttaki ile ayni anlamda 
	q=x;
	cout<<q[2]<<endl;
	q[2]=8;
	cout<<x[2]<<endl;
}
