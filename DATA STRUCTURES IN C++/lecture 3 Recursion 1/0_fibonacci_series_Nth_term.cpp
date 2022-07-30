#include<iostream>
using namespace std;

int fibonacci(int n)
{
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int smalloutput1 = fibonacci(n-1);
    int smalloutput2 = fibonacci(n-2);
    return smalloutput1 + smalloutput2;
}

int main(){
    int n;
    cin >> n;
    int k =fibonacci(n);
    cout << k;
}