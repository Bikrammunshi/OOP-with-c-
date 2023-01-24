/*Write a class template with single argument*/
#include <iostream>
using namespace std;
template <class T>
class data
{
    public:
    data (T c)
    {
        cout<<sizeof(c);
    }
};
int main()
{
    data <char> h('A');
    data <int> i(100);
    data <float> lc(3.15);
    return 0;
}