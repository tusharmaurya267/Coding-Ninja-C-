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


int helper(char input[] , int start , int end , int k)
{    
    if(end==0){
        int convert = input[end]-'0';
        return k*convert;
    }
    int convert = input[end]-'0';
    int add=convert*k;
    int small_output=add+helper(input,start,--end,k*10);
}


int stringToNumber(char input[]) 
{
    int len=strlen(input);
    int k=pow(10,len);
    int no = helper(input ,0 ,len-1 , 1);
    return no;
}

int main() {
    char input[50];
    cin >> input;
    cout << stringToNumber(input) << endl;
}


