#include <iostream>
#include<math.h>
using namespace std;
int kenar1,kenar2,kenar3,u,alan;
int main(int argc, char** argv) {
	cout<<"Birinci kenar uzunlugunu girin=";
    cin>>kenar1;
    cout<<"ikinci kenar uzunlugunu girin=";
    cin>>kenar2;
    cout<<"ucuncu kenar uzunlugunu girin=";
    cin>>kenar3;
    u = (kenar1+kenar2+kenar3)/2;
    alan = sqrt(u*(u-kenar1)*(u-kenar2)*(u-kenar3));
    cout<<"Ucgenin alani="<<alan;
}
