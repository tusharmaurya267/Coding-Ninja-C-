#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;


// int subs( string input , string* output )
// {
//     if( input.empty())
//     {
//         output [ 0 ] = " ";
//         return 1 ;
//     }
    
//     int smallsize = subs ( input.substr(1) , output );

//     for ( int i = 0 ; i < smallsize ; i++ )
//     {
//         output [ i + smallsize ] = input [ 0 ] + output [ i ] ;
//     }
//     return smallsize * 2;
// }

int k=0;
int solve(string input , string* output,string op){
    if(input.length()==0){
        output[k]=op;
        k++;
        return 0;
    }
    string op1=op;
    string op2=op+input[0];
    input.erase(input.begin()+0);
    solve(input,output,op1);
    solve(input,output,op2);
    return k;
}


int subs(string input , string* output){
    string op="";
    return solve(input,output,op);
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