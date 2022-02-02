/*

Check Palindrome (recursive)
Send Feedback
Check whether a given String S is a palindrome using recursion. Return true or false.
Input Format :
String S
Output Format :
'true' or 'false'
Constraints :
0 <= |S| <= 1000
where |S| represents length of string S.
Sample Input 1 :
racecar
Sample Output 1:
true
Sample Input 2 :
ninja
Sample Output 2:
false

*/



#include <iostream>
using namespace std;

#include<string.h>

bool helper(char input[] ,int start , int end)
{
    if(start < end)
    {
        if(input[start] != input[end])
        {
            return false;
        }
        helper( input , ++start , --end);
    }
    else
    {
        return true;
    }
}

bool checkPalindrome(char input[])
{
    int end = strlen(input);
	helper(input , 0 , end-1);
}


int main() {
    char input[50];
    cin >> input;
    
    if(checkPalindrome(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}
