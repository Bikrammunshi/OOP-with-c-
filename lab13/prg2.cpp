/* Write a program in c++ to create an exception. Throw the exception when user entered mark is less
    than zerio and greater than 100*/

#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    double marks;
    cout<<"Enter the marks of the user : ";
    cin>>marks;
    try
    {
        if(marks<0.0)
            throw 0;
        else if(marks>100.0)
            throw 0;
        else
            cout<<"The marks is : "<<marks;
    }
    catch(...)
    {
        cout<<"The marks must be iin between 0 and 100";
    }
    return 0;
}