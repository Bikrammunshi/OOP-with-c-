//WAP to read the contents of file 'CSE-40'
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string n,n2,n3;
    ifstream inp;
    inp.open("CSE40",ios::in);
    while(inp>>n)
        cout<<n<<" ";
    
    return 0;
}