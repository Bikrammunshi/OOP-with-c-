/*Write a program to check whether entered number is a prime or not. If the entered number is 
    not prime then it throws an user defined exception.*/

#include <iostream>
#include <exception>
using namespace std;

class prime:public exception
{
    public:
    const char* what()
    {
        return "Not a prime number";
    }
};

int main()
{
    cout<<"Enter a number ";
    int n;
    cin>>n;
    try
    {
        int count=0;
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
                count++;
        }
        if(count>0)
        {
                prime p;
                 throw p; 
        }
    }
    catch(prime p)
    {
        cout<<p.what();
    }
    return 0;
}