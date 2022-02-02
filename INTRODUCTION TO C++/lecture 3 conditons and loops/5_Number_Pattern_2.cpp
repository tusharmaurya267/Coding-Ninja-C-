/*
Number Pattern 2
Send Feedback
Print the following pattern
Pattern for N = 4


The dots represent spaces.



Input Format :
N (Total no. of rows)
Output Format :
Pattern in N lines
Sample Input :
5
Sample Output :
    1
   23
  345
 4567
56789

The dots represent spaces.
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
        int K=I;
        while (K<=I+I-1)
        {
            cout << K;
            K=K+1;
            
        }
        I=I+1;
        cout << endl;
    }

}