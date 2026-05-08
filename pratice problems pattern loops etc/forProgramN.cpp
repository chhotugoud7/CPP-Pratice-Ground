#include <iostream>
using namespace std;

int main()
{

    int n = 748392615;

    // even digits are 4, 8, 2, 6 and sum of even digits is 20
    // odd digits are 7, 3, 9, 1 and 5 and sum of odd digits is 25

    int countEven = 0;
    int countOdd = 0;
    int sumEven = 0;
    int sumOdd = 0;

    while (n > 0)
    {

        int digit = n % 10;

        cout << digit << endl;

        if (digit % 2 == 0)
        {
            countEven++;
            sumEven += digit;
        }
        else
        {
            countOdd++;
            sumOdd += digit;
        }

        n = n / 10;
    }

    cout << "\ncount of even digits is " << countEven << endl;
    cout << "count of odd digits is " << countOdd << endl;
    cout << "The sum of all even digits is " << sumEven << endl;
    cout << "The sum of all odd digits is " << sumOdd << endl;

    return 0;
}