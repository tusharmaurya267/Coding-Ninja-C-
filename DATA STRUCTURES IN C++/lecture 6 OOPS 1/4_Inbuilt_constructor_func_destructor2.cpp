#include <iostream>
using namespace std;

#include "4_Inbuilt_constructor_func_destructor.cpp"

int main()
{
    // REMEMBER:ONLY ONE CONSTRUCTOR CAN BE CALLED FOR AN OBJECT IN LIFE TIME


    // COPY CONSTRUCTOR
    // it can be called while creating object to copy values

    cout << "COPY CONSTRUCTOR" << endl;
    cout << "s1:" << endl;
    Student s1(92);
    s1.display();

    cout << "s2:" << endl;
    Student s2(s1);
    s2.display();


    cout << "s3:" << endl;
    Student *s3=new Student(s1);
    (*s3).display();


    // COPY ASSIGNMENT OPERATOR(=)
    // this is done after the creation of the object to copy values
    cout <<" COPY ASSIGNMENT OPERATOR " << endl;
    cout << "s4:" << endl;
    Student s4(80);
    s4.display();
    
    
    cout << "s5:" << endl;
    Student s5;
    s5=s4;
    s5.display();
    

    cout << "s6:" << endl;
    Student *s6=new Student;
    *s6=s4;
    (*s6).display();


    //MIX COPY ASSIGNMENT OPERATOR AND COPY CONSTRUCTOR

    cout << "MIX COPY ASSIGNMENT OPERATOR AND COPY CONSTRUCTOR" << endl;
    cout << "s7:" << endl;
    Student s7=s4;
    s7.display();


    // to call destructor for the dynamic allocated memory first delete it from heap memory

    delete s3;
    delete s6;

}