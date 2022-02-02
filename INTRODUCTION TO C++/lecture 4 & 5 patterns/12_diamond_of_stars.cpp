/*
Code : Diamond of stars
Send Feedback
Print the following pattern for the given number of rows.
Note: N is always odd.


Pattern for N = 5



The dots represent spaces.



Input format :
N (Total no. of rows and can only be odd)
Output format :
Pattern in N lines
Constraints :
1 <= N <= 49
Sample Input 1:
5
Sample Output 1:
  *
 ***
*****
 ***
  *
Sample Input 2:
3
Sample Output 2:
  *
 ***
  *
*/

#include<iostream>
using namespace std;


int main() 
{
    int n;
    cin >> n;
    int i=1;
    int half=n/2;
	while(i<=half)
    {
        int j=n/2;
        while(j>=i)
        {
            cout << " ";
            j=j-1;
        }
        int k=1;
        while(k<=i)
        {
            cout << "*";
            k=k+1;
        }
        int l=1;
        while(l<=i-1)
        {
            cout << "*";
            l=l+1;
        }
        cout << endl;
        i=i+1;
    }
    int a=1;
    while(a<=n/2+1)
    {
        int b=2;
        while(b<=a)
        {
            cout << " ";
            b=b+1;
        }
        int c=n/2+1;
        while(c>=a)
        {
            cout << "*";
            c=c-1;
        }
        int d=n/2;
        while(d>=a)
        {
            cout << "*";
            d=d-1;
        }
        cout << endl;
        a=a+1;
    }
}
