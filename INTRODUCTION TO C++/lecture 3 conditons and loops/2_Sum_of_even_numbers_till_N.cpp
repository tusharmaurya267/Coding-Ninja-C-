/*
Sum of Even Numbers till N
Send Feedback
Given a number N, print sum of all even numbers from 1 to N.
Input Format :
Integer N
Output Format :
Required Sum 
Sample Input 1 :
 6
Sample Output 1 :
12
*/
#include<iostream>
using namespace std;


int main()
{
	int Sum=0;
    int i=1;
    int N;
    cin >> N;
	while(i<=N) 
    {
        if(i%2==0)
        {
            Sum=Sum+i;
        }
        i=i+1;	
    }
    cout << Sum;
}