//WAP to demonstrate use of pure virtual function and abstract base class.


#include <iostream>
using namespace std;

class base
{
    int x;
    public:
        virtual void show()=0;
        int getX()
        {
            return x;
        }
};

int main(void)
{
    base C;
    return 0;
}
