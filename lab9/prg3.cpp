/*
Create a class which stores account number, customer number and balance. Derive two classes 
    from 'Account' class : 'Savings' and 'Current'. The 'Savings' class stores minimum balance.
    The 'Current' class stores the overdue amount. Include member functions in the appropriate class for    
        -deposit money
        -withdraw[For saving account minimum balance should be checked]
                 [Dor current account overdue amount should be calculated]
        -display balance
        */

#include <iostream>
#include <cstring>
using namespace std;
//class Savings;
//class Current;
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

    void display()
    {
        cout<<"Name:                "<<name<<endl;
        cout<<"Account number:      "<<number<<endl;
        cout<<"Balance in account:  "<<balance<<endl;
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

    void display()
    {
        cout<<"Name:                "<<name<<endl;
        cout<<"Account number:      "<<number<<endl;
        cout<<"Balance in account:  "<<balance<<endl;
    }
};

int main()
{
    Account obj;
    
    obj.input();
        Savings obs;
        Current obc;
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
        obs.display();
        break;

        case 2:
        int l;
        cout<<"1.Deposit \n2.Withdraw\n";
        cin>>l;
        if(l==1)
            obc.deposit();
        else
            obc.withdraw();
        obc.display();
        break;

        default:
        cout<<"Transaction cannot process due to wrong choice\n";
    }
    return 0;
}