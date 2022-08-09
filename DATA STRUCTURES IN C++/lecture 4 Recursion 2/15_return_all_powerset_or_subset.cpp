
#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;


int i;
int k=0;
int powerset ( string input , string output[] )
{
    /*
    if(input.empty())
    {
        return k;
    }
    else
    {
        for ( int j=1; j <= input.size() ; j++ )
        {
            output[k] = input.substr(0, j);
            k++;
        }
        
        powerset ( input.substr (i+1) , output );
    }
    */



}

int main()
{
    string input;
    cin >> input;
    int count = input.size();
    int len = pow( 2, count);
    string output[len];
    powerset( input , output );
    for(int i = 0; i <= k ; i++)
    {
        cout << output[i] << endl;
    }
    return 0;
}
