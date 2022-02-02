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


/*
int i=0;
void removeConsecutiveDuplicates(char input[])
{
    if(input[i]!='\0')
    {
        if(input[i]==input[i+1])
        {
            for(int j=i;j<=strlen(input);j++)
            {
                
                input[j]=input[j+1];
            }
            i--;
        }
        i++;
        removeConsecutiveDuplicates(input);
    }
    else
    {
        return;
    }
}

int main() {
    char s[100000];
    cin >> s;
    removeConsecutiveDuplicates(s);
    cout << s << endl;
}

*/


void shift( char *input , int start , int end )
{
    if( start == end )
    {
        return; 
    }
    else
    {
        input[start]=input[start+1];
        shift( input , ++start , end);
    }
}

void helper( char *input , int len )
{
    int change_len = strlen(input);
    if( len == 1 )
    {
        return ;
    }
    else
    {
        if( input[len] == input[len-1] )
        {
            shift( input , len , change_len );
        }
        helper( input , --len);
    }
}

void removeConsecutiveDuplicates(char *input) 
{
    int len = strlen(input);
    helper( input , len );
}

int main() {
    char s[100000];
    cin >> s;
    removeConsecutiveDuplicates(s);
    cout << s << endl;
}