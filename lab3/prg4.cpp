/*Create a class Complex which stores real and imaginary part of a complex number. 
Input 10 complex numbers and display them. 
*/

#include <iostream>
using namespace std;

 class Complex
 {
    private:
        double rl[10];
        double img[10];

    public:
        void input();
        void display();
 };

 void Complex::input()
 {
    for(int i=0;i<10;i++)
    {
        cout<<"Enter the complex number  "<<i+1<<endl;
        cin>>rl[i]>>img[i];
    }
 }

 void Complex::display()
 {
    cout<<"The complex numbers are"<<endl;
    
    for(int i=0;i<10;i++)
    {
        cout<<"Number  "<<i+1<<endl;
        cout<<" "<<rl[i]<<"+"<<img[i]<<"i"<<endl;
    }
 }

 int main()
 {
    Complex c;
    c.input();
    c.display();
    return 0;
 }