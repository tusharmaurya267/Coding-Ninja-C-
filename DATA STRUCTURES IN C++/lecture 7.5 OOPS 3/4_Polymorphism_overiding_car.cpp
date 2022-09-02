#include<bits/stdc++.h>
using namespace std;

#include "4_Polymorphism_overiding_vehicle.cpp"
class car : public vehicle{
    
    public:
    void print(){
        cout<< "car" << endl;
    }

    void owner(){
        cout << "TUSHAR" << endl;
    }
};