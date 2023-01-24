/*
Extend the  progran 2 to derive a class form result from class test which includes member funtion
    to calculate total marks and percentage of a student. Input the data for a student and  
    display its total marks and percentage.
    */


#include<iostream>
using namespace std;

class AddData    
{
    public:
        int subjects[3], i;
        void accept_details()
        {
                cout<<"\n Enter Marks for Three Subjects ";
                cout<<"\n ------------------------------- \n";
                cout<<"\n English : ";
                cin>>subjects[0];
                cout<<"\n Maths : ";
                cin>>subjects[1];
                cout<<"\n History : ";
                cin>>subjects[2];
        }
};

class Total : public AddData   
{
    public:
        int total;
        void total_of_three_subjects()
        {
                total = subjects[0] + subjects[1] + subjects[2];
        }
};
class Percentage : public Total       
{
    public:
        float per;
        void calculate_percentage()
        {
                per=total/3;
        }
        void show_result()
        {
                cout<<"\n ------------------------------- \n";
                cout<<"\n Percentage of a Student : "<<per;
        }
};
int main()
{
        Percentage p;
        p.accept_details();
        p.total_of_three_subjects();
        p.calculate_percentage();
        p.show_result();
        return 0;
}