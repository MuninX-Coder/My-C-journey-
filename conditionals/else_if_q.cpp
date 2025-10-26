#include <iostream>
using namespace std;

int main()
{
    int marks;
    cout << "enter your marks : ";
    cin >> marks;

    if (marks >= 81 and marks <= 100)
    {
        cout << "very good";
    }
    else if (marks >= 61 and marks <= 80)
    {
        cout << "good";
    }
    else if (marks >= 41 and marks <= 60)
    {
        cout << "average";
    }
    else if (marks <= 40)
    {
        cout << "fail";
    }

    return 0;
}