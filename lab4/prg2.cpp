/*
Create a class which stores name, author, and price of a book. Store information for n number 
of books display information of all the books in a given prive range using function.
*/

#include <iostream>
#include <cstring>
using namespace std;

class Book
{
    
    string name;
    string author;
    

    public:
        float price;
        void input();
        void display();

};

void Book::input()
{ 
        cout<<"Name : ";
        cin.ignore(1,'\n');
        getline(cin,name);
        
        cout<<"Author  : ";
        cin.ignore(1,'\n');
        getline(cin,author);
        cout<<"Price : ";
        cin>>price;
    
}

void Book::display()
{
    
    
        cout<<"Details of book "<<endl;
        cout<<"Name :"<<name<<endl;
        cout<<"Author  :"<<author<<endl;
        cout<<"Price :"<<price<<endl;
    
    
}

int main()
{
    int n;
    cout<<"Enter the number of books"<<endl;
    cin>>n;

    Book b[n];
    cout<<"Enter the book details"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Book "<<i+1<<endl;
        b[i].input();
    }
    
    
    double p1,p2;
    cout<<"Enter the price range: ";
    cin>>p1>>p2;
    int c=0;
    cout<<"The book details are: "<<endl;
    for(int i=0;i<n;i++)
    {
        if(b[i].price>p1 && b[i].price<p2)
    {
        b[i].display();
    }
    }

    if(c==0)
     cout<<"No books";
    return 0;
}