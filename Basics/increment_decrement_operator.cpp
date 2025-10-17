#include <iostream>
using namespace std;

int main()
{
    int x = 4;
    cout << x << endl;

    // used to increase the value by 1


    x++; // post increment - first use the value of x then add 1
    cout << x << endl;
    x--; // post decrement
    cout << x << endl;

    ++x; // pre increment - first add 1 then use the value 
    cout << x << endl;
    --x; // pre decrement
    cout << x << endl;

    int x1 = 4;
    cout << "output 1 " << endl;
    cout << x1 << endl;
    cout << x1++ << endl;  // post increment - use the value first then add 1.
    cout << x1 << endl;


    int y = 4;
    cout << "output 2 " << endl;
    cout << y << endl;
    cout << ++y << endl;  // pre increment - first add 1 and then use the value
    cout << y << endl;
    return 0;
}