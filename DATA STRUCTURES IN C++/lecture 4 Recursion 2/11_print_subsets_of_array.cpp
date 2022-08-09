/*

Print Subsets of Array
Send Feedback
Given an integer array (of length n), find and print all the subsets of input array.
Subsets are of length varying from 0 to n, that contain elements of the array. But the order of elements should remain same as in the input array.
Note : The order of subsets are not important. Just print the subsets in different lines.
Input format :
Line 1 : Integer n, Size of array
Line 2 : Array elements (separated by space)
Constraints :
1 <= n <= 15
Sample Input:
3
15 20 12
Sample Output:
[] (this just represents an empty array, don't worry about the square brackets)
12 
20 
20 12 
15 
15 12 
15 20 
15 20 12 

*/


#include <iostream>
using namespace std;


void solve(int input[], int input_index, int size, int *output, int output_index){
    if(size==input_index){
        for ( int i = 0 ; i <=output_index ; i++)
        {
            cout << output[i] << " ";
        }
        cout << endl;
        return ;
    }
    output[output_index+1]=input[input_index];
    solve(input, input_index+1, size, output, output_index+1);
    solve(input, input_index+1, size, output, output_index);
    return;
}


void printSubsetsOfArray(int input[], int size) {
    int output[100];
    solve(input,0,size,output,-1);
    return;
}
    

int main() {
  int input[1000],length;
  cin >> length;
  for(int i=0; i < length; i++)
  	cin >> input[i];
  printSubsetsOfArray(input, length);
}
