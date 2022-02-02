#include <bits/stdc++.h>
using namespace std;

void print (unordered_map < int,string > &m)
{
    for ( auto &pr : m)
    {
        cout << pr.first <<" " << pr.second << endl;
    }
}



int main()
{
    unordered_map< int , string > m;
    m[1] ="abc";
    m[5] ="def";
    m[3] ="acd";
    m[6] ="dch";
    auto it = m.find(7);
    if ( it != m.end() )
        m.erase (it);
        print (m);
}