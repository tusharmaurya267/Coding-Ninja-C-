/*

Remove Duplicates Recursively
Send Feedback
Given a string S, remove consecutive duplicates from it recursively.
Input Format :
String S
Output Format :
Output string
Constraints :
1 <= |S| <= 10^3
where |S| represents the length of string
Sample Input 1 :
aabccba
Sample Output 1 :
abcba
Sample Input 2 :
xxxyyyzwwzzz
Sample Output 2 :
xyzwz

*/


#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;




// void shift( char *input , int start , int end )
// {
//     if( start == end )
//     {
//         return; 
//     }
//     else
//     {
//         input[start]=input[start+1];
//         shift( input , ++start , end);
//     }
// }

// void helper( char *input , int len )
// {
//     int change_len = strlen(input);
//     if( len == 1 )
//     {
//         return ;
//     }
//     else
//     {
//         if( input[len] == input[len-1] )
//         {
//             shift( input , len , change_len );
//         }
//         helper( input , --len);
//     }
// }

// void removeConsecutiveDuplicates(char *input) 
// {
//     int len = strlen(input);
//     helper( input , len );
// }



#include <bits/stdc++.h>

void helper( char *input , int start , int start2 , int end)
{

    if(start==end){
        input[start2]='\0';
        return;
    }
    if(input[start]!=input[start+1]){
        input[start2]=input[start];
        start2++;
    }
    helper(input , ++start , start2 , end);
    
    
}


void removeConsecutiveDuplicates(char *input) 
{
    int len = strlen(input);
    helper( input , 0 ,0,len );
}

int main() {
    char s[100000];
    cin >> s;
    removeConsecutiveDuplicates(s);
    cout << s << endl;
}