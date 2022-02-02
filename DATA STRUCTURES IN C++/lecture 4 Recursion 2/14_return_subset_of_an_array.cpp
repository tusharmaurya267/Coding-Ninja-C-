#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int helpersubset(int input[],int start, int n, int output[][20]) 
{
    if ( n == start)
    {
        output[0][0] = 0;
        return 1;
    }
    
    int smallsize = helpersubset ( input , start+1, n , output);
    
    for ( int i = 0 ; i < smallsize ; ++i )
    {
        output[i+smallsize][0] = output[i][0] + 1;
        output[i+smallsize][1] = input[start];
        for ( int j = 1 ; j <= output[i][0] ; j++ )
        {
            output[i + smallsize][j+1] =  output[i][j] ;
        }
    }
    return 2*smallsize; 
}


int subset(int input[], int n, int output[][20])
{
    int len = helpersubset(input, 0 , n , output);
    return len;
}


int main() 
{
  int input[20],length, output[35000][20];
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> input[i];
  
  int size = subset(input, length, output);

  for( int i = 0; i < size; i++) 
  { 
    for( int j = 1; j <= output[i][0]; j++) 
    { 
		cout << output[i][j] << " ";
    }
    cout << endl;
    }
}
