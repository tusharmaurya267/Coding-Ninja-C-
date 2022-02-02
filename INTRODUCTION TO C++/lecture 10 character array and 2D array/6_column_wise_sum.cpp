#include <iostream>
using namespace std;


void column_sum(int input[10000][10000],int m,int n)
{
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=0;j<m;j++)
        {
            sum=sum+input[j][i];
        }
        cout << sum << " ";
    }
}

int main()
{
    int input[10000][10000];
    int n,m;
    cin >> m >> n;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> input[i][j];
        }
    }

    column_sum(input,m,n);
}