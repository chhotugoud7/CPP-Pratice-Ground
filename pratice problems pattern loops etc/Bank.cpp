#include <iostream>
using namespace std;

class Bank_account
{
private:
    int account_number;
    string name;
    int balance = 10000;
    int new_balance;

public:
    void enter_user_data();
    int deposit_ammount();
    int withdraw_ammount();
    void display();

};

void Bank_account::enter_user_data(/* args */)
{
    cout<<"Enter details"<<endl;
    cout<<"Customer name:"<<endl;
    cin>>name;
    cout<<"Customer Account number:"<<endl;
    cin>>account_number;
    
}

int Bank_account::deposit_ammount()
{
    int depositamount;
    cout<<"deposit ammount"<<endl;
    cin>>depositamount;
    new_balance = balance+depositamount;
    cout<<"Your currenct balance is: "<<new_balance<<endl;
    return new_balance;

}


int Bank_account::withdraw_ammount()
{
    int withdrawammount;
    cout<<"withdraw ammount"<<endl;
    cout<<"Enter ammount to withdraw"<<endl;
    cin>>withdrawammount;
    new_balance + balance - withdrawammount;
    cout<<"Your currenct balance is: "<<new_balance<<endl;
    return new_balance;
    
}

void Bank_account::display()
{
    int number;
    cout<<"Enter the number"<<endl;
    cin>>number;
    switch (number)
    {
    case 1:
        cout<<"choose to deposit"<<endl;
        deposit_ammount();
        break;
    case 2:
        cout<<"choose to withdraw"<<endl;
        withdraw_ammount();
        break;
    case 3:
        cout<<"check balance"<<endl;
        cout<<balance;
        break;
    
    
    default:
        cout<<"Exit"<<endl;
        break;
    }
}

int main ()
{
    Bank_account customer1:
    customer1.enter_user_data();
    cout<<"Enter 1: to deposit"<<endl;
    cout<<"Enter 2: to withdraw"<<endl;
    cout<<"Enter 3: check available balance"<<endl;

    customer1.display();
    cout<<"Exit"<<endl;
    return 0;
}


