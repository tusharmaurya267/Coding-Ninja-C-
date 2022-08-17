#include<iostream>
#include<climits>
using namespace std;

#include "6_static_members.cpp"

int main()
{
    Student s1(5,20);
    s1.age=21;
    cout << "s1:" << endl;
    cout << s1.rollno << " " << s1.age << endl;
    cout << "totalstudents using s1 as object calling:" << endl;
    cout << s1.totalstudents << endl;

    s1.totalstudents = 20; //can be accessed using any object although proper way is to access using class name

    Student s2(6,24);

    cout << "totalstudents using s2 as object calling:" << endl;

    cout << s2.totalstudents << endl;

    cout << "totalstudents using class name 'Student' as object calling:" << endl;

    cout << Student :: totalstudents << endl;  //proper way of accessing static members is using the class 

    Student :: setTotalAge();

    cout << "totalage :" << endl;

    cout << Student :: getTotalAge() << endl;
}