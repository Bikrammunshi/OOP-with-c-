#include <iostream>



class sample
{
int a;
public:
sample(){}
sample(int x)
{
a=x;
void display(){

cout<< “a=“<<a;
}
};
int main()
{

int m=10;
sample s;
s=m; // type conversion
s.display();

}