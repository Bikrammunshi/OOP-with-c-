/*
 Create a class Employee which stores id, name, age and basic salary of an employee.
 Input data for n number of employees. Calculate the gross salary of all the employees and display it along with all other details in a tabular form. 

                         [Gross salary= Basic salary + DA + HRA, DA = 80% of Basic salary 
                                     HRA=HRA=10% of Basic salary ] 
*/

#include <iostream>
#include <string>
using namespace std;

class Employee

{
    private:
        int n;
        string name[2];
        long id[2];
        int age[2];
        double basic[2];
        double gross[2];

    public:
        void input();
        void display();
        void calculate();   

};


void Employee::input()
{
    cout<<"Enter the number of the employee"<<endl;
    cin>>n;
    name[n];
    id[n];
    age[n];
    basic[n];
    gross[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the name of the employee "<<endl;
        cin.ignore(1,'\n');
        getline(cin,name[i]);
        cout<<"Enter the id number of the employee"<<endl;
        cin>>id[i];
        cout<<"Enter the age of the employee"<<endl;
        cin>>age[i];
        cout<<"Enter the basic pay of the employee"<<endl;
        cin>>basic[i];
    }

}

void Employee::calculate()
{
    
    for(int i=0;i<n;i++)
        gross[i]=basic[i]+(0.8*basic[i])+(0.1*basic[i]);
    
}
void Employee::display()
{
    cout<<"The details of the employee are "<<endl;
    cout<<"NAME \t\t\t"<<"ID \t\t\t"<<"AGE \t\t\t"<<"BASIC \t\t\t"<<"GROSS"<<endl;
    for(int i=0;i<n;i++)
    cout<<name[i]<<"\t\t\t"<<id[i]<<"\t\t\t"<<age[i]<<"\t\t\t"<<basic[i]<<"\t\t\t"<<gross[i]<<endl;

}

int main()
{
    Employee emp;
    emp.input();
    emp.calculate();
    emp.display();
    return 0;
}
