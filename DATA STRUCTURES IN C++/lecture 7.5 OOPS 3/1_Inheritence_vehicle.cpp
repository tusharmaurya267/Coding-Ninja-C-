#include<bits/stdc++.h>
using namespace std;

class vehicle{
private:
int max_speed;

protected:
int no_tyres;

public:
string color;

public:
vehicle(int no_tyres){
    cout << "Vehicle: Constructor called " << endl;
    this->no_tyres=no_tyres;
}
~vehicle(){
    cout << "Vehicle: Destructor called " << endl;
}
void print(){
    cout <<"no_tyres:  " << no_tyres << endl;
}
};