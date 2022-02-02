#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;


int subs( string input , string* output )
{
    if( input.empty())
    {
        output [ 0 ] = " ";
        return 1 ;
    }
    
    int smallsize = subs ( input.substr(1) , output );

    for ( int i = 0 ; i < smallsize ; i++ )
    {
        output [ i + smallsize ] = input [ 0 ] + output [ i ] ;
    }
    return smallsize * 2;
}


int main()
{
    string input;
    cin >> input;
    string* output = new string[1000];
    int len = subs( input , output );
    for( int i = 0 ; i < len ; i++ )
    {
        cout << output[i] << endl;
    }
}