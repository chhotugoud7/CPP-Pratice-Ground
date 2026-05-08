#include <iostream>
using namespace std;

class Bank_account
{
private:
    int user_account_number;
    string user_name;
    int balance = 80000000;
    int new_balance;

public:
    void enter_user_data();
    //get user deta from use
    int dep_amt();
    // deposit ampount
    int with_amt();
    //  withdraw ammount
    void display();

};
 
void Bank_account::enter_user_data(/* args */)
{
    cout<<"Enter Your details"<<endl;
    cout<<"Enter Name:"<<endl;
    cin>>user_name;
    cout<<"Enter Account Number:"<<endl;
    cin>>user_account_number;
     
    
}

int Bank_account::dep_amt()
{
    int depositamt;
    cout<<"deposit ammount"<<endl;
    cin>>depositamt;
    new_balance = balance+depositamt;
    cout<<"Your currenct balance is: "<<new_balance<<endl;
    return new_balance;

}


int Bank_account::with_amt()
{
    int withdrawamt;
    cout<<"withdraw ammount"<<endl;
    cout<<"Enter ammount to withdraw"<<endl;
    cin>>withdrawamt;
    new_balance = balance - withdrawamt;
    cout<<"Your currenct balance is: "<<new_balance<<endl;
    return new_balance;
    
}

void Bank_account::display()
{
    int Choice;
    cout<<"Enter your choise"<<endl; 
    cin >> Choice;
    switch (Choice)
    {
    case 1:
        cout<<"want to deposit money in your account"<<endl;
        dep_amt();
        break;
    case 2:
        cout<<"want to withdraw money6 from your account"<<endl;
        with_amt();
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
    cout<<"Enter 1: want to deposit money in your account"<<endl;
    cout<<"Enter 2: want to withdraw money from your account"<<endl;
    cout<<"Enter 3: check your available balancein your account"<<endl;

    custmr.display();
    cout<<" Please visit next time "<<endl;
    return 0;
}


