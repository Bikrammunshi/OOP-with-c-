/*
Create a class which stores employee name id and salary. Derive two classes from employee
    class; regular and part time the regular class stores DA , HRA and basic salary. The part
    time class stores the number of hours and pay per hour. Calculate the salary of a regular
    employee and a partime employee using virtual function.
    */
#include <iostream>
#include <cstring>
using namespace std;

class Employee
{
    public:
        string name;
        long id;
        double salary;

        void input()
        {
            cout<<"Enter the name, id, salary of the employee: "<<endl;
            cin>>name>>id>>salary;
        }
        virtual void output()=0;
};

class Regular: public Employee
{
    public:
    double DA;
    double HRA;
    double basic;
    void output()
    {
        DA=salary*0.8;
        HRA=salary*0.1;
        basic=DA+HRA;
        cout<<"The salary of regular employee "<<basic<<endl;
    }
};

class Parttime: virtual public Employee
{
    public:
    double pph;
    int hrs;
    void output()
    {
        cout<<"Enter the number of hours worked and the payment for each hour: ";
        cin>>hrs>>pph;
        double pay=pph*hrs;
        cout<<"The salary of Parttime employee "<<pay<<endl;
    }
};

int main()
{
    Employee *ptr;
    ptr=new Regular();
    ptr->input();
    ptr->output();
    
    Parttime ob2;
    Employee *ptr2;
    ptr2=new Parttime();
    ptr2->input();
    ptr2->output();
    
    return 0;
}