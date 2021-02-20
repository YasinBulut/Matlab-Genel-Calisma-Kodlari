#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;

int main(int argc, char** argv) {

string s;
char *p="evren";
char c[6]="evren";
s=p;
cout<<s.size()<<endl;
s.append("deneme");
cout<<s<<endl;
s.substr(2,8);
cout<<s.substr(2,8)<<endl;
}
