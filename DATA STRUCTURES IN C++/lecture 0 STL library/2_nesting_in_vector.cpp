#include <bits/stdc++.h>
using namespace std;


void print_vector_pair( vector <pair<int,int> > &v )
{
    cout << " size: " << v.size() << endl;
    for ( int i = 0 ; i < v.size() ; i++ )
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
    cout << endl;
}

void vector_of_pair()
{
    vector < pair <int,int>> v = { {1,2},{3,4},{5,6} };         //vector of pairs
    print_vector_pair( v );
    int n;
    cin >> n;
    for ( int i =0 ; i < n ; i++)
    {
        int x, y ;
        cin >> x >> y ;
        v.push_back( {x , y} );
    }
    print_vector_pair(v);
}


void print_vector_array ( vector < int > &v)
{
    cout << " size : " << v.size() << endl;
    for ( int i = 0 ; i < v.size() ; i++ )
    {
        cout << v[i] << " ";
    }
    cout << endl ;
}

void array_of_vector()
{
    int n;
    cin >> n;
    vector < int > v[ n ];                                       //array of vector
    for ( int i = 0 ; i < n ; i++ )
    {
        int m;
        cin >> m;
        for ( int j = 0 ; j < m ; j++ )
        {
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }
    for ( int i = 0 ; i < n ; i++)
    {
        print_vector_array( v[i] );
    }
}

void vector_of_vector()
{
    int n;
    cin >> n;
    vector <vector<int>> v;                                     //vector of vector
    for ( int i = 0 ; i < n ; i++ )
    {
        int m;
        cin >> m;
        vector <int> temp;
        for ( int j = 0 ; j < m ; j++ )
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    for ( int i =0 ; i < v.size () ; i++)
    {
        print_vector_array ( v[i] );
    }
}

int main()
{
    vector_of_pair();
    array_of_vector();
    vector_of_vector();
}
