/*
Entend the :ogram 2 to include a class sports which stores the marks in sports activity,
    Derive the result class from the classes 'test' and 'sports'. Calculate the total marks
    and percentage of a student.
*/
#include <iostream>
using namespace std;
class Student{
     public:
        char name[20];
        int roll_number, age;
        Student(){}
        void getDetails(){
            cout<<"Input roll number: ";
            cin>>roll_number;
            cout<<"Input name: ";
            cin.get();
            cin.getline(name, 20);
            cout<<"Input age: ";
            cin>>age;
        }
        void putDetails(){
            cout<<"Roll Number: "<<roll_number<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
        }
};
class Test: public Student{
     public:
        int s1, s2, s3, s4, s5;
        Test(): Student(){}
        void getmarks(){
            cout<<"Input marks: \n";
            cout<<"Subject 1: ";
            cin>>s1;
            cout<<"Subject 2: ";
            cin>>s2;
            cout<<"Subject 3: ";
            cin>>s3;
            cout<<"Subject 4: ";
            cin>>s4;
            cout<<"Subject 5: ";
            cin>>s5;
        }
        void putmarks(){
            cout<<"Subject 1: "<<s1<<endl;
            cout<<"Subject 2: "<<s2<<endl;
            cout<<"Subject 3: "<<s3<<endl;
            cout<<"Subject 2: "<<s4<<endl;
            cout<<"Subject 3: "<<s5<<endl;
        }
};
class Sports: public Student{
     public:
        int indoor, outdoor;
        Sports(): Student(){}
        void getscore(){
            cout<<"Input sports scores: \n";
            cout<<"Indoor: ";
            cin>>indoor;
            cout<<"Outdoor: ";
            cin>>outdoor;
        }
        void putscore(){
            cout<<"Indoor: "<<indoor<<endl;
            cout<<"Outdoor: "<<outdoor<<endl;
        }
};
class Result: public Sports, public Test{
    public:
    int total;
     
        Result(): Sports(), Test(){
            Test::getDetails();
            getmarks();
            getscore();
            total = indoor + outdoor + s1 + s2 + s3;
        }
        void display(){
            cout<<endl;
            Test::putDetails();
            cout<<"Test Marks: \n"; Test::putmarks();
            cout<<"Sports Scores: \n"; Sports::putscore();
            cout<<"Total: "<<total<<endl;
            cout<<"Percentage: "<<total / 7 <<" % "<<endl;
        }
};
int main(){
    Result result;
    result.display();
    return 0;
}