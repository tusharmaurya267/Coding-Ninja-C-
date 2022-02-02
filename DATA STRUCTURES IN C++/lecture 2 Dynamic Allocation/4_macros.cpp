#include <iostream>
using namespace std;

#define SQUARE(x) x*x

#define MULTIPLY(a, b) a*b

int main(){
    cout <<"Square:" << endl;
    int x = 36 / SQUARE(6);
    cout << x << endl;



    cout << "Multiply:" << endl;
    cout << MULTIPLY(2+3, 3+5);


    return 0;


}
