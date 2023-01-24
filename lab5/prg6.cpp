//WAP to increment the value of an argument given to function.

#include <iostream>
using namespace std;

class increase
{
    public:
        int  a;
        void input();
        void increament();
        void display();
};

void increase::input()
{
    cout<<"Enter the digit ";
    cin>>a;
}

void increase::increament()
{
    ++a;
    
}

void increase::display()
{
    cout<<"The value is "<<a;
}

int main()
{
    increase b;
    b.input();
    cout<<"Enter the number of times to increament the number : ";
    int n;
    cin>>n;

    while(n>0)
    {
        b.increament();
        n--;
    }
    b.display();
    return 0;
}