#include<iostream>
using namespace std;

class Student
{
    private:
    int rollno;
    int age;

    public:
    void display()
    {
        cout << rollno  << " " << age << endl;
    }
    int getage()
    {
        return age;
    }
    void setage(int a,int password)
    {
        if(password == 2491)
        {
            age=a;
        }
   
    }
};