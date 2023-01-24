//write a programme to convert given second into its equivalent hour minute and seconds

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int s,m,h;
    cout<<"Enter time in seconds"<<endl;
    cin>>s;

    m=s/60;
    h=m/60;
    s=s%60;
    cout<<"Time is "<<h<<" hours" <<m<<" Minutes "<<" seconds "<<s<<endl;

    return 0;
}
