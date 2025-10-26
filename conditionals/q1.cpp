#include <iostream>
using namespace std;

int main(){
    // take a positive integers input and tell if it is divisible by 5 and 3

    int n;
    cout << "enter n : ";
    cin >> n;

    if (n % 5 == 0 && n % 3 == 0)
    {
        cout << "yes this number is divisible by 3 and 5 : " << n << endl;
    }
     else {
         cout << "no this number is divisible by 3 and 5 : " << n << endl;
     }
    return 0;
}