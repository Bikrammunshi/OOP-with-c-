/*Write a program to print two diffeeet data using function template*/

#include<iostream>
using namespace std;
template <class A,class B>
void display(A a,B b)
{
    cout<<"a."<<a;
    cout<<" b."<<b;
}
int main()
{
    display(1,2.0);
    display(3.1,5);
    return 0;
}