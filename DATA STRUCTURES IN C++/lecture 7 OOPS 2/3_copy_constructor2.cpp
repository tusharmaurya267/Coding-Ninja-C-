#include <iostream>
#include <cstring>
using namespace std;

#include "3_copy_constructor.cpp"

int main()
{
    int rollno;
    cin >> rollno;
    int n;
    cin >> n;
    char *name=new char[n];
    cin >> name;

    Student s1(rollno,name);
    s1.display();
    
    Student s2(s1);//since copy constructor doesn't creates any copy of the data members,it passes its address variable
    s2.name[3]='x';
    s1.display();
    s2.display();

}