#include <iostream>
using namespace std;

#include "2_get_set.cpp"

int main()
{
    //statiscal objects
    Student s1;
    Student s2;
    s2.setage(20,2491);
    int k=s2.getage();
    s1.setage(25,2491);
    s1.display();
    cout << endl;
    s2.display();
    cout << endl;

    //dynamic objects
    Student *s3=new Student;
    (*s3).setage(15,2491);
    (*s3).display();


}