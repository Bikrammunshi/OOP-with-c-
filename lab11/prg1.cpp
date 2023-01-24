/*Create a class shape. Derive three classes form it; Circle, Square, Triangle. Find are of 
    each shape and display it using virtual function
*/

#include <iostream>
using namespace std;

class Shape
{
    public:
    double area;
    virtual void display()
    {
        cout<<"The area is "<<area<<endl;
    }
};
class Circle:public Shape
{
    public:
    double r;
    void input()
    {
        cout<<"Enter the radius of the circle: ";
        cin>>r;
    }
    void calculate()
    {
        area=3.14*r*r;
    }

};
class Triangle:public Shape
{
    public:
    double a;
    double b;
    void input()
    {
        cout<<"Enter the height and breadth of the triangle:";
        cin>>a>>b;
    }
    void calculate()
    {
        area=0.5*a*b;
    }

};
class Rectangle:public Shape
{
    public:
    double a;
    double b;
    void input() 
    {
        cout<<"Enter the length and breadth of the  rectangle:";
        cin>>a>>b;
    }
    void calculate()
    {
        area=a*b;
    }

};
int main()
{
    Circle c;
    Triangle t;
    Rectangle r;
    Shape *s;
    c.input();
    c.calculate();
    t.input();
    t.calculate();
    r.input();
    r.calculate();
    
    s=&c;
    s->display();
    
    s=&t;
    s->display();
    s=&r;
    s->display();
    return 0;
}