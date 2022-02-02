#include<iostream>
using namespace std;
#include "6_complex_number.cpp"


int main()
{
    
    int imaginary1,real1;
    int imaginary2,real2;

    cin >> real1 >> imaginary1 ;
    Complex c1(real1,imaginary1);

    cin >> real2 >> imaginary2 ;
    Complex c2(real2,imaginary2);

    int choice;
    cin >>choice;

    if(choice ==1)
    {
        c1.plus(c2);
        c1.print();
    }

    if(choice ==2)
    {
        c1.multiply(c2);
        c1.print();
    }

}