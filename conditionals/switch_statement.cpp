#include <iostream>
using namespace std;

int main()
{
    // using switch case
    int num1, num2;
    cout << "enter num1 : ";
    cin >> num1;

    char ch;
    cout << "enter your operation : ";
    cin >> ch;

    cout << "enter num2 : ";
    cin >> num2;

    // by if esle

    // if (ch == '+')
    // {
    //     cout << num1 + num2;
    // }
    // else if (ch == '-')
    // {
    //     cout << num1 - num2;
    // }
    // else if (ch == '*')
    // {
    //     cout << num1 * num2;
    // }
    // else if (ch == '/')
    // {
    //     cout << num1 / num2;
    // }

    // by switch statement

    switch (ch)
    {
    case '+':
        cout << num1 + num2 << endl;
        break;

    case '-':
        cout << num1 - num2 << endl;
        break;

    case '*':
        cout << num1 * num2 << endl;
        break;

    case '/':
        cout << num1 / num2 << endl;
        break;

    default:
        cout << "character is invalid, enter a valid operator";
        break;
    }
    return 0;
}