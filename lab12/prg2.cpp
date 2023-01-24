//WAP to throw and handle 'division by zero' exception
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"Enter a number to divide the previous number by: ";
    cin>>b;
    try
    {
        if(b==0)
            throw false;
        else
            cout<<"After division the remainder is: "<<a/b<<endl;
    }
    catch(...)
    {
        cout<<"Division by zero not possible."<<endl;
    }
    return 0;
}