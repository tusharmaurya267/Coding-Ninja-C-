#include<iostream>
#include<climits>
using namespace std;

#include "5_constant_functions.cpp"

int main()
{
    Fraction f1(3,15);
    Fraction f2(4,20);
    Fraction const f3;
    Fraction const f4(f1);
    cout << "f3 function is constant object calling constant function:" << endl;
    cout << "F3:" << endl;
    cout << f3.getnumerator() << " " << f3.getdenomintor() << endl;



    cout << "f4 function is constant object which copies values from 'function f1' before calling constant function:" << endl;
    cout << "F4:" << endl;
    cout << f4.getnumerator() << " " << f4.getdenomintor() << endl;

}