/*
Reverse Word Wise
Send Feedback
Reverse the given string word wise. That is, the last word in given string should come at 1st place, last second word at 2nd place and so on. Individual words should remain as it is.
Input format :
String in a single line
Output format :
Word wise reversed string in a single line
Constraints :
0 <= |S| <= 10^7
where |S| represents the length of string, S.
Sample Input 1:
Welcome to Coding Ninjas
Sample Output 1:
Ninjas Coding to Welcome
Sample Input 2:
Always indent your code
Sample Output 2:
code your indent Always
*/

#include <iostream>
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

void reverse(char *input,int start,int end)
{
    while(start<=end)
    {
        char temp=input[start];
        input[start]=input[end];
        input[end]=temp;
        end--;
        start++;
    }
}

void reverseStringWordWise(char input[]) 
{
    int len=length(input)-1;
    reverse(input,0,len);
    int j=0;
    int i=0;
    while(j<=len)
    {
        if(input[j+1]==' ' || input[j+1]=='\0')
        {
            reverse(input,i,j);
            i=j+2;
        }
        j++;
    }
}

int main()
{
    char input[10000];
    cin.getline(input,10000);
    reverseStringWordWise(input);
    cout << input;
}