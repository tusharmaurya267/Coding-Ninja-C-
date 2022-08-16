#include <iostream>
using namespace std;

class Student
{
    public:
    int rollno;
    int age;




    Student()
    {
        cout << " default Constructor called" << endl;
    }

    Student(int a)
    {
        age=a;
        cout << "Constructor called" << endl;
    }
    void display()
    {
        cout << rollno  << " " << age << endl;
    }

    ~Student(){
        cout << "Destructor called:" << endl;
    }

};