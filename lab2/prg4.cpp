//write a programme to calculate area of triangle whose three sides are given 

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double a,b,c,area;
    cout<<"Enter the three sides of a triangle"<<endl;
    cin>>a>>b>>c;

    double s= (a+b+c)/2.0;
    area=sqrt(s*(s-a)*(s-b)*(s-c));

    cout<<"The area of the triangle is "<<area<<endl;

    return 0;
}