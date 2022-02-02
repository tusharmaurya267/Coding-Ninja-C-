/*
reverse the given string
*/

#include<iostream>
using namespace std;

int length(char *input)
{
    int i=0,count=0;
    while(input[i]!='\0')
    {
        count ++;
        i++;
    }
    return count;

}

void reverse_string(char *input)
{
    int len=length(input);
    int i=0;
    int j=len-1;
    while(i<j)
    {
        char temp=input[i];
        input[i]=input[j];
        input[j]=temp;
        i++;
        j--;
    }
}

int main()
{
    char input[100];
    cin.getline(input,100);
    reverse_string(input);
    cout << input << endl;
}