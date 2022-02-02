/*
Number Pattern 1
Send Feedback
Print the following pattern
Pattern for N = 4
1
23
345
4567
Input Format :
N (Total no. of rows)
Output Format :
Pattern in N lines
Sample Input 1 :
3
Sample Output 1 :
1
23
345
*/

#include<iostream>
using namespace std;


int main()
{
    int N;
    int J;
    int L;
    int K;
    cin >> N;
    int I=1;
    while (I<=N)
    {
        J=I+I-1;
        K=I;
        while (K<=J)
        {
            cout << K;
            K++;
        }
        cout << endl;
        I=I+1;
    }
    
    
}