/*
Modify the program ii) to store marks in 5 subjects. 
Calculate the total marks and percentage of a student and display it using function. 
(Function should be defined outside the class)
*/

#include <iostream>
#include <string>
using namespace std;

class Student
{
    private:
        string name;
        long roll;
        double total;
        double marks[5];
        double perc;

    public:
        void input();
        void display();
        void calculate();

};


void Student::input()
{
    cout<<"Enter the name of the student"<<endl;
    getline(cin,name);

    cout<<"Enter the roll number of the student"<<endl;
    cin>>roll;

    cout<<"Enter the marks of five subjects of the student"<<endl;
    for(int i=0;i<5;i++)
        cin>>marks[i];

}

void Student::calculate()
{
    total=0;
    for(int i=0;i<5;i++)
        total=total+marks[i];
    
     perc=total*100/500;
}
void Student::display()
{
    cout<<"The details of the student are "<<endl;
    cout<<"Name:\t\t"<<name<<endl;
    cout<<"Roll:\t\t"<<roll<<endl;
    cout<<"Total:\t\t"<<total<<endl;
    cout<<"Percentage:\t"<<perc<<endl;

}

int main()
{
    Student std;
    std.input();
    std.calculate();
    std.display();
    return 0;
}
