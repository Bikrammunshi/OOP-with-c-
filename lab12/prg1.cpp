/*WAP to create a class distance havind data in km, meter and cm
    User enters the distance in centimeters. Convert the distance into*/

#include <iostream>
using namespace std;
class Dist{
    public:
    int c;
    void input()
    {
        cout<<"Enter the distance in cm: ";
        cin>>c;
    }
};
class Dis
{
    public:
    int km;
    int m;
    int cm;
    Dis(){}
    void operator= (Dist d)
    {
        cm=d.c;
        m=cm/100;
        km=m/1000;
        m=m%1000;
        cm=cm%100;
    }
    void display()
    {
        cout<<"The distance in km:m:cm format is "<<km<<" km: "<<m<<" m: "<<cm<<" cm"<<endl;
    }
};



int main()
{
    Dis d1;
    Dist d2;
    d2.input();
    d1=d2;
    d1.display();
    return 0;
}