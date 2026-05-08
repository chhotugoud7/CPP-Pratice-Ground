#include <iostream>
using namespace std;
int main()
{
    int num1 = 5; // 0101

    cout << (num1 << 1) << endl;   // 10 or 01010
    cout << (num1 >> 1) << endl;   // 2   or 0010
    int num2 = 8;                  // 1000
    cout << (num1 & num2) << endl; // 0000 where 1 and 1 sum there 1 remain all other are 0
    /*   0101
         1000
         0000
               */
    cout << (num1 | num2) << endl; // 1101 where 0 and 0 sum there 0 remain all other are 1
    /*       0101
             1000
             1101 or 
                   */

    return 0;
}