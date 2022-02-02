/*

String to Integer
Send Feedback
Write a recursive function to convert a given string into the number it represents. That is input will be a numeric string that contains only numbers, you need to convert the string into corresponding integer and return the answer.
Input format :
Numeric string S (string, Eg. "1234")
Output format :
Corresponding integer N (int, Eg. 1234)
Constraints :
0 <= |S| <= 9
where |S| represents length of string S.
Sample Input 1 :
00001231
Sample Output 1 :
1231
Sample Input 2 :
12567
Sample Output 2 :
12567

*/

#include <bits/stdc++.h>
#include <string.h>
#include <iostream>
using namespace std;

/*
int help(char input[],int last)
{
    if(last==0)
    {
        return input[last] - '0';
    }
    
    int smallans=help(input,last-1);
    int a=input[last] - '0';
    return smallans * 10 + a;
    
}
int stringToNumber(char input[]) 
{
    // Write your code here
    return help(input,strlen(input)-1);

}


int main() {
    char input[50];
    cin >> input;
    cout << stringToNumber(input) << endl;
}

*/



int sum=0;
int power=1;
void helper(char input[] , int end )
{
    
    if( end == 0 )
    {
        int no_convert = input[end];
        sum = sum + (power * (no_convert - 48));
        return;
    }
    else
    {
        int no_convert = input[end];
        sum = sum + (power * (no_convert - 48));
        power = power * 10;
        helper (input , --end );
    }
}


int stringToNumber(char input[]) 
{
    int len=strlen(input);
    helper(input , len-1 );
}


int main() {
    char input[50];
    cin >> input;
    cout << stringToNumber(input) << endl;
}


