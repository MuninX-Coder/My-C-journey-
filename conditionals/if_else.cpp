#include <iostream>
using namespace std;

int main (){
    // if else - when we have situation, agar wasa tho wasa 
    // take a postive interger and tell even or odd

    int num;
    cout << "enter the num : ";
    cin >> num;
    
    // number % 2 == 0  this is consider as even,  ==  means equal or not. 

    if (num % 2 == 0) // checking does the number is even or not. 
    {
       cout << "even number : " << num << endl;
       cout << "wow" << endl;
    } else {
        cout << "odd number : " << num << endl;
    }
    
    return 0;
}