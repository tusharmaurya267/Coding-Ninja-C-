#include <iostream>
#include <algorithm>
using namespace std;

int pairSum(int *arr, int n, int num)
{
    sort(arr,arr+n);
    int i=0;
    int j=n-1;
    int pair=0;
    while(i<j){
        if(arr[i]+arr[j]>num){
            j--;
        }
        else if(arr[i]+arr[j]<num){
            i++;
        }
        else{
            int si_ele=arr[i];
            int ei_ele=arr[j];
            if(si_ele==ei_ele){
                int total_elements=j-i+1;
                pair=pair+((total_elements*(total_elements-1))/2);
                return pair;
            }
            int temp_si=i+1;
            int temp_ei=j-1;
            while(temp_si<=temp_ei && si_ele==arr[temp_si]){
                temp_si++;
            }
            while(temp_ei>=temp_si && ei_ele==arr[temp_ei]){
                temp_ei--;
            }
            pair=pair+((temp_si-i)*(j-temp_ei));
            i=temp_si;
            j=temp_ei;
        }
    }
    return pair;
}


int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int size;
		int x;

		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cin >> x;

		cout << pairSum(input, size, x) << endl;

		delete[] input;
	}
	
	return 0;
}