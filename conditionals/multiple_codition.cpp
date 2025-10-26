#include <iostream>
using namespace std;

int main(){
    // using && and || 

// && - both statement should be true  (and)   (logical operator)
// || - one statement should be ture  (or)

int n;
cout << "enter n : ";
cin >> n;

if (n >99 && n <1000)
{
    cout << "yes this is a 3 digit number : " << n << endl;
} else{
    cout << "not a 3 digit numer" << n << endl;
}

    return 0;
}