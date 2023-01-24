//WAP to swap private data members of a class using call by value.

#include <iostream>
using namespace std;

class Swap
{
    private:
        int a;
        int b;

    public:
        void swapp(int , int);
};


void Swap::swapp(int n,int m)
{
    a=n;
    b=m;
    int temp=a;
    a=b;
    b=temp;

    cout<<"The numbers after swapping are : "<<a<<" "<<b;
}

int main()
{
    int a, b;
    Swap s;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;   
    s.swapp(a,b);
    
    return 0;
}