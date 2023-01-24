/*
Create a class distance which stores a distane in feet and inches. Input 2 distance values 
in objects, add them, store the resultant distance in an object and display it.
Store the resultant distance in the calling object: C3.add(C1,C2)
*/

#include <iostream>
using namespace std;

class add
{
    double feet;
    double inch;

    public:
        void input();
        void calc(add ,add );
        void display();
};

void add::input()
{
    cout<<"Enter the distance in feet and inches respectively : ";
    cin>>feet>>inch;
}

void add::calc(add a1,add a2)
{
    feet=a1.feet+a2.feet;
    inch = a1.inch + a2.inch;
    
    while(inch>11)
    {
        inch=inch-12;
        feet = feet+1;
    }
}

void add::display()
{
    cout<<"The resultant summation of distance is "<<feet<<" feet and "<<inch<<" inches"<<endl;
}

int main()
{
    add c1,c2,c3;
    c1.input();
    c2.input();
    c3.calc(c1,c2);
    c3.display();

    return 0;
}