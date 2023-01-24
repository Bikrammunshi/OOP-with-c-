//WAP to sort the numbers in ascending order using function template
#include <iostream>
using namespace std;

template <class A,class B>


void sort(A *arr,B n)
{
    A *sorted=(A*)malloc(n*sizeof(A));
    for(int j=0;j<n;j++){
        int leftend=n/2;
    int rightpos=n/2+1;


    int leftpos=0;
    int i=0;
    while(leftpos<=leftend && rightpos<n)
    {
        if(arr[leftpos]<=arr[rightpos])
            sorted[i++]=arr[leftpos++];
        else
            sorted[i++]=arr[rightpos++];
    }
    while(leftpos<=leftend)
        sorted[i++]=arr[leftpos++];
    while(rightpos<n)
        sorted[i++]=arr[rightpos++];  
        
    for(int k=0;k<n;k++)
    {
        arr[k]=sorted[k];
    }
    }
    for(int i=0;i<n;i++)
    {
        cout<<sorted[i]<<" ";
    }
    
}

int main()
{
    cout<<"Enter the number of elements in the array: ";
    int n;
    cin>>n;
    cout<<"Enter the elements of the array: ";
    int *arr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The original array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;
    cout<<"The sorted array: "<<endl;
    sort(arr,n);
    
    
    return 0;
}