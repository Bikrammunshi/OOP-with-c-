/*write a programme to perform addition , substraction and multiplication of two
	integers and display the result
    */

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter two numbers"<<endl;
    cin>>a;
    cin>>b;

    int sum=a+b;
    int diff=abs(a-b);
    int pro=a*b;

    cout<<"The summation of two numbers is : "<<sum<<endl;
    cout<<"The difference of two numbers is : "<<diff<<endl;
    cout<<"The product of two numbers is : "<<pro<<endl;

    return 0;
}