/*
WAP to create a class distance having data members km, meter, cm. User enters the distance in
    centimeters. Conver the distance in to km:mm:cm.
*/

#include <iostream>
using namespace std;

class Dis1
{
    public:
    int km;
    int m;
    int c;

    Dis1(){}
    Dis1(int d)
    {
        m=d/100;
        km=m/1000;
        m=m%1000;
        c=d%100;
    }
    
    void display()
    {
        cout<<km<<"km:"<<m<<"m:"<<c<<"cm";
    }
};

int main()
{
    cout<<"Enter the distance in centimeter";
    int x;
    cin>>x;
    Dis1 obj;
    obj=x;
    obj.display();
    return 0;
}