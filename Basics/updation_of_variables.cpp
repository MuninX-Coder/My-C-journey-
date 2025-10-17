#include <iostream>
using namespace std;

int main(){
    int x = 6; 
    cout << x << endl;
    cout << "Munin" << endl;

    x = 8;   // we change the value of x to 8 in this line. (overwrite or updation)
    cout << x << endl;

    x = 32; // now we change the value of x to 32
    cout << x << endl;

    x =  x + 8;  // in this line add x which is 32 current value to 8 and store that value is x.
    cout << x << endl; 

    x = x - 4;
    cout << x << endl;

    x = x / 2;
    cout << x << endl; 

    x = x * 3;
    cout << x << endl;

    x += 2;  // same like x =  x + 2;
    cout << x << endl;

    x -= 8; // same like x = x - 8;
    cout << x << endl;
    return 0;
} 