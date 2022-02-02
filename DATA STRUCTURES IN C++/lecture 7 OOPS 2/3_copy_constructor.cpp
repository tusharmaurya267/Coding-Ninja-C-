#include <iostream>
#include <cstring>
using namespace std;

class Student
{
    public:
    int rollno;
    char *name;
    Student(int rollno,char* name)
    {
        (*this).rollno=rollno;
        (*this).name=new char[strlen(name)+1];
        strcpy((*this).name,name);
    }

    Student(const Student &s)
    {
        (*this).rollno=s.rollno;
        (*this).name=new char[strlen(s.name)+1];    //its for deep copy        
        strcpy((*this).name,s.name);                //shallow copy involves simply name store to (*this).name
    }

    void display()
    {
        cout << (*this).name << " " << (*this).rollno << endl;
    }
};