#include <iostream>
using namespace std;

#include "1_Intro.cpp"

int main()
{
    //statiscal objects
    Student s1;
    Student s2;
    s1.rollno=1;
    s1.age=15;
    s2.rollno=2;
    s2.age=16;
    cout << "S1:" << endl << "rollno:" << s1.rollno << endl;
    cout << "age:" << s1.age << "\n \n";
    cout << "S2:" << endl << "rollno:" << s2.rollno << endl;
    cout << "age:" << s2.age << "\n \n ";

    //dynamic objects
    Student *s3=new Student;
    (*s3).age=20;
    (*s3).rollno=4;
    cout << "S3:" << endl << "rollno:" << (*s3).rollno << endl;
    cout << "age:" << (*s3).age;

}