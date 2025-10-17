#include <iostream>
using namespace std;

int main(){
// modulus operator (%) - used to give the remainder

int x , y;
cout << "enter the value of x : ";
cin >> x ;
cout << "enter the value of y : ";
cin >> y;

cout << "modulus - remainder : " << x % y << endl;

// some importants points : 
// a % b = a   (if a < b)
// a % a = 0 
// a % (-b ) = a % b 
// (-a) % b = - [a % b]


    return 0;
}