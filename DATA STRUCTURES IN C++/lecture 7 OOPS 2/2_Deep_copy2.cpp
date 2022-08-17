#include<iostream>
using namespace std;

#include "2_Deep_copy.cpp"

int main()
{
    
    int n;
    cin >> n;
    char *name=new char[n];
    cin >> name;

    Student s1(20,name);
    s1.display();

    name[3]='e';
    Student s2(24,name);

    s2.display();
    s1.display();


}