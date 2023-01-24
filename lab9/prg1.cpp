/*
Write a program in c++ to creAte a Student class which stores the name, roll, and branch 
of a student. Derice three classes named InternalExam, MidSemesterExam and EndSemesterExam from
it. InternalExam stores internal marks for fiVe different subjects(out of 30). MidSemesterExam
stores the MidSemesterExam marks for five different subjects (out of 20) and 
EndSemesterExam stores theh end semester exam marks for five different subjects (out of 50).
Derice a class Result from InternalExam, MidSemesterExam and EndSemesterExam to compute and display
the total marks and percentage of a student.
    */


#include <iostream>
#include <cstring>
using namespace std;

class Student
{
    public:
    string name;
    long roll;
    string branch;

    void input()
    {
        cout<<"Enter name of the stundent: ";
        cin>>name;
        cout<<"Enter the roll number of the student: ";
        cin>>roll;
        cout<<"Enter the branch of the student: ";
        cin>>branch;
    }
};

class InternalExam: virtual public Student
{
    public:
    double marks[5];

    void input()
    {
        cout<<"Enter the marks of 5 subjects out of 30"<<endl;
        for(int i=0;i<5;i++)
            cin>>marks[i];
    }
};


class MidSemesterExam: virtual public Student
{
    public:
    double marks[5];
    void input()
    {
        cout<<"Enter the marks of 5 subjects out of 20"<<endl;
        for(int i=0;i<5;i++)
            cin>>marks[i];
    }
};

class EndSemesterExam: virtual public Student
{
    public:
    double marks[5];
    void input()
    {
        cout<<"Enter the marks of 5 subjects out of 50"<<endl;
        for(int i=0;i<5;i++)
            cin>>marks[i];
    }
};

class Result: virtual public Student, virtual public InternalExam, virtual public MidSemesterExam, virtual public EndSemesterExam
{
    public:
    void output()
    {
        double total=0;
        for(int i=0;i<5;i++)
        {
            total=total+InternalExam::marks[i]+MidSemesterExam::marks[i]+EndSemesterExam::marks[i];
            
        }
        double percen=total/5;

        cout<<" The details of the Student are: "<<endl;
        cout<<" Name: "<<Student::name<<endl;
        cout<<" Roll: "<<Student::roll<<endl;
        cout<<" Branch: "<<Student::branch<<endl;
        cout<<" Total: "<<total<<endl;
        cout<<" Percentage: "<<percen<<endl;
        
    }
};

int main()
{
    Result obj;
    obj.Student::input();
    obj.InternalExam::input();
    obj.MidSemesterExam::input();
    obj.EndSemesterExam::input();
    obj.output();
    return 0;
}