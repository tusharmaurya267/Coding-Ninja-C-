#include <iostream>
using namespace std;


int main()
{

    int i=10;
    int j=20;
    
    //assiging normal pointers to normal variables
    int *k =&i;
    (*k)++;
    i++;

    cout << "assiging normal pointers to normal variables" << endl;
    cout << i << endl;
    cout << j << endl;
    cout << *k << endl;
    cout << endl;
    


    //assiging normal pointers to constant variables
    //not allowed
    
   /*  
    int const *m =&j;
    (*m)++;

    cout << "assiging normal pointers to constant variables" << endl;
    cout << i << endl;
    cout << j << endl;
    cout << *m << endl;
    cout << endl;
   
 */

    //assiging constant pointers to normal variables
    int const *n =&i;
    i++;
    cout << "assiging constant pointers to normal variables" << endl;
    cout << i << endl;
    cout << j << endl;
    cout << *n << endl;
    cout << endl;

    //assiging constant pointers to constant variables
    int const * const o =&j;

    cout << "assiging constant pointers to constant variables" << endl;
    cout << i << endl;
    cout << j << endl;
    cout << *o << endl;
    cout << endl;


}