#include<bits/stdc++.h>
using namespace std;

#include "4_Polymorphism_overiding_car.cpp"
int main(){
    vehicle v;
    v.print();
    car c;
    c.print();  //this is method overriding car print function overriding vehicle print function


    vehicle *v1=new vehicle;

    vehicle *v2;
    // v2 = &v;

// these type of assignment is valid for the functions which exists atlest in parent class or vehicle here it is
    v2=&c;
    
    v1->print();    // prints normally the print function of vehicle

// FOR COMPILE TIME:
// prints the vehicle print function because it is only pointing to car  
// but at compile time it will print the vehicle function

// FOR RUN TIME(after adding keyword "virtual" to the function):
// prints the car print function at run time
// if car does not contain the print function, vehicle print function is printed

    v2->print();    

    // v2->owner();
}