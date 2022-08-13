#include <bits/stdc++.h>
using namespace std;

void print_set( set<string> &s)
{
    for ( auto value : s)
    {
        cout << value << " " ;
    }
    cout << endl;
}

void set_function()
{
    set < string > s;
    s.insert("abc");
    s.insert("zsdf");
    s.insert("bcd");
    s.insert("abc");

    for ( auto it = s.begin() ; it != s.end() ; it++ )
    {
        if ( it == s.find("bcd") )
        {
            s.erase("bcd");
        }
    }
    print_set (s);
}

void set_question()
{
    int n;
    cin >> n;
    set < string > s;
    for ( int i =0 ; i < n ;i++ )
    {
        string str;
        cin >> str;
        s.insert ( str );
    }
    for ( auto &value : s)
    {
        cout << value  << " ";
    }
    cout << endl ;
}

void unorder_set_question()
{
    int n;
    cin >> n;
    set < string > s;
    for ( int i =0 ; i < n ;i++ )
    {
        string str;
        cin >> str;
        s.insert ( str );
    }

    int q;
    cin >> q;
    while ( q--)
    {
        string sea;
        cin >> sea;
        if ( s.find(sea) == s.end())
        {
            cout << "not found" << endl ;
        }
        else{
            cout << "found" << endl ;
        }
    }
    for ( auto &value : s)
    {
        cout << value  << " " << endl;
    }
}

int main()
{
    cout << "ORDERED SET:  no multiple values allowed and arranged lexicographically" << endl;
    cout << "UNORDERED SET:  no multiple values allowed " << endl;
    cout << "MULTI SET: simple set " << endl;
    set_function();
    cout << endl << "Print the string lexicographically" << endl;
    set_question();
    cout << endl << "Print whether the strings are present in the set or not" << endl;
    unorder_set_question();
}


// .earse()->no return type   &  .find()->returns the address  &   .count()->returns the count  
//  they don't require any loop
