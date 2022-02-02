/*
Reverse of a number
Send Feedback
Write a program to generate the reverse of a given number N. Print the corresponding reverse number.
Note : If a number has trailing zeros, then its reverse will not include them. For e.g., reverse of 10400 will be 401 instead of 00401.


Input format :
Integer N
Output format :
Corresponding reverse number
Constraints:
0 <= N < 10^8
Sample Input 1 :
1234
Sample Output 1 :
4321
Sample Input 2 :
1980
Sample Output 2 :
891
*/

#include<iostream>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    int sum=0;
    int flag=0;
    while(n>0)
    {
        
        int d=n%10;
        n=n/10;
        if (flag==0)// we can even remove this condition of false.here 
            		//it is not required as when we ll reverse the number 0 in the starting will be omitted.
        {
        	if(d==0)
       	 	{
            	continue;
        	}
        }
        flag=1;
        sum=sum*10+d;
        
    }
    cout << sum;
}

