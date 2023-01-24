//Write to convert given paisa into its equivalent rupees and paisa.


#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int p;
    int r;
    cout<<"Enter paisa"<<endl;
    cin>>p;

    r=p/100;
    p=p % 100;

    cout<<"Rupees "<<r<<" "<<" Paisa "<< p<<endl;

    return 0;
}
