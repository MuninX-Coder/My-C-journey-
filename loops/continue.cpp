#include <iostream>
using namespace std;

int main()
{
    // print number 1 to 20 except 3 and 7

    for (int i = 1; i <= 20; i++)
    {
        //   if (i != 3 && i != 8)
        //   {
        //    cout << i << " " << endl;
        //   }

        // by using continue

        if (i == 3 || i == 8)
        {
         
            cout << i << " " << endl;
               continue;
        }
    }

    return 0;
}