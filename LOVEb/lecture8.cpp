#include<iostream>
using namespace std;

int main()
{
    /*
    // calculator with switch cases
    int a, b;

    cout<<"Enter the value of a "<<endl;
    cin>>a;

    cout<<"Enter the value of b "<<endl;
    cin>>b;

    char op;
    cout<<"Enter the operation you want to perform "<<endl;
    cin>>op;

    switch (op)
    {
    case '+':
        cout<<(a+b)<<endl;
        break;
    
    case '-':
        cout<<(a-b)<<endl;
        break;
    
    case '*':
        cout<<(a*b)<<endl;
        break;
    
    case '/':
        cout<<(a/b)<<endl;
        break;
    
    case '%':
        cout<<(a%b)<<endl;
        break;
    
    default: 
        cout<<"Please enter a valid operation"<<endl;
         
    }
    */

   int amount;
   cout<<"Enter the amount"<<endl;
   cin>>amount;

   int Rs100, Rs50, Rs20, Rs1;

   switch(1) {
        case 1 : Rs100=amount/100;
            amount = amount % 100;
            cout<<"The 100 Rs notes required are "<<Rs100<<endl;

        case 2 : Rs50 = amount/50;
            amount = amount % 50;
            cout<<"The 50 Rs notes required are "<<Rs50<<endl;  

        case 3 : Rs20=amount/20;
            amount = amount % 20;
            cout<<"The 20 Rs notes required are "<<Rs20<<endl;

        case 4 : Rs1 = amount/1;
            amount = amount % 1;
            cout<<"The 1 Rs notes required are "<<Rs1<<endl;    
   }

    return 0;
}