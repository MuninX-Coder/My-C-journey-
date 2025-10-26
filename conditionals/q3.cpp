#include <iostream>
using namespace std;

int main()
{
    // take 3 number input and tell it they can be the side of a triangle
    int a, b, c;
    cout << "enter the value of side 1 : ";
    cin >> a;
    cout << "enter the value of side 2 : ";
    cin >> b;
    cout << "enter the value of side 3 : ";
    cin >> c;

    if ((a + b) > c and (b + c) > a and (c + a) > b)
    {
        cout << "valid traingle";
    }
    else
    {
        cout << "invalid traingle";
    }

    return 0;
}