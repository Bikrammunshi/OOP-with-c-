/*
Create a class Student which stores name, roll number and total marks for a student. 
Input the data for a student and display it.
*/

#include <iostream>
#include <string>
using namespace std;

class Student
{
    private:
        string name;
        long roll;d
        double total;

    public:
        void input();
        void display();

};


void Student::input()
{
    cout<<"Enter the name of the student"<<endl;
    getline(cin,name);

    cout<<"Enter the roll number of the student"<<endl;
    cin>>roll;

    cout<<"Enter the total nmarks of the student"<<endl;
    cin>>total;

}

void Student::display()
{
    cout<<"The details of the student are "<<endl;
    cout<<"Name:\t"<<name<<endl;
    cout<<"Roll:\t"<<roll<<endl;
    cout<<"Total:\t"<<total<<endl;

}

int main()
{
    Student std;
    std.input();
    std.display();
    return 0;
}