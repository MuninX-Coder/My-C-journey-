#include <iostream>
using namespace std;

int main()
{
    // solid rectangle
    // rows - m, cols - n
    int m;
    cout << "enter nuber of rows : ";
    cin >> m;

    int n;
    cout << "enter number of columns : ";
    cin >> n;

    for (int i = 1; i <= m; i++) // rows - m
    {
        for (int j = 1; j <= n; j++) // cols - n
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}