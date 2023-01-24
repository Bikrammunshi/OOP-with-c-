/*
Create two classe which store distance in feet, inches and meter, centimeter format respectively. 
Write a function which compares distance in object of these clases and display the larger one.
*/

#include <iostream>
using namespace std;

class D2;
class D1
{
    double feet;
    double inches;

    public:
        void input();
        friend void compare(D1,D2);
};

class D2
{
    double meter;
    double centi;

    public:
        void input();
        friend void compare(D1,D2);

};

void D1::input()
{
    cout<<"Enter the distance 1 in feet and inches respectively: ";
    cin>>feet>>inches;
    inches=feet*12 + inches;
}

void D2::input()
{
    cout<<"Enter the distance 2 in meter and centimeter: ";
    cin>>meter>>centi;
    centi=meter*100 + centi;
}

void compare(D1 x, D2 y)
{

    int i=y.centi*0.393;

    if(y.centi>x.inches)
        printf("Distance 2 is greater \n");
    else
        printf("Distance 1 is greater \n");
}

int main()
{
    D1 x;
    D2 y;
    x.input();
    y.input();
    compare(x,y);
    return 0;
}