/*
Second Largest
Send Feedback
Take input a stream of n integer elements, find the second largest element present.
The given elements can contain duplicate elements as well. If only 0 or 1 element is given, the second largest should be INT_MIN ( - 2^31 ).
Input format :

Line 1 : Total number of elements (n)

Line 2 : N elements (separated by space)

Sample Input 1:
 4
 3 9 0 9
Sample Output 1:
 3
Sample Input 2 :
 2
 4 4
Sample Output 2:
 -2147483648
Sample Output Explanation:
Since both the elements are equal here, hence second largest element is INT_MIN i.e. ( -2^31 )
*/



#include <climits>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int inf=pow(-2,31);
    int lg1=inf,lg2=inf,no=inf;
    
    if(n>=2)
    {
        cin >> no;
        lg1=no;
    }
    if(n==0 || n==1)
    {
        cout << inf << endl;
    }
    for(int i=2;i<=n;i++)
    {
        cin >> no;

        if(no < lg1 && no > lg2)
        {
            lg2=no;
        }
        else if(no > lg1 && no > lg2)
        {
            lg2=lg1;
            lg1=no;
        }
    }
    if(n>=2 )
    {
        cout << lg2;
    }
    
}





