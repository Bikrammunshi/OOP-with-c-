/*Create a class which stores x and y coordinates of a point . Write a function to find
    distance between two point, initialise the objects using parameterized constructor and
    copy constructor and constructor with default arguments.*/

#include <iostream>
#include <cmath>
using namespace std;

class point
{
    int x;
    int y;
    int a;
    int b;

    public:
        point(int x1,int y1,int x2=0,int y2=0)
        {
            x=x1;a=x2;y=y1;b=y2;
        }
        point(point &);
        void calculate();
};



point::point(point &A)
{
    x=A.x;y=A.y;a=A.a;b=A.b;
}

void point:: calculate()
{
    double d=sqrt(pow((b-y),2)+pow((a-x),2));
    cout<<"The distance between the two points is "<<d;
}

int main()
{
    int p,q,r,s;
    cout<<"Enter the coordinates of the first point  ";
    cin>>p>>q;
    char c;
    cout<<"Do you want to enter the coordinates of the second point ";
    cin>>c;
    
    if(c=='y')
    {
        cout<<"Enter the coordinates of the second point    ";
        cin>>r>>s;
        point obj(p,q,r,s);
        point obj3(obj);
        obj3.calculate();
    }
    else
    {
        point obj2(p,q);
        obj2.calculate();
        }
    return 0;
}