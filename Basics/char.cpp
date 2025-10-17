#include <iostream>
using namespace std;

int main(){
   // char - a,b,c.. upto z, A,B,C upto Z and symbols (this all are character ) character are written in singl quote 'a'

   char letter = 'M'; // declartion of character data type
   cout << letter << endl;

   char mylet;
   cin >> mylet;

   cout << mylet << endl;

   // ASCHII VALUES - every character has a integer value
   // a - 97
   // b - 98
   // A - 65
   // B - 66
   // '0' - 48
   // '1' - 49
   // '9' - 57

// finding the aschii value of any character
   char typechar;
   cout << "enter the value of your character : ";
    cin >> typechar ;

    cout <<(int) typechar << endl;


    return 0;
}