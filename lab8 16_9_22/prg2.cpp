/*
Create a class student which stores name, roll number and age of a student. Derive a class
    test from a student class, which stores marks in 5 subjectds. Input and display the details of
    a student.
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
            getDetails();
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
            putDetails();
            cout<<"Subject 1: "<<s1<<endl;
            cout<<"Subject 2: "<<s2<<endl;
            cout<<"Subject 3: "<<s3<<endl;
            cout<<"Subject 2: "<<s4<<endl;
            cout<<"Subject 3: "<<s5<<endl;
        }
};

int main(){
    Test result;
    result.getmarks();
    result.putmarks();
    return 0;
}