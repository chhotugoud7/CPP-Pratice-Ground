#include <iostream>
using namespace std;

class Bank_account
{
private:
    int account_number;
    string name;
    int balance = 3000;
    int new_balance;

public:
    void enter_user_data();
    int deposit_amt();
    int withdraw_amt();
    void display();

};
 
void Bank_account::enter_user_data(/* args */)
{
    cout<<"Enter Your details"<<endl;
    cout<<"Enter Customer Name:"<<endl;
    cin>>name;
    cout<<"Enter Customer Account Number:"<<endl;
    cin>>account_number;
     
    
}

int Bank_account::deposit_amt()
{
    int depositamount;
    cout<<"deposit ammount"<<endl;
    cin>>depositamount;
    new_balance = balance+depositamount;
    cout<<"Your currenct balance is: "<<new_balance<<endl;
    return new_balance;

}


int Bank_account::withdraw_amt()
{
    int withdrawammount;
    cout<<"withdraw ammount"<<endl;
    cout<<"Enter ammount to withdraw"<<endl;
    cin>>withdrawammount;
    new_balance = balance - withdrawammount;
    cout<<"Your currenct balance is: "<<new_balance<<endl;
    return new_balance;
    
}

void Bank_account::display()
{
    int a;
    cout<<"Enter your choise"<<endl; 
    cin >> a;
    switch (a)
    {
    case 1:
        cout<<"want to deposit"<<endl;
        deposit_amt();
        break;
    case 2:
        cout<<"want to withdraw"<<endl;
        withdraw_amt();
        break;
    case 3:
        cout<<"check your currenct balance"<<endl;
        cout<<balance;
        break;
    default:
        cout<<"Exit"<<endl;
        break;
    }
}

int main()
{
    Bank_account custmr;
    custmr.enter_user_data();
    cout<<"Enter 1: want to deposit"<<endl;
    cout<<"Enter 2: want to withdraw"<<endl;
    cout<<"Enter 3: check your available balance"<<endl;

    custmr.display();
    cout<<"Good luck"<<endl;
    return 0;
}


