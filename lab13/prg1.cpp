/*Write a program in c++ to create an exception. If the user entered character is a blank then
    throw the Blank_character_exception else cornvert the user entered uppercase character 
    to a lowercase character.
*/

#include<iostream>
#include<cstring>
#include <exception>
using namespace std;

class Blank_character:public exception
{
    public:
    const char* what()
    {
        return "Blank character exception";
    }
};
int main()
{
    cout<<"Enter a character: ";
    string c;
    getline(cin,c);
    try
    {
        if(c==" " )
        {
           Blank_character bc;
           throw bc; 
        }
        else
        {
            c[0]=(char)tolower(c[0]);
            cout<<"The lowercase of the character entered is "<<c[0];
        }
    }
    catch(Blank_character bc)
    {
        cout<<bc.what();
    }
    return 0;
}