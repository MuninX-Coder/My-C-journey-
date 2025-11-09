#include <iostream>
using namespace std;

int main(){
    // even - number % 2 == 0

    int num;
    cout << "enter number : ";
    cin >> num;


    // loop running for 100 times
    for (int i = 1; i <= num; i++)
    {
        if (i%2==0)
        {
            cout << i << " even number" << endl;
        }
        
    }

    // method 2

    for (int i = 2; i <=num; i = i + 2)
    {
       cout << i << " even number" << endl;
    }
    
    
    return 0;
}