#include<bits/stdc++.h>
using namespace std;
#include "1_Inheritence_vehicle.cpp"

class car : public vehicle{

    public:
    int no_gears;

    protected:
    string owner;
    
    private:
    string address;

    public:


    // Call the parameterized constructor as below.
    // Default constructor calls itself.
    car(string owner,string address,int no_tyres):vehicle(no_tyres){  
        this->owner=owner;
        this->address=address;      
        cout << "Constructor called" << endl;
    }
    ~car(){
        cout << "Destructor called" << endl;
    }

    void print(){
        // car's property
        cout <<"owner:  "<< owner << endl;
        cout << "address:   "<< address << endl;
        cout << "no_gears:  "<< no_gears << endl;

        // vehicle's property
        cout << "no_tyres:  "<< no_tyres << endl;       //protected member can be accessed by inherited class
        // cout << max_speed << endl;   //private member cannot accessed outside class
        cout << "color:  " << color << endl;
        
        
    }
    
};