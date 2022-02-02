#include <iostream>
using namespace std;


int main()
{
    int i=10;
    int const j=20;
    
    //assiging normal addresses to normal variables
    int &k =i;
    k++;
    i++;

    cout << "assiging normal addresses to normal variables" << endl;
    cout << i << endl;
    cout << j << endl;
    cout << k << endl;
    cout << endl;
    


    //assiging normal addresses to constant variables
    //not allowed
    /*
    int &m =j;
    m++;

    cout << "assiging normal addresses to constant variables" << endl;
    cout << i << endl;
    cout << j << endl;
    cout << m << endl;
    cout << endl;
    */


    //assiging constant addresses to normal variables
    int const &n =i;
    i++;
    cout << "assiging constant addresses to normal variables" << endl;
    cout << i << endl;
    cout << j << endl;
    cout << n << endl;
    cout << endl;

    //assiging constant addresses to constant variables
    int const &o =j;

    cout << "assiging constant addresses to constant variables" << endl;
    cout << i << endl;
    cout << j << endl;
    cout << o << endl;
    cout << endl;
}