#include <bits/stdc++.h>
using namespace std;

void print_vector ( vector <int> v )
{
    for ( int i=0 ; i < v.size() ; i++ )
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

void vector_function()
{
    cout << "\n \n" << "VECTOR : " << endl;
    cout << "vector as array : ";
    vector <int> v;
    int n ; 
    cin >> n ;
    
    for ( int i=0 ; i < n ; i++ )
    {
        int x;
        cin >> x;
        v.push_back(x);                         //pushing value x in the last ,nth times
    }
    v.pop_back();                               //poping out the last value
    print_vector(v) ;
    
    cout << "initialization of vectors with some length and value : " << endl;
    vector <int> v1(5,3);                        //length of vector is 5 with initial value of "3".                    
    v1.push_back(7);                             //value is pushed after 5 initialization 
    print_vector (v1); 
    
    cout << "vector copying and passing:" << endl;
    vector < int > v2 = v;                      //copying vector
    v2.push_back(7);
    vector < int > &v3 = v;                      //passing vector v3 as refernce 
    v3.push_back(2);
    print_vector(v) ;
    print_vector(v2) ;
    print_vector(v3) ;


}                            


void pair_function()
{
    cout << "PAIR :" << endl << endl;

    pair < int,string > p;
    p = make_pair ( 2, "abc");
    p = { 3, "def" };
    pair < int , string > p1 = p;           // copied the pairs with a new location

    pair < int , string > &p2 = p;          // passed the location of pair as reference
    p1.first = 5;
    p2.first = 6;

    cout << p1.first << " " << p1.second << endl;
    cout << p2.first << " " << p2.second << endl;
    cout << p.first << " " << p.second  << endl;

    pair < int , int > p_array[7];
    p_array[0] = {1,2};
    p_array[1] = {3,4};
    p_array[2] = {5,6};

    swap ( p_array[0] , p_array[2] );

    int x,y;
    for ( int j=3 ; j < 6 ; j++)
    {
        cin >> x >> y;
        p_array [j] = {x ,y};
    }
    
    cout << " array printing of pair :::-" << endl ;
    for ( int i=0 ; i < 7 ; i++ )
    {
        cout << p_array[i].first << " " << p_array[i].second  << endl; 
    }
}

int main()
{
    pair_function();
    vector_function();
}


