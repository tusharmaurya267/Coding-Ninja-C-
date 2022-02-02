#include<iostream>
using namespace std;
class Student
{
    private:
    static int totalage;

    public:

    int rollno;
    int age;

    static int totalstudents;

    Student(int rollno,int age)
    {
        (*this).rollno=rollno;
        (*this).age=age;
        totalstudents++;
        totalage=totalage+(*this).age;
    }

    static void setTotalAge()
    {
        totalage=totalage+10;
    }

    static int getTotalAge()
    {
        return totalage;
    }
};

int Student :: totalage=0;

int Student :: totalstudents = 1;