/*	WAP which displays a given character, n number of times, using a function.
     When the n value is not provided, it should print the given character 80 times. 
     When both the character and n value is not provided, it should print '*'
	character 80 times.
			-using function overloading.
            using default arguments;
*/

#include <iostream>
using namespace std;

class character
{
     public:
          char c;
          int n;
          void input();
          void display(char,int);
};

void character::input()
{
     int i;
     cout<<"Enter 1 if you want to enter a character else enter 0: ";
     cin>>i;
     if(i==1)
     {
          cout<<"Enter a character ";
          cin>>c;
     }
     else 
          c=' ';
     cout<<"Enter 1 if you want to enter the number of times you want to print a character else enter 0: ";
     cin>>i;
     if(i==1)
     {
          cout<<"Enter the number of times you want to print this character ";
          cin>>n;
     }
     else 
          n=0;
}

void character::display(char d='*',int m=80)
{
          
     
     for(int i=1;i<=m;i++)
          cout<<d<<' ';
     
}


int main()
{
     character ch;
     ch.input(); 
     
     if(ch.c==' ' && ch.n==0)
          ch.display();
     else if(ch.n==0)
          ch.display(ch.c);
     else if(ch.c==' ')
          ch.display(ch.n);
     else 
          ch.display(ch.c,ch.n);

          return 0;
}