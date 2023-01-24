//WAP to create a file named as 'CSE-40' and add the contents into into
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream out("CSE40");
    string n1="Welcome to CSE-40";
    string n2="The last section of all of CSE sections in KIIT";
    string n3="Now get out thank you";
    out<<n1<<"\n";
    out<<n2<<"\n";
    out<<n3<<"\n";
    return 0;
}