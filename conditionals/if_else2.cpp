#include <iostream>
using namespace std;

int main()
{
    int cp, sp;

    cout << "enter cost price : ";
    cin >> cp;

    cout << "enter selling price : ";
    cin >> sp;

    if (sp > cp)
    {
        cout << "profit" << endl;
        cout << "total profit : " << sp - cp << endl;
    }
    else if (sp < cp)
    {
        cout << "loss" << endl;
        cout << "total loss : " << cp - sp << endl;
    }
    else
    {
        cout << "NO PROFIT NO LOSS" << endl;
    }

    return 0;
}