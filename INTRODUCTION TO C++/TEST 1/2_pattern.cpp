/*
Number Star Pattern
Send Feedback
Print the following pattern for given number of rows.
Input format :

Line 1 : N (Total number of rows)

Sample Input :
   5
Sample Output :
1234554321
1234**4321
123****321
12******21
1********1
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
        while(j<=n-i+1)
        {
            cout << j;
            j++;
        }
        int k=(i-1)*2;
        int a=1;
        while(a<=k)
        {
            cout << "*";
            
            a=a+1;
        }
        
        int l=n-i+1;
        while(l>=1)
        {
            cout << l;
            l--;
        }
        i++;
        cout << endl;
    }
}


