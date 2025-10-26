#include <iostream>
using  namespace std;

int main(){
    int n;
    cout << "enter n : ";
    cin >> n;

    if (n % 3 == 0 || n % 5 == 0)  // if one condition is ture it will run.
    {
       cout << "yes this number is divisible by 5 or 3 : " << n << endl;
    }
    else {
        cout << "not divisible : " << n << endl;
    }
    return 0;
}