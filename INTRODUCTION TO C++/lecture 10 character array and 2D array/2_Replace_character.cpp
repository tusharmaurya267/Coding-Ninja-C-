/*
Replace Character
Send Feedback
Given an input string S and two characters c1 and c2, you need to replace every occurrence of character c1 with character c2 in the given string.
Input Format :
Line 1 : Input String S
Line 2 : Character c1 and c2 (separated by space)
Output Format :
Updated string
Constraints :
1 <= Length of String S <= 10^6
Sample Input :
abacd
a x
Sample Output :
xbxcd
*/



#include <iostream>
#include <cstring>
using namespace std;


int length(char *str)
{
    int i=0;
    int count=0;
    while(str[i]!='\0')
    {
        count++;
        i++;
    }
    return count;
}

void replaceCharacter(char input[], char c1, char c2) 
{
    int len=length(input)-1;
    int i=0;
    while(i<=len)
    {
        if(input[i]==c1)
        {
            input[i]=c2;
        }
        i++;
    }
}


int main() {
    char input[1000000];
    char c1, c2;
    cin >> input;
    cin >> c1 >> c2;
    replaceCharacter(input, c1, c2);
    cout << input << endl;
}
