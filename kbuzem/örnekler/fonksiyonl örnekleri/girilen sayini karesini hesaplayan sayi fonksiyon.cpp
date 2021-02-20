#include <iostream>
using namespace std;
//girilen sayinin karesini hesaplayan 
void kareal(int x){
	cout<<x*x<<endl;
}
int kareal1(int x){
	return x*x;
}
int main(int argc, char** argv) {
	kareal(10);
cout<<	kareal1(2);
}
