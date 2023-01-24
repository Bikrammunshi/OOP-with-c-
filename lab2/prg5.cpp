/* write a programme to find the average mark of five subjects of a student and 
	find the percentage assuming full marks of each subject is 100
*/

#include <iostream>
using namespace std;

int main()
{
    double marks[5]; double total=0;
    cout<<"Enter the marks of the student in 5 subjects "<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>marks[i];
        total=total+marks[i];
    }

    double perc=total/5;

    cout<<"The total marks is "<<total<<endl;
    cout<<"The percemtage obtained by the student is "<<perc<<endl;

    return 0;
}