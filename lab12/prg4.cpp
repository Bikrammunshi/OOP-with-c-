//WAP to demonstrate multiple catch and catch all.
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
            throw 0;
        else
        {
            cout<<"The element at this position is "<<arr[b]<<endl;
            int a;
            cout<<"Enter a number to divide this element by :";
            cin>>a;
            if(a==0)
            
                throw 'b';
            else
                    cout<<"The element after division "<<arr[b]/a;
            
        }

    }
    catch(int k)
    {
        cout<<"Array out of bounds";
    }
    
    catch(char c)
    {
        cout<<"Cannot divide by 0";
    }
    return 0;
}