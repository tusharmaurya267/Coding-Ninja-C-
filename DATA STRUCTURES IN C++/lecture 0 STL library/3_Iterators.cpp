#include <bits/stdc++.h>
using namespace std;


void vector_iterator()
{
    cout << endl <<" VECTOR ITERATOR : " << endl ;
    vector <int> v={1 ,2 ,3 ,4, 5};
    vector <int> :: iterator it = v.begin();
    cout <<(*(it)) << endl;
    cout <<(*(it+1)) << endl;

    for ( it = v.begin() ; it != v.end() ; it++)
    {
        cout << (*it) <<" " << endl;
    }
}

void vector_range_and_auto_work()
{
    cout << endl <<" VECTOR ITERATOR using auto keyword : " << endl ;
    vector <int> v={1 ,2 ,3 ,4, 5};
    //vector <int> :: iterator it = v.begin();

    for ( auto it = v.begin() ; it != v.end() ; it++)       //auto keyword automatically sets the data type 
    {
        cout << (*it) <<" " << endl;
    }

    cout << endl <<" VECTOR ITERATOR using range based loop : " << endl ;
    for ( auto value : v )
    {
        cout << (value) << " " << endl ;
    }
}


void pair_iterator()
{
    cout << endl <<" PAIR ITERATOR : " << endl ;
    vector < pair<int,int>> v_p = { {1,2},{3,4},{5,6}};
    vector < pair <int ,int>> :: iterator it;

    for ( it = v_p.begin() ; it != v_p.end() ; it++)
    {
        cout << (*it).first <<" " << (*it).second << endl;
    }

}

void pairs_range_and_auto_work()
{
    cout << endl <<" PAIR ITERATOR using auto keyword : " << endl ;
    vector < pair<int,int>> v_p = { {1,2},{3,4},{5,6}};
    //vector < pair <int ,int>> :: iterator it;

    for ( auto it = v_p.begin() ; it != v_p.end() ; it++)
    {
        cout << (*it).first <<" " << (*it).second << endl;
    }

    cout << endl <<" PAIR ITERATOR using range based loop : " << endl ;
    for ( auto value : v_p )
    {
        cout << (value).first << " " <<(value).second << endl ;
    }
}

int main()
{
    vector_iterator();
    vector_range_and_auto_work();    
    pair_iterator();
    pairs_range_and_auto_work();
}