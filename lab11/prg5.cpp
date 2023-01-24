/*WAP to add two objects of distacne class. Oerload the operator > to compare two objects 
    and return the object with larger time value and display it. Overload the == operator to 
    compare and display whether two given objects contain same distance value.*/

#include <iostream>
using namespace std;
class Dis1
{
    public:
    int km;
    int m;
    int c;

    Dis1(){}
    operator +(Dis1 &d)
    {
        km=km+d.km;
        m=m+d.m;
        c=c+d.c;
        if(c>100)
        {
            m=c/100;
            c=c%100;
        }
        if(m>1000)
        {
            km=m/1000;
            m=m%1000;
        }
        cout<<"The distances after addition \n"<<km<<" km "<<m<<" m "<<c<<"cm";
    }
    
    operator >(Dis1 &d)
    {
        double d1=km*1000+m+c/100;
        double d2=d.km*1000+d.m+d.c/100;
        if(d1>d2)
            cout<<"The first distance is greater than second distance\n";
        else if(d1<d2)
            cout<<"The second distance is greater than first distance\n";
        else 
            cout<<"Both Equal\n";
    }

    operator ==(Dis1 &d)
    {
        double d1=km*1000+m+c/100;
        double d2=d.km*1000+d.m+d.c/100;
        if(d1==d2)
            cout<<"The first distance is equal second distance\n";
        else
            cout<<"The distance are not equal\n";
    }

    void input()
    {
        cout<<"Enter the distance in km m cm format\n";
        cin>>km>>m>>c;
    }
};

int main()
{
    Dis1 obj;
    obj.input();
    Dis1 obj2;
    obj2.input();
    obj>obj2;
    obj==obj2;
    obj+obj2;
    return 0;
}