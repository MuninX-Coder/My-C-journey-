#include <iostream>
using namespace std;

int main(){
    // absolute value of a number
    int n;
    cout << "enter n : ";
    cin >> n;

    // if (n >= 0)
    // {
    //    cout << n << endl;
    // }
    // else{
    //     cout << -n;
    // }

    // if we want to change n into its absolute value 

    if (n<0)
    {
       n = -n;
       cout << n;
    }
    
    
    return 0;
}
