#include <iostream>
using namespace std;

#include "8_Dynamic_array.cpp"

int main()
{
    Dynamic d1;

    d1.add_element(10);
    d1.add_element(20);
    d1.add_element(30);
    d1.add_element(40);
    d1.add_element(50);
    d1.add_element(60);
    d1.add_element(70);

    d1.print();

    Dynamic d2(d1); //copy constructor

    cout << "After calling copy constructor:" << endl;
    d1.random_add(100,0);
    d1.print();
    d2.print();



    cout << "After calling = assignment operator" << endl;

    Dynamic d3;

    d3=d2;
    d2.random_add(96,3);
    d1.print();
    d2.print();
    d3.print();

}