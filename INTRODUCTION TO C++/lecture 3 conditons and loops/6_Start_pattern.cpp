/*
Print the following pattern


Input Format :
N (Total no. of rows)
Output Format :
Pattern in N lines
Constraints :
0 <= N <= 50
Sample Input 1 :
3
Sample Output 1 :
   *
  *** 
 *****
Sample Input 2 :
4
Sample Output 2 :
    *
   *** 
  *****
 *******
 */

#include<iostream>
using namespace std;


int main()
{
    int N;
    cin >> N;
    int I=1;
    while (I<=N)
    {
        int J=I;
        while (J<=N-1)
        {
            cout << " ";
            J=J+1;
        }
        int K=1;
        while (K<=I)
        {
            cout << "*";
            K=K+1;
            
        }
        int L=1;
        while (L<I)
        {
            cout << "*";
            L=L+1;
            
        }
        cout << endl;
        I=I+1;
        
    }

}