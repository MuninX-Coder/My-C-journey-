#include <iostream>
using namespace std;

int main()
{
    // arithmetic operator - + , - , /, * , %
    int x = 5, y = 4;
    // float x = 5 , y = 4;

    cout << x + y << endl; // addition
    cout << x - y << endl; // subtraction
    cout << x * y << endl; // multiplication
    cout << x / y << endl; // division  (for decimal value we need to use float data type othewise we will get integer part only )
    cout << x % y << endl; // modulo - remainder

    float a = 5.0, b = 4.0;  // deciaml point value

    cout << a / b << endl;  
    return 0;
}