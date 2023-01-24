/*
Write to overload following operators for class distance, which stores the distance in
    feet and inches.
    a)Binary + to add two objects(d3=d2+d1)
        add an object to an integer where the integer should be added to the inches value(d2=4+d1)
    b)unary
*/

#include <iostream>
using namespace std;

class Distance
{
    public:
    double inches;
    double feet;
    Distance()
    {
        inches=0.0;
        feet=0.0;
    }
    void input()
    {
        cout<<"Enter the distance in feet and inches: ";
        cin>>feet;
        cin>>inches;
    }
    friend Distance operator+ (Distance&,int);
    void display()
    {
        cout<<"The distance after adding the data with 4 is: "<<feet<<" "<<inches<<endl;
    }
};

Distance operator+ (Distance &d1,int x)
{
    Distance d3;
    d3.inches=d1.inches+x;
    d3.feet=d1.feet+x;
    while(d3.inches>12.0)
    {
        d3.inches=d3.inches-12.0;
        d3.feet=d3.feet+1.0;
    }
    return d3;
}

int main()
{
    Distance d1;
    d1.input();
    Distance d3;
    d3= d1+4;
    d3.display();
    return 0;
}
