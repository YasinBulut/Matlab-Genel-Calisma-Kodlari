#include<iostream>
using namespace std;
int main() {
int basari;
cout << "Basari notunu giriniz: ";
cin >> basari;
switch (basari/10)
{cout << endl;
case 10: cout << "A" << endl ; break;
case 9: cout << "A-" << endl ; break;
case 8: cout << "B" << endl ; break;
case 7: cout << "B-" << endl ; break;
case 6: cout << "C" << endl ; break;
case 5: cout << "D" << endl ; break;
case 4: case 3: case 2: case 1: case 0: cout <<
"F" << endl ; break;
default: cout << "Gecersiz not!" << endl; }
return 0;}
