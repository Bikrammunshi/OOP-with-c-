//WAP to display the message "hello" followed by your name on screen.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;

    cout<<"Enter your name"<<endl;
    getline(cin,name);

    cout<<"Hello "<<name<<endl;
    

    return 0;
}