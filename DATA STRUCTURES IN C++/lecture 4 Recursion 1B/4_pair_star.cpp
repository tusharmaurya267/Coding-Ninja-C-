/*

Pair Star
Send Feedback
Given a string S, compute recursively a new string where identical chars that are adjacent in the original string are separated from each other by a "*".
Input format :
String S
Output format :
Modified string
Constraints :
0 <= |S| <= 1000
where |S| represents length of string S.
Sample Input 1 :
hello
Sample Output 1:
hel*lo
Sample Input 2 :
aaaa
Sample Output 2 :
a*a*a*a

*/





/*

#include<string.h>
#include <bits/stdc.h++>
void pairStarhelp(char input[],int start)
{
    if(input[start]=='\0')
    {
        return ;
    }
    
    else if(input[start]!='\0')
    {
        if(input[start]==input[start-1])
        {
            for(int i=strlen(input);i>=start;i--)
            {
                input[i+1]=input[i];
            }
            input[start]='*';
            
        }
    pairStarhelp(input,start+1);
    }
}
void pairStar(char input[]) 
{
    pairStarhelp(input,1);
}

int main() 
{
   char input[100];
   cin.getline(input, 100);
   pairStar(input);
   cout << input << endl;
}


*/

#include <string.h>
#include <bits/stdc++.h>
#include <iostream>
using namespace std;


void star_shift(char input[] , int start , int end)
{
    if( start == end )
    {
        input[end+1] = input[end];
        input[end] = '*';
        return ;
    }
    else
    {
        input[end+1] = input[end];
        star_shift( input , start , --end);
    }
}

void helper(char input[] , int len )
{
    int change_len=strlen(input);
    if( len == 0 )
    {
        return ;
    }
    else
    {
        if(input[len] == input[len-1])
        {
            star_shift( input , len , change_len);
        }
        helper(input , --len);
    }
}

void pairStar(char input[]) 
{
    int len=strlen(input);
    helper( input , len );
}


int main() {
   char input[100];
   cin.getline(input, 100);
   pairStar(input);
   cout << input << endl;
}
