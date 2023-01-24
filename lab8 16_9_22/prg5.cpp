/*
Create a class shape . Derive three classes form it: Circle, Triangle and Rectangle . 
    Include the relevant data members and functions in all the clsses. Find the area od each shape  
    and displat it.*/
#include<iostream>
#include<conio.h>
using namespace std;
class shape
{
        public:
	    double area=0;  
};
class circle: public shape
{
   float r; 
   public:
    void Area()
   {
       cout<<"\nEnter radius : ";
       cin>>r;
       area=(3.146*r*r);
       cout<<"\nArea of circle : "<<area;
   }
};
class rectangle: public shape
{
	int l,b; 
	public:
   void Area()
   {
       cout<<"\nEnter length : ";
       cin>>l;
       cout<<"\nEnter breadth : ";
       cin>>b;
       area=l*b;
       cout<<"\nArea of rectangle : "<<area;
   }
};
class triangle: public shape
{

	int h,b;
	public:
       void Area()
       {
   	    cout<<"\nEnter height : ";
            cin>>h;
            cout<<"\nEnter breadth : ";
            cin>>b;
            area=0.5*h*b;
            cout<<"\nArea of triangle : "<<area;
       }
};
int main()
{
   circle c; 
   c.Area();
   rectangle r;
   r.Area();
   triangle t; 
   t.Area();
   return(0);
}