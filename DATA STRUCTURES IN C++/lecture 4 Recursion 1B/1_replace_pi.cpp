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

/*
void replacePiHelper(char str[], int start)
{

    if (str[start] == '\0' || str[start + 1] == '\0') 
    {
        return;
    }
 

    replacePiHelper(str, start + 1);

    if (str[start] == 'p' && str[start + 1] == 'i') 
    {

        for (int i = strlen(str); i >= start + 2; i--) 
        {
            str[i + 2] = str[i];
        }

        str[start] = '3';
        str[start + 1] = '.';
        str[start + 2] = '1';
        str[start + 3] = '4';
    }
}

void replacePi(char str[])
{
    replacePiHelper(str, 0);
}
*/


#include <bits/stdc++.h>

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
    else
    {
        input [end+2] = input [end];
        shift_insert(input ,  start , --end);
    }
}

void helper(char input[] , int len)
{
    int change_len =strlen(input);
    if(len<=0 )
    {
        return ;
    }
    else
    {
    //     if( input[len] == 'i' && input[len-1] == 'p' )
    //     {
    //         shift_insert( input , len-1 ,change_len);
    //         len--;
    //     }
    //     helper(input , --len);
    // }
}

void replacePi(char input[]) 
{
    int len=strlen(input);
    helper(input , len-1);
}



int main() {
    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;
}
