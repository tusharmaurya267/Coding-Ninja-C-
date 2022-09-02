#include<bits/stdc++.h>
using namespace std;

class vehicle{
    
    public:
    // for RUNTIME method add "virtual keyword"
    // for COMPILE TIME method remove "vritual keyword"
    virtual void print(){
        cout<< "vehicle" << endl;
    }


    // when you will add this you cannot create its object in the main function .
    // ERROR will be displayed 
    // virtual void owner()=0;
};