/*Selection sort*/

#include <iostream>
using namespace std;


void Selection_sort(int *input, int size)
{
    int n=size;
    int temp;
    for(int i=0;i<n-1;i++)
    {
        int min=input[i],pos_min=i;
        
        for(int j=i;j<n;j++)
        {
            if(input[j]<min)
            {
                min=input[j];
                pos_min=j;
            }
        }
        temp=input[i];
        input[i]=input[pos_min];
        input[pos_min]=temp;
    }
    
}
int main()
{

		int size;

		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		Selection_sort(input, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}

		cout << endl;
		delete []input;


}