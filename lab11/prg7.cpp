//WAP to create a class time convert time(hh:mm:ss) into seconds integer value

#include <iostream>
using namespace std;

class Time
{
    public:
    int s;
    int m;
    int h;
    Time(){}
    void input()
    {
        cout<<"Enter the time in hh mm ss format: ";
        cin>>h>>m>>s;
    }

    operator int()
    {
        int sec=s+(m*60)+(h*3600);
        return sec;
    }
};

int main()
{
    Time obj;
    obj.input();
    int y=obj;
    cout<<"Total seconds: "<<y;
    return 0;
}