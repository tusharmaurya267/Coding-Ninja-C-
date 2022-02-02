#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void nested_map()
{
    map < pair < string,string > ,vector<int> > m;
    int n;
    cin >> n;
    for ( int i = 0 ; i < n ; i++)
    {
        int ct;
        string fn,ln;
        cin >> ct >> fn >> ln;
        for ( int j = 0 ; j < ct ; j++ )
        {
            int x;
            cin >> x;
            m[{fn,ln}].push_back(x);
        }
    }

    for ( auto &pr : m)
    {
        auto &full_name = pr.first ;
        auto &list = pr.second;
        cout << full_name.first << " " << full_name.second << endl ;
        cout << list.size() << endl;
        for ( auto it : list)
        {
            cout << it << " " ; 
        }
        cout << "\n\n";
    }
}


int main()
{
    nested_map();
}