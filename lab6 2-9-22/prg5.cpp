//WAP to calculate simple interest of given principal amount. 
//(take rate of interet as default argument).

#include <iostream>
using namespace std;
class simple
{
    double p;
    double r;
    int t;
    double s;

    public:
        simple()
        {
            p=0.0;r=0.0;t=0;s=0.0;
        }
        void input();
        double interest(double,int,double);
        
        void display();
};

void simple::input()
{
    cout<<"Enter the principal ";
    cin>>p;
    cout<<"Do you want to enter the rate the default rate is 18% if yes enter y ";
    char c;
    cin>>c;
    if(c=='y')
    {   
        cout<<"Enter the rate ";
        cin>>r;
    }
    
    cout<<"Enter the amount of time ";
    cin>>t;
}

double simple:: interest(double p1,int t1,double r1=18)
{
    
    double a1=p1*r1/100.0*(double)t1;
    return a1;
}

void simple::display()
{
    if(r==0.0)
        s=interest(p,t);
    else
        s=interest(p,t,r);
    cout<<"The simple interest computed is "<<s<<endl;
    cout<<"The total amount is "<<(p+s);
}

int main()
{
    simple si;
    si.input();
    si.display();
    return 0;
}