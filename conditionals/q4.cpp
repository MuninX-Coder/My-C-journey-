#include <iostream>
using namespace std;

int main()
{
    // take 3 postive number and print greatest of them.

    int a, b, c;
    cout << "enter the value of  1 : ";
    cin >> a;
    cout << "enter the value of  2 : ";
    cin >> b;
    cout << "enter the value of  3 : ";
    cin >> c;

    if (a > b and a > c)
    {
        cout << "a is the greastest " << a << endl;
    }
    else if (b > a and b > c)
    {
        cout << "b is the greates " << b << endl;
    }

    cout << "c is the greatest " << c << endl;

    return 0;
}