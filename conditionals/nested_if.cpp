#include <iostream>
using namespace std;

int main()
{
    // take 3 positive integers input and print the greatest of them without using multiple condition

    int a, b, c;
    cout << "enter the value of  1 : ";
    cin >> a;
    cout << "enter the value of  2 : ";
    cin >> b;
    cout << "enter the value of  3 : ";
    cin >> c;

    if (a > b)
    {
        if (a > c)
        {
            cout << a << " is greatest";
        }
        else
        {
            cout << c << " is greatest";
        }
    }
    else
    {
        if (b > c)
        {
            cout << b << " is greatest";
        }
        else
        {
            cout << c << " is greatest";
        }
    }

    return 0;
}