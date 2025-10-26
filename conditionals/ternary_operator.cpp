#include <iostream>
using namespace std;

int main(){
    // ternary operator sytax - expression 1 ? expression 2 : expression 3;
    // basically line bachane ke lye
    
    // even odd 
    
    int n;
    cout << "enter n : ";
    cin >> n;

    // (condition) ? if true : if false;
    (n%2==0) ? cout << "even" : cout << "odd";  // this line is ternary operator
    return 0;

}