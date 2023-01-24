//WAp to swap two integers using pass by reference.


#include <iostream>
using namespace std;

class swapping
{
    

    public:
        int a;
        int b;
        void input();
        void change(int *,int *);
        void display();
};

void swapping::input()
{
    cout<<"Enter the two numbers respectively: ";
    cin>>a>>b;
}

void swapping::change(int *p,int *q)
{
    int temp=*p;
    *p=*q;
    *q=temp;
}

void swapping::display()
{
    cout<<"After swapping the data is "<<a<<" "<<b;
}

int main()
{
    swapping s;
    s.input();

    s.change(&s.a,&s.b);
    s.display();
    return 0;
}