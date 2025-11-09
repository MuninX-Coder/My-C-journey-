#include <iostream>
using namespace std;

int main(){
    // wap to print reverse of a given number
    int n;
    cout << "enter n : ";
    cin >> n;

    int rev = 0;
    
    while (n!=0)
    {
        int last = n%10;
        rev *= 10;
        rev += last;
        n /= 10;
    }
    
cout << rev << endl;
    return 0;
}