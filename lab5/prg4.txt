/*Create a class which stores a string and its length as data members. Include all the constructors. Include a member 
    function to join two strings and display the concatenated string.
    */

#include <iostream>
#include <cstring>
using namespace std;

class concat
{
    string s;
    public:
        concat();
        concat(string);
        concat(concat&);

        concat add(concat,concat);
        void display();
};

concat::concat()
{
    s=" ";
}

concat::concat(string str)
{
    s=str;
}

concat::concat(concat &a)
{
    s=a.s;
}

concat concat::add (concat a, concat b)
{
    s=a.s+b.s;
}

void concat::display()
{
    cout<<"The concatenated string is "<<s;
}

int main()
{
    cout<<"Enter string 1 \t";
    string s1;
    cin>>s1;
    concat B(s1);
    cout<<"Enter string 2 \t";
    string s2;
    cin>>s2;
    concat C(s2);
    concat D(C);
    concat E;
    E.add(B,C);
    E.display();
    return 0;

}