/*
Binary to decimal
Send Feedback
Given a binary number as an integer N, convert it into decimal and print.
Input format :
An integer N in the Binary Format
Output format :
Corresponding Decimal number (as integer)
Constraints :
0 <= N <= 10^9
Sample Input 1 :
1100
Sample Output 1 :
12
Sample Input 2 :
111
Sample Output 2 :
7
*/


#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int sum=0;
    int d=0;
    int power=0;
    int count=0;
    while(n>0)
    {
        d=n%10;
        power=d*(pow(2,count));
	
        sum=sum+power;
     
        n=n/10;
        count++;
    }
    cout << sum;
}