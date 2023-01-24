//Write a programme to find area of a circle , rectangle, triangle using function overloading.

#include <iostream>
#include <cmath>
using namespace std;

class Overloading
{
    double a;
    double s;

    public:
        void Area(double);
        void Area(double,double);
        void Area(double,double,double);

};

void Overloading::Area(double r)
{
    a=3.14*r*r;
    cout<<"The area of the circle is "<<a<<endl;
}

void Overloading::Area(double p,double q)
{
    a=p*q;
    cout<<"The area of the rectangle is "<<a<<endl;
}

void Overloading::Area(double p,double q,double r)
{
    s=(p+q+r)/2;
    a=sqrt(s*(s-p)*(s-q)*(s-r));
    cout<<"The area of the triangle is "<<a<<endl;
}

int main()
{
    Overloading obj;
    double r,p,q;
    cout<<"Enter the radius of the circle ";
    cin>>r;
    obj.Area(r);

    cout<<"Enter the length and breadth of the rectangle ";
    cin>>p>>q;
    obj.Area(p,q);

    cout<<"Enter the sides  of the triangle ";
    cin>>p>>q>>r;
    obj.Area(p,q,r);

    return 0;
}