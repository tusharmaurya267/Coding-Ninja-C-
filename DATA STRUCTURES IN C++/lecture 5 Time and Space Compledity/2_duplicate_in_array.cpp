#include <iostream>
using namespace std;



int findDuplicate(int *arr, int n)
{
    int sum=0;
    int n_sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    for(int j=0;j<=n-2;j++)
    {
        n_sum=n_sum+j;
    }
    
    int diff=sum-n_sum;
    return diff;
    
    //Write your code here
}


int main()
{
	int t;
	cin >> t;
	
	while (t--)
	{
		int size;
		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << findDuplicate(input, size) << endl;
	}

	return 0;
}