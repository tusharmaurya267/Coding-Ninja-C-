#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// int helpersubset(int input[],int start, int n, int output[][20]) 
// {
//     if ( n == start)
//     {
//         output[0][0] = 0;
//         return 1;
//     }
    
//     int smallsize = helpersubset ( input , start+1, n , output);
    
//     for ( int i = 0 ; i < smallsize ; ++i )
//     {
//         output[i+smallsize][0] = output[i][0] + 1;
//         output[i+smallsize][1] = input[start];
//         for ( int j = 1 ; j <= output[i][0] ; j++ )
//         {
//             output[i + smallsize][j+1] =  output[i][j] ;
//         }
//     }
//     return 2*smallsize; 
// }


// int subset(int input[], int n, int output[][20])
// {
//     int len = helpersubset(input, 0 , n , output);
//     return len;
// }


int k=0;
int solve(int input[], int input_index, int size, int output[][20], int output_index, int op[]){
    if(size==input_index){
        output[k][0]=output_index;
        for ( int i = 1 ; i <=output_index ; i++)
        {
            output[k][i]=op[i];
        }
        k++;
        return 0;
    }
    
    op[output_index+1]=input[input_index];
    solve(input, input_index+1, size, output, output_index+1,op);
    solve(input, input_index+1, size, output, output_index,op);
    return k;
}


int subset(int input[], int size, int output[][20]) {
    int op[100]={0};
    return solve(input,0,size,output,0,op);
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
