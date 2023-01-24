/*
 Create a class which stores employyee name, id and salaray. Derive two classes from 'Employee' class
: Regular and Part-time class. The Regular class stores DA, HRA and basic salary.
The Part-time class stores the number of hours and pay per hour.
Calculate the salary of a regular employee and a part-time employee.
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
    void display()
    {
        cout<<"Enter the number of hours worked and the payment for each hour: ";
        cin>>hrs>>pph;
        double pay=pph*hrs;
        cout<<"The salary of Parttime employee "<<pay<<endl;
    }
};

int main()
{
    Regular obj;
    obj.input();
    obj.output();
    Parttime ob2;
    ob2.input();
    ob2.display();
    return 0;
}