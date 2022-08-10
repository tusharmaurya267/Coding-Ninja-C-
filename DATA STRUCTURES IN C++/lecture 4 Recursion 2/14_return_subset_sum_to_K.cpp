/*


Return subsets sum to K
Send Feedback
Given an array A of size n and an integer K, return all subsets of A which sum to K.
Subsets are of length varying from 0 to n, that contain elements of the array. But the order of elements should remain same as in the input array.
Note : The order of subsets are not important.
Input format :
Line 1 : Integer n, Size of input array
Line 2 : Array elements separated by space
Line 3 : K 
Constraints :
1 <= n <= 20
Sample Input :
9 
5 12 3 17 1 18 15 3 17 
6
Sample Output :
3 3
5 1

*/


#include <iostream>
using namespace std;


// int solve ( int input[] , int output[][50] , int idx ,int n  , int k)
// {
//     if ( n == idx)
//     {
//         if ( k == 0)
//         {
//             output[0][0] = 0;
//         	return 1;
//         }
//         else
//             return 0;
        
//     }
//     int sm_output1[1000][50], sm_output2[1000][50];
//     int size1 = solve ( input , sm_output1 , idx+1 , n  , k );
//     int size2 = solve ( input , sm_output2 , idx+1 , n  , k - input[idx]);
    
//     int row = 0;
    
//     for ( int i = 0 ; i < size1 ; i++ )
//     {
//         for ( int j = 0 ; j <= sm_output1[i][0] ; j++ )
//         {
//             output[row][j]  = sm_output1[i][j];
//         }
//         row++;
//     }
    
//     for ( int i = 0 ; i < size2 ; i++ )
//     {
//         output[row][0] = sm_output2[i][0] + 1;
//         output[row][1] = input[idx];
//         for ( int j = 1 ; j <= sm_output2[i][0] ; j++ )
//         {
//             output[row][j+1] =  sm_output2[i][j] ;
//         }
//         row++;
//     }
//     return row;
// }


// int subsetSumToK(int input[], int n, int output[][50], int k) 
// {
//     // Write your code here
// 	return solve ( input ,output ,0 , n, k);
    
// }


int total=0;

int helper(int input[] , int size , int k ,int output[][50] , int index ,int output_index ,int op[]){
    if(index==size){
        if(k==0){
            output[total][0]=output_index;
            for(int i=1;i<=output_index;i++){
                output[total][i]=op[i-1];
            }
            total++;
        }
        return 0;   
    }
    int op1[100];int i;
    for(i=0;i<output_index;i++){
        op1[i]=op[i];
    }
    op1[i]=input[index];
    
    helper(input , size , k , output , index+1 , output_index,op);
    if(k>0){
        helper(input , size , k-input[index] , output , index+1 , output_index+1,op1);
    }
    return total;
}
int subsetSumToK(int input[], int n, int output[][50], int k) {
    int op[100];
    return helper(input,n,k,output,0,0,op);
}



int main() {
  int input[20],length, output[10000][50], k;
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> input[i];

  cin >> k;
  
  int size = subsetSumToK(input, length, output, k);

  for( int i = 0; i < size; i++) { 
	for( int j = 1; j <= output[i][0]; j++) { 
		cout << output[i][j] << " ";
    }
    cout << endl;
  }
}
