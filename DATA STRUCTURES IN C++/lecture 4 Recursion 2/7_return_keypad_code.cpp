#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;



string sel(int num)
{
    if ( num == 2)
        return "abc";
    if ( num == 3)
        return "def";
    if ( num == 4)
        return "ghi";
    if ( num == 5)
        return "jkl";
    if ( num == 6)
        return "mno";
    if ( num == 7)
        return "pqrs";
    if ( num == 8)
        return "tuv";
    if ( num == 9)
        return "wxyz";
}

int k;
int keypad(int num, string output[])
{
    if ( num == 0 )
    {
        output[0] = "";
        return 1;
    }
    int d = num % 10;
    int smallsize = keypad ( num/10 , output);
    string opt = sel(d);
    
    for ( int  i = 0 ; i < opt.length() ; i++)
    {
        for ( int j = 0 ; j < smallsize ; j++)
        {
            output [ (smallsize * (1+i)) + j ] = output [j];           
        }
    }
    
    int k=0;
    for ( int  i = 0 ; i < opt.length() ; i++)
    {
        for ( int j = 0 ; j < smallsize ; j++)
        {
            output[k] = output[k] + opt[i];
            k++;
        }
    }
    return k;
}

int main()
{
    int num;
    cin >> num;

    string output[10000];
    int count = keypad(num, output);
    for(int i = 0; i < count && i < 10000; i++)
    {
        cout << output[i] << endl;
    }
    return 0;
}
