/*Create a class which stores times in hh mm format. Include all the constructors. The parameterized constructor should
    initialize the minute value to zero, if it is not provided.*/

#include <iostream>
using namespace std;

class time
{
    public:
    int hh;
    int mm;
        time()
        {
            cout<<"DEFAULT CONSTRUCTOR"<<endl;
        }

        time(int h,int m=0)
        {
            hh=h;
            mm=m;
        }

        time(time &a)
        {
            hh=a.hh;
            mm=a.mm;
        }

        void display()
        {
            cout<<hh<<" hours "<<mm<<" minutres "<<endl;
        }
};

int main()
{
    int a,b;
    cout<<"Enter the time in hour and minutes ";
    cin>>a>>b;
    time B(a,b);
    cout<<"Using parameterized constructor the time in hours and minutes is ";
    B.display();
    time C(B);
    cout<<"Using copy constructor the time in hours and minutes is ";
    C.display();
    return 0;
}