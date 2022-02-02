#include<iostream>
#include<climits>
using namespace std;

#include "5_fraction.cpp"

int main()
{

    Fraction f1(3,15);
    Fraction f2(4,20);

    cout << " simplified fraction:" << endl;
    f1.add(f2);

    f1.print();
    cout << endl;
    f2.print();

}