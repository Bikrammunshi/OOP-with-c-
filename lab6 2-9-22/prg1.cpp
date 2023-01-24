//WAP to swap private data member of two classes[the classes have no relation with each other].

#include <iostream>
using namespace std;
class B1;
class A1
{
    int a;
    public:
        void input();
        friend void swap(A1,B1);
};

class B1
{
    int b;

    public:
        void input();
        friend void swap(A1,B1);
};

void A1::input()
{
    cout<<"Enter the first digit: ";
    cin>>a;
}

void B1::input()
{
    cout<<"Enter the second digit: ";
    cin>>b;
}

void swap(A1 x, B1 y)
{
    int temp=y.b;
    y.b=x.a;
    x.a=temp;

    cout<<"The numbers after swapping are "<<x.a<<" "<<y.b;
}

int main()
{
    A1 a1;
    B1 b1;

    a1.input();
    b1.input();
    swap(a1,b1); 
    return 0;
}
