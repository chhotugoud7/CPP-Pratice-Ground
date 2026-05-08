#include <iostream>
using namespace std;

int main()
{
    /*
    //the values from 1 to n
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;

    int i = 1;
    cout << "The values from 1 to n is " << endl;
    while (i <= n)
    {

        cout << i << " ";
        i = i+1;
    }
    */

   /*
    // the sum of 1 to n is 
    int n;
    cout<<"Enter the values n to find totol sum"<< endl;
    cin >> n;

    int i = 1;
    int sum = 0;

    while(i<=n){
        sum = sum + i;
        i = i +1;
        
    }
    cout<<"The total sum of 1 to n is "<< sum ;
   */

    /*
    // Sum of all even numbers
    int n;
    cout<<"Enter a number to find the total sum of even no. from 1 to n"<<endl;
    cin>>n;

    int num = 2;
    int sum = 0;

    while (num<=n)
    {
        sum = sum + num;
        num = num + 2;

    }
    cout<<"the sum of all even numbers between 1 to n is "<<sum;
    */
    /*
    // Fernite to celcius problem

    float f;
    cout<<"Enter the value of fernite"<<endl;
    cin>>f;

    cout<<"The value of celcius is "<<(((f-32)*5)/9);
    */

    
    // Prime or not prime

    int n;
    cout<<"Enter the value of n "<<endl;
    cin>>n;

    int i = 2;
    while (i<n)     
    {
        if (n%i == 0){
            cout<<"The number "<<n<< " is Not a Prime number "<<"and here it is divided by "<<i<<endl;
        }
        else{
            cout<<"The number "<<n<< " is a Prime number "<<"and here it is divided by "<<i<<endl;
        }
        i++;
    }
    

    return 0;
}