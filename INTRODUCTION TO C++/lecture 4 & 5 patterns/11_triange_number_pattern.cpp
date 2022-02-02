/*
Code : Triangle of Numbers
Send Feedback
Print the following pattern for the given number of rows.
Pattern for N = 4



The dots represent spaces.



Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines
Constraints :
0 <= N <= 50
Sample Input 1:
5
Sample Output 1:
           1
         232
       34543
     4567654
   567898765
Sample Input 2:
4
Sample Output 2:
           1
         232
       34543
     4567654
     */


#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        while(j<=n-i)
        {
            cout << " ";
            j=j+1;
        }
        int k=1;
        int t=i;
        while(k<=i)
        {
            cout << t;
            t=t+1;
            k=k+1;
        }
        t=t-2;
        int l=1;
        while(l<=i-1)
        {
            cout << t;
            t=t-1;
            l=l+1;
        }
        i=i+1;
        cout << endl;
    }
}
