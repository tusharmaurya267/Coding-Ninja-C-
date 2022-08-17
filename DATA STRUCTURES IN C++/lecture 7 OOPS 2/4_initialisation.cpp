#include<iostream>
#include<cstring>
using namespace std;

class Student
{
    private:
    // int age;
    const int rollno;
    char *name;
    int &x;

    public:
    Student(int rollno,char* name ): rollno(rollno) , x(rollno)
    {
        
        (*this).name=new char[strlen(name)+1];
        strcpy((*this).name,name);
    }

    void display()
    {
        cout << "roll no:  " << (*this).rollno << endl << "name:  " << (*this).name << endl;
    }
};