//WAP to demonstrate the order of execution of constructor and destructor of a class.

#include <iostream>
using namespace std;

int count=0;

class demon
{
    public:
        demon()
        {   count++;
            cout<<"Constructor called : object number "<<count<<endl;
        }
        ~demon()
        {
            cout<<"Destructor called : object number "<<count<<endl;
            count--;
        }
};

int main()
{
    cout<<"Inside the main block"<<endl;
    cout<<"Creating the first object T1"<<endl;

    demon T1;

    cout<<"Creating two more objects T2,T3"<<endl;
    demon T2,T3;

    return 0;
}