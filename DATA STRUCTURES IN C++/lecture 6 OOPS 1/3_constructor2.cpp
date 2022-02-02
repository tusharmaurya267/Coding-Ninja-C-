#include <iostream>
using namespace std;

#include "3_constructor.cpp"

int main()
{
    //statiscal objects
    Student s1(1);
    Student s2(4);


    s1.display();
    cout << endl;
    s2.display();
    cout << endl;

    //dynamic objects
    Student *s3=new Student(2,15);
    (*s3).display();


}