/*
Print the following pattern for the given number of rows.
Pattern for N = 4
   1
  212
 32123
4321234
Input format : N (Total no. of rows)

Output format : Pattern in N lines

Sample Input :
5
Sample Output :
        1
      212
    32123
  4321234
543212345
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n-i)
        {
            cout << " ";
            j++;
        }
        int l=i;
        while(l>=2)
        {
            cout << l;
            l--;
        }
        int m=1;
        while(m<=i)
        {
            cout << m;
            m++;
        }
        i++;
        cout << endl;
    }
}

