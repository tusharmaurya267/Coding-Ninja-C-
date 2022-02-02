/*
Trim Spaces
Send Feedback
Given an input string S that contains multiple words, you need to remove all the spaces present in the input string.
There can be multiple spaces present after any word.
Input Format :
 String S
Output Format :
Updated string
Constraints :
1 <= Length of string S <= 10^6
Sample Input :
abc def g hi
Sample Output :
abcdefghi
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


void trimSpaces(char input[]) 
{
    int i=0;
    int k=0;
    int len=length(input);
    while(i<=len)
    {
        if(input[i]!=' ')
        {
            input[k]=input[i];
            k++;
        }
        i++;
    }
}

int main() {
    char input[1000000];
    cin.getline(input, 1000000);
    trimSpaces(input);
    cout << input << endl;
}



