/*


Return Permutations - String
Send Feedback
Given a string S, find and return all the possible permutations of the input string.
Note 1 : The order of permutations is not important.
Note 2 : If original string contains duplicate characters, permutations will also be duplicates.
Input Format :
String S
Output Format :
All permutations (in different lines)
Sample Input :
abc
Sample Output :
abc
acb
bac
bca
cab
cba

*/

#include <iostream>
#include <string>
#include "solution.h"
using namespace std;



// int returnPermutations(string input, string output[])
// {
//     if ( input.length() == 0)
//     {
//         output[0] ="";
//         return 1;
//     }
//     string sm_output[10000];
//     int size = returnPermutations( input.substr(1), sm_output );
//     int k = 0;
//     for ( int  i = 0 ; i < size ; i++ )
//     {
//         for ( int j = 0 ; j <= sm_output[i].length() ; j++)
//         {
//             output[k] = sm_output[i].substr(0,j) + input[0] + sm_output[i].substr(j);
//             k++;
//         }
//     }
//     return k;
// }


int k=0;
int solver(string input, string output[], string op ){
    if ( input.length() == 0)
    {
        output[k]=op;
        k++;
        return 0;
    }
    for ( int i = 0 ; i <= op.length() ; i++ )
    {
        char ch=input[0];
        // solver ( input.substr(1) , output.substr(0,i) + input [0] + output.substr(i));
        solver ( input.substr(1) ,output , op.substr(0,i)+ch+op.substr(i));
    }
    return k;
}

int returnPermutations(string input, string output[]){
    int k=solver ( input , output ,  "" );
    return k;
}



int main(){
    string input;
    cin >> input;
    string output[10000];
    int count = returnPermutations(input, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;
}
