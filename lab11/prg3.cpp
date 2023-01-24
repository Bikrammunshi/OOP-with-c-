/*
Create a class which stores account number, customer name and balance. Derive two classes from 
    Account class savings and current the savings class stores minimum balance the current
    class stores the overdue amount. Inchle member functions in the appropriate class for
        -deposit money
        -withdray money
        -dispplay balance
    Display data from each class using virtual function
    */
#include <iostream>
#include <cstring>
using namespace std;
class Account
{
    public: 
        static string name;
        static long number;
        static double balance;

        
        void input()
        {
            cout<<"Enter your name: ";
            cin>>name;
            cout<<"Enter your account number:   ";
            cin>>number;
            cout<<"Enter account balance:   ";
            cin>>balance;
        }

        virtual void display()
        {
        cout<<"Name:                "<<name<<endl;
        cout<<"Account number:      "<<number<<endl;
        cout<<"Balance in account:  "<<balance<<endl;
        }
};

string Account::name="a";
long Account::number=0;
double  Account::balance=0.0;

class Savings: public Account
{
    public:
    double amt;

    Savings()
    {
        amt=0.0;
    }
    void deposit()
    {        
        cout<<"Enter the amount you want to deposit:    ";
        cin>>amt;
        balance=balance+amt;
    }

    void withdraw()
    {
        if(balance <= 2000.0)
            cout<<"Sorry withdrawal from this savings account not possible."<<endl;
        else
        {
            cout<<"Enter the amount you want to withdraw:   ";
            cin>>amt;
            balance=balance-amt;
        }
    }

};

class Current:public Account
{
    public:
    double amt;
    Current()
    {
        amt=0.0;
    }
    void deposit()
    {        
        cout<<"Enter the amount you want to deposit:    ";
        cin>>amt;
        balance=balance+amt;
    }

    void withdraw()
    {
        cout<<"Enter the amount you want to withdraw:   ";
        cin>>amt;
        balance=balance-amt;
        if (balance<2000.0)
            cout<<"The overdue is "<<(2000.0-balance);
    }

};

int main()
{
    Account obj;
    
    obj.input();
        Savings obs;
        Current obc;
    Account *ptr;
    
    cout<<"1.Savings Account \n2.Current Account \nEnter your choice\n";
    int c;
    cin>>c;
    switch(c)
    {
        case 1:
        int k;
        cout<<"1.Deposit \n2.Withdraw\n";
        cin>>k;
        if(k==1)
            obs.deposit();
        else
            obs.withdraw();
        ptr=&obs;
        ptr->display();

        break;

        case 2:
        int l;
        cout<<"1.Deposit \n2.Withdraw\n";
        cin>>l;
        if(l==1)
            obc.deposit();
        else
            obc.withdraw();
        ptr=&obc;
        ptr->display();
        break;

        default:
        cout<<"Transaction cannot process due to wrong choice\n";
    }
    return 0;
}