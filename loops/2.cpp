#include <iostream>
using namespace std;

int main()
{
    // wap to print sum of a digits of a given number

    int n;
    cout << "enter n : ";
    cin >> n;

    int sum = 0;

    while (n != 0)
    {
        int last = n % 10;
        n /= 10;

        sum += last;
    }
    cout << sum << endl;
    return 0;
}