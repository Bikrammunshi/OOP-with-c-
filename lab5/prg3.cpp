/*Create a class with an integer data member. Include functions for input and output in class. Count the number
	 of times each function is called and
	display it.
    */

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
    dat d;
    cout<<"Enter the number of data you want to enter ";
    int n;
    cin>>n;

    int c1=0,c2=0;
    while(n>0)
    {
        d.input();
        c1++;
        d.display();
        c2++;
        n--;
    }

    cout<<"The number of times input function is entered is "<<c1<<endl;
    cout<<"The number of times output function is entered is"<<c2<<endl;

    return 0;

}