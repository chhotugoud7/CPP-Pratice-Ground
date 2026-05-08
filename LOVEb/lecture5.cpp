#include <iostream>
using namespace std;

int main()
{
    /*
    int a;
    int b;
    a = 4;
    b = 6;

    cout << (a & b) << endl;
    cout << (a | b) << endl;
    cout << (~a) << endl;
    cout << (a ^ b) << endl;

    cout << (a>>1) <<endl;; // right shift a/2=2
    cout<< (a<<4);
    */

    /*
    // problem 1 fibonacci series
     int n;
     cin>>n;
     int a = 0, b = 1;
     cout<<a<<" "<<b<<" ";

     for (int i = 1; i <= n; i++)
     {
         int nextNumber = a + b;
         cout<< nextNumber<<" ";
         a = b;
         b = nextNumber;

     }
     */
    

    /*
    // problem 2. is prime or not a prime

    int n;
    cout << "Enter the value of n ";
    cin >> n;

    bool isPrime = 1;

    for (int i = 2; i < n; i++)
    {
        if ((n % i) == 0)
        {
            isPrime = 0;
            break;
        }
    }

    if (isPrime == 0)
    {
        cout << "It is not a Prime Number";
    }
    else
    {
            cout << "It is a Prime Number";
    }
    */


//    int N;
//    cin>>N;
//     int sum = 0;
        
//         while(N!=0){
//             int digit = (N % 10);
//             sum += digit;
//             N /= 10;
//         }
//         cout<<sum;
    
    int a =4, b =6;
    int c;
    c=a;
    a=b;
    b=c;
    cout <<"value of a is "<< a << "Value of b is "<<b;
    
    return 0;
}