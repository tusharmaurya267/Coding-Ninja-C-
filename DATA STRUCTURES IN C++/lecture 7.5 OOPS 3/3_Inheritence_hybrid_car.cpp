#include<bits/stdc++.h>
using namespace std;

#include "3_Inheritence_hybrid_vehicle.cpp"

class car : public Vehicle{

    public:
    void print(){
        cout << "car" << endl;
    }
};