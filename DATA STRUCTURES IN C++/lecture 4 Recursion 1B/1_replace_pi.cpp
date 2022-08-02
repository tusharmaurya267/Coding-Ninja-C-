/*

Replace pi (recursive)
Send Feedback
Given a string, compute recursively a new string where all appearances of "pi" have been replaced by "3.14".
Constraints :
1 <= |S| <= 50
where |S| represents the length of string S. 
Sample Input 1 :
xpix
Sample Output :
x3.14x
Sample Input 2 :
pipi
Sample Output :
3.143.14
Sample Input 3 :
pip
Sample Output :
3.14p
Constraints:-
1<=|S|<=50

*/

#include <string.h>
#include <iostream>
using namespace std;



#include <bits/stdc++.h>

// void shift_insert(char input[] , int start , int end)
// {
//     if(end==start)
//     {
//         input[start]='3';
//         input[start+1]='.';
//         input[start+2]='1';
//         input[start+3]='4';
//         return;
//     }
//     else
//     {
//         input [end+2] = input [end];
//         shift_insert(input ,  start , --end);
//     }
// }

// void helper(char input[] , int len)
// {
//     int change_len =strlen(input);
//     if(len<=0 )
//     {
//         return ;
//     }
//     else
//     {
//         if( input[len] == 'i' && input[len-1] == 'p' )
//         {
//             shift_insert( input , len-1 ,change_len);
//             len--;
//         }
//         helper(input , --len);
//     }
// }

// void replacePi(char input[]) 
// {
//     int len=strlen(input);
//     helper(input , len-1);
// }


void shift_insert(char input[] , int start , int end)
{
    if(end==start)
    {
        input[start]='3';
        input[start+1]='.';
        input[start+2]='1';
        input[start+3]='4';
        return;
    }
    input [end] = input [end-2];
    shift_insert(input ,  start , end-1);
}

void helper(char input[] , int start, int end)
{
    if(start==end ){
        return;
    }
    
    if(input[start]=='p' && input[start+1]=='i'){
        end=end+2;
        
        shift_insert(input,start,end);
    }
    helper(input,++start,end);
}



void replacePi(char input[]) 
{
    helper(input, 0, strlen(input));
}


int main() {
    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;
}
