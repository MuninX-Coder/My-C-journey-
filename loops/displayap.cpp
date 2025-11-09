#include <iostream>
using namespace std;

int main(){
int n;
cout << "enter n : ";
cin >>n;

for (int i = 1; i <= 2*n-1; i+=2)
{
    cout << i << endl;
}

cout << "different one" << endl;
for (int i = 1; i <= 3 * n+ 1; i++)
{
    cout << i << endl;
}

cout << "different ones more";
int a = 4;
for (int i = 1; i <= n; i++)
{
   cout << a << " ";
   a += 3; 
}

    return 0;
}