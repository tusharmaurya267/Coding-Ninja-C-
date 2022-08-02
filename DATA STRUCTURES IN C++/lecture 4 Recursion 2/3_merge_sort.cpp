#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void helper( int *input , int start , int mid , int end )
{
    int k=0;
    int i=start;
    int j=mid+1;
    int temp[ end - start + 1 ];
    while ( i <= mid && j <= end )
    {
        if(input[i] < input[j])
        {
            temp[k] = input[i];
            i++;
            k++;
        }
        else
        {
            temp[k] = input[j];
            j++;
            k++;
        }
    }

    while ( i <= mid )
    {
        temp[k] = input[i];
        i++;
        k++;
    }

    while ( j <= end )
    {
        temp[k] = input[j];
        j++;
        k++;
    }
    for ( i=end, k=k-1 ; i >= start ; --i , --k )
    {
        input[i] = temp[k];
    }

}

void mergesort ( int *input , int start , int end )
{
    if(start < end)
    {
        int mid = (start + end)/2;

        mergesort( input , start , mid);
        mergesort( input , mid+1 , end);

        helper( input , start , mid , end );
    }

}

void mergeSort ( int *input , int length )
{
    mergesort ( input , 0 , length-1 );
}

int main() 
{
    int length;
    cin >> length;
    int* input = new int[length];
    for(int i=0; i < length; i++)
    {
        cin >> input[i];
    }
    mergeSort(input, length);
    for(int i = 0; i < length; i++) 
    {
        cout << input[i] << " ";
    }
}
