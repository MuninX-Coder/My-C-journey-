#include <iostream>
using namespace std;

int main(){
    // wap to count digits of a given number
    int n;
    cout << "enter n: ";
    cin >> n;
    int count = 0;

    while (n!=0)
    {
       n = n/10;
       count++;
    }
    cout << count << endl;
    return 0;
}