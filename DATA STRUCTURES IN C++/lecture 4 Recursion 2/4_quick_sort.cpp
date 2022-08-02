#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void swap ( int *a , int * b )
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition_swap ( int *input , int start ,int end)
{
    int pivot = input[end];
    int i= start -1;
    for ( int j=start ; j < end ; j++ )
    {
        if( input[j] <= pivot )
        {
            i++;
            swap ( &input[i] , &input[j] );
        }
    }
    swap ( &input[i+1] , &input[end] );
    return ( i+1);
}

void quicksort(int *input, int start, int end)
{
    if( start < end )
    {
        int pivot = partition_swap( input , start , end );

        quicksort ( input , start , pivot -1);
        quicksort ( input , pivot+1 , end);
    } 
}

void quickSort(int *input, int n)
{
    quicksort(input , 0 , n-1);
}

int main()
{
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) 
    {
        cin >> input[i];
    }
    
    quickSort(input, n);

    for(int i = 0; i < n; i++) 
    {
        cout << input[i] << " ";
    }
    delete [] input;
}


