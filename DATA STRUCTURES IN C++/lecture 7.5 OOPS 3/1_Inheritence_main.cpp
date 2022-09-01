#include<bits/stdc++.h>
using namespace std;

#include "1_Inheritence_car.cpp"
// #include "1_Inheritence_vehicle.cpp"

int main(){
    vehicle v(2);
    v.color="blue";
    // v.no_tyres=4;       //protected
    // v.max_speed=100;    //private
    string owner="TUSHAR";
    string address="lucknow";
    int no_tyres=4;
    car c1(owner,address,no_tyres);

    c1.no_gears=6;
    // c1.owner="tushar";       //protected
    // c1.address="lucknow";    //private


    c1.color="red";

    c1.print();
}