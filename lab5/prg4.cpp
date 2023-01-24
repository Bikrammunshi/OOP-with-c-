//WAP to count the number of objects in a class.

#include <iostream>
using namespace std;

class dat
{
    int n;
    

    public:
    void input();
    void display();

};

void dat::input()
{
    cout<<"Enter the integere data: ";
    cin>>n;
}

void dat::display()
{
    cout<<"The data is "<<n<<endl;
}

int main()
{
   
    cout<<"Enter the number of data you want to enter ";
    int n;
    cin>>n;

    int c=0;
    while(n>0)
    {
        dat d;
        c++;
        d.input();
        d.display();
        n--;
    }

    cout<<"The number of times object is created is "<<c<<endl;

    return 0;

}