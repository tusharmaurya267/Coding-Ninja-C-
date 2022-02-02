#include<iostream>
using namespace std;

class Student
{
    public:

    int age;
    char *name;

    Student(int age,char* name)
    {
        (*this).age = age;
        (*this).name = name;
    }

    void display()
    {
        cout << (*this).name << " " << (*this).age << endl;
    }
};