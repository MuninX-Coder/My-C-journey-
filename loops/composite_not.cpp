#include <iostream>
using namespace std;

int main()
{
    // composite number

    int n;
    cout << "cout << enter n : ";
    cin >> n;

    bool flag = true; // bool data type is for ture and false, true = 1, false = 0
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = false;

            break;
        }
        if (flag == true)
        {
            cout << "prime";
        }

        else
        {
            cout << "composite";
        }
    }

    return 0;
}