#include <iostream>
using namespace std;

int main()
{
    // write a program to find the highest factor of a number n, other than n itself

    int n;
    cout << "enter n : ";
    cin >> n;

  
    for (int i = n / 2; i >= 1; i--)
    {
        if (n % i == 0)
        {
            cout << i << " ";
           
            break; // to get out of the loop imideatlty
            
        }
    }
   
    return 0;
}