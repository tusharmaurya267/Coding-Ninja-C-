/*

Remove X
Send Feedback
Given a string, compute recursively a new string where all 'x' chars have been removed.
Input format :
String S
Output format :
Modified String
Constraints :
1 <= |S| <= 10^3
where |S| represents the length of string S. 
Sample Input 1 :
xaxb
Sample Output 1:
ab
Sample Input 2 :
abc
Sample Output 2:
abc
Sample Input 3 :
xx
Sample Output 3:

*/



#include <iostream>
using namespace std;
#include <string.h>

#include <bits/stdc++.h>

void shift_remove(char input[] , int start , int end)
{
    if(start == end)
    {
        return ;
    }
    else
    {
        input[start] = input[start+1];
        shift_remove( input , ++start , end );
    }
}

void helper( char input[] , int start )
{
    int change_len = strlen(input);
    
    if(input[start]  == '\0')
    {
        return ;
    }
    else
    {
        if( input[start] == 'x' )
        {
            shift_remove( input , start , change_len );
            --start;
        }
        helper(input , ++start);
    }
}

void removeX(char input[]) 
{
    int len=strlen(input);
    helper(input , 0 );
}

int main() {
    char input[100];
    cin.getline(input, 100);
    removeX(input);
    cout << input << endl;
}
