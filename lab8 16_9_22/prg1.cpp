/*
WAP to demonstrate all types of inheritance.
*/

#include <iostream>
using namespace std;

class demon                      //parent class
{
    
    public:
        int a=10;
        void display()
        {   cout<<"Parent class value "<<a<<endl;}
};

class single : virtual  public demon     //child class with single inheritance
{
    
    public:
        void display()
        {  
            cout<<"Single inheritance   "<<a<<endl;   
            }
};

class multilvl : virtual public single    //child class with multilevel inheritance
{
    
    public:
        void display()
        {   
            cout<<"Multilevel inheritance "<<a<<endl; 
        }
};

class multiple : virtual public demon,virtual public single,virtual public multilvl //child with multiple inheritance
{
    
    public:
        void display()
        {
            cout<<"Child class value of a "<<a<<endl;
            cout<<"This shows multiple,hierarchical and hybrid inheritance"<<endl;
        }
};

int main()
{
    demon obj;
    single ob1;
    multilvl ob2;
    multiple ob3;
    obj.display();
    ob1.display();
    ob2.display();
    ob3.display();
    return 0;
}