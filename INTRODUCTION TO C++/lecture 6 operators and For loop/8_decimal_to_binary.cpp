/*
Decimal to Binary
Send Feedback
Given a decimal number (integer N), convert it into binary and print.
The binary number should be in the form of an integer.
Note: The given input number could be large, so the corresponding binary number can exceed the integer range. So you may want to take the answer as long for CPP and Java.


Note for C++ coders: Do not use the inbuilt implementation of "pow" function. The implementation of that function is done for 'double's and it may fail when used for 'int's, 'long's, or 'long long's. Implement your own "pow" function to work for non-float data types.


Input format :
Integer N
Output format :
Corresponding Binary number (long)
Constraints :
0 <= N <= 10^5
Sample Input 1 :
12
Sample Output 1 :
1100
Sample Input 2 :
7
Sample Output 2 :
111

*/

#include<iostream>
using namespace std;

int main() 
{
    long n;
    cin >> n;
    long d;
    long sum=0;
    long k=1;
    while(n>0)
    {
        d=n%2;
        n=n/2;
        sum=sum+k*d;
        k=k*10;

        
    }
	cout << sum;
}
