/*WAP that uses dynamic constructor to allocate memory to an array of integer. Count the 
    number of odd and even elements in an array.*/

#include <iostream>
using namespace std;

class array
{
    int *arr;

    public:
        array(int n)
        {
            arr = new int[n];
        }
        void input(int );
        void display(int );
};
void array :: input(int n)
{
    cout<<"Enter the elements of the array "<<endl;
    int i=0;
    while(i<n)
    {
        cin>>arr[i];
        i++;
    }
}
void array::display(int n)
{
    
    int i=0;
        
     for (i = 0; i < n-1; i++)
        {
            int min_idx = i;
            for (int j = i+1; j < n; j++)
                if (arr[j] < arr[min_idx])
                    min_idx = j;
  
            int temp = arr[min_idx];
            arr[min_idx] = arr[i];
            arr[i] = temp;
        }

       for ( i = 0; i < n-1; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if (arr[j]%2==0 && arr[i]%2!=0)
                {int temp = arr[j];
                 arr[j] = arr[i];
                arr[i] = temp;
                break;
                }    
            }
  
    }
     i=0;
    cout<<"First the even numbers are printed then the odd numbers"<<endl;int ce=0,co=0;
    while(i<n)
    {
        if(arr[i]%2==0)
        ce++;
        else
        co++;
        cout<<arr[i]<<" ";
        i++;
    }
    cout<<"Number of even numbers are "<<ce<<endl;
    cout<<"Number of odd numbers are "<<co<<endl;
}


int main()
{
    int n;
    cout<<"Enter the size of the array ";
    cin>>n;
    array obj(n);
    obj.input(n);
    obj.display(n);
    return 0;
}