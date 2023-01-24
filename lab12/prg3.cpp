//WAP to throw and handle array out of bounds exception.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the position of the array you want to display the element in the array "<<endl;
    int b;
    cin>>b;
    try
    {
        if(b>n-1)
            throw false;
        else
            cout<<"The element at this position is "<<arr[b];
    }
    catch(...)
    {
        cout<<"Array out of bounds";
    }
    return 0;
}