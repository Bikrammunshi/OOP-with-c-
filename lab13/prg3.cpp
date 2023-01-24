/*
Write a program to enter the numbers in to an array . If the entered number to an odd, then
    it throws an user defined exception
*/
#include <iostream>
#include <exception>
using namespace std;

class odd:public exception
{
    public:
    const char* what()
    {
        return "Odd number not allowed.";
    }
};

int main()
{
    cout<<"Enter the size of array: ";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    try
    {
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]%2!=0)
            {
                 odd o;
                 throw o; 
            }
        }
    }
    catch(odd o)
    {
        cout<<o.what();
    }
};