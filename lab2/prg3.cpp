//write a programe to convert temperature from centrigrade to farenheit scale 

#include <iostream>
using namespace std;

int main()
{
    double temp_c;

    cout<<"Enter the temperature in celcius scale: "<<endl;
    cin>>temp_c;

    double temp_f=(temp_c*1.8) + 32.0;
    cout<<"The temperature in farenheit scale is: "<<temp_f<<endl;
    return 0;
}