/*
WAP to add two objects of time class. Overload the operator == to compare two objects and
    display whether they are equal or not.
*/

#include <iostream>
using namespace std;

class time
{
    public:
    int s;
    int m;
    int h;
    Time(){}
    void input()
    {
        cout<<"Enter the time in hh mm ss format: ";
        cin>>h>>m>>s;
    }

    operator ==(time &d)
    {
        if(this->s==d.s && this->m==d.m && this->h==d.h)
            cout<<"The time enetered is same\n";
        else
            cout<<"The time are not same\n";
    }

    operator +(time &d)
    {
        m=d.m+m;
        s=d.s+s;
        h=d.h+h;
        if(s>60)
        {
            m=s/60;
            s=s%60;
        }
        if(m>60)
        {
            h=m/60+h;
            m=m%60;
        }
        
        cout<<"After adding two numbers "<<h<<" hour "<<m<<" min "<<s<<" sec";
    }
};

int main()
{
    time t;
    t.input();
    time t2;
    t2.input();
    t==t2;
    t+t2;
    return 0;
}