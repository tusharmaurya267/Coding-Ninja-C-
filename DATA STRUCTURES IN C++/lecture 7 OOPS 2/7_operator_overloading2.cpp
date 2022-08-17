

#include<iostream>
#include<climits>
using namespace std;

#include "7_operator_overloading.cpp"

int main()
{
    Fraction f1(2,10);
    Fraction f2(3,10);
    Fraction f3(0,0);
    Fraction f4(0,0);


    f3=f1.add(f2);
    cout << "after normal addition:" << endl;
    f1.print();
    f2.print();
    f3.print();


    f3=f1+f2;
    cout << "after overloading addition:" << endl;
    f1.print();
    f2.print();
    f3.print();


    f3=f1.multiply(f2);
    cout << "after normal multilication:" << endl;
    f1.print();
    f2.print();
    f3.print();


    f3=f1*f2;
    cout << "after overloading multilication:" << endl;
    f1.print();
    f2.print();
    f3.print();


    cout << "to find that the two fractions are same or not:" << endl;
    if(f1==f1)
    {
        cout << "Equal" << endl;
    }
    else
    {
        cout << "Not Equal" << endl;
    }

    cout << "operator overloading in pre decrement operator with return type as void:" << endl;
    f4=f1;
    --f1;
    f1.print();
    f2.print();
    f3.print();    


    cout << "operator overloading in pre increment operator with return type as Fraction object:" << endl;
    f1=f4;

    f3=++(++f1);
    f3.print();
    f1.print();

    cout << "operator overloading in post increment operator with return type as Fraction object:" << endl;

    f1=f4;

    f3=f1++;
    f3.print();
    f1.print();

    cout << "operator overloading in '+=' with return type as Fraction object:" << endl;

    f1=f4;
    (f1+=f2)+=f2;
    f1.print();
    f2.print();

    
}