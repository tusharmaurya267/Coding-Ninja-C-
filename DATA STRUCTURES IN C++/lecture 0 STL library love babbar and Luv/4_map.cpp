#include <bits/stdc++.h>
using namespace std;


void map_print( map < int , string > m)
{

    map < int ,string > :: iterator it;
    for ( it = m.begin() ; it != m.end() ; it++)
    {
        cout << (*it).first <<" " << (*it).second << "\n \n";
    }
}

void map_function()
{
    map < int ,string > m ;
    m[1] = "abc";
    m[2] = "def";
    m[3] = "ghi";
    m.insert({4,"jkl"});
    m[3] = "lo";

    map < int ,string > :: iterator it;
    
    for ( it = m.begin() ; it != m.end() ; it++)
    {
        cout << (*it).first <<" " << (*it).second << endl;
    }

    cout << " FIND AND ERASE:" << endl;
    for ( it = m.begin() ; it != m.end() ; it++ )
    {
        
        if ( it == m.find( 3 ) )
        {
            cout << (*it).first <<" " << (*it).second << endl ;
            m.erase(it) ;
        }
        
    }
    cout << "PRINT AFTER ERASE :" << endl;
    map_print( m );
}



void map_print_ques( map < string , int > m)
{

    map < string , int > :: iterator it;
    for ( it = m.begin() ; it != m.end() ; it++)
    {
        cout << (*it).first <<" " << (*it).second << endl;
    }
}

void map_question()
{
    map <string , int> m;
    m["abc"] = 1;
    m["def"] = 1;
    m["ghi"] = 1;

    map_print_ques(m);
    int n;
    cin >> n;
    for ( int i = 0; i < n; i++ )
    {
    string str;
    cin >> str;
    map < string , int > :: iterator it;
    for ( it = m.begin() ; it != m.end() ; it++)
    {
        if ( it == m.find(str) )
        {
            (*it).second++;
        }
            
    }
    m.insert({str , 1});                
    }
    map_print_ques(m);

    //ALTERNATE 

    
    for ( int i = 0; i < n ; i++ )
    {
        string str;
        cin >> str;
        m[str]++;
    }
    map_print_ques(m);
  
}


int main()
{
    cout << "ORDERED MAP:  no multiple values allowed and arranged lexicographically" << endl;
    cout << "UNORDERED MAP:  no multiple values allowed " << endl;
    cout << "MULTI MAP: simple map " << endl;

    map_function();
    cout << "Arrange lexicographically and print the frequency of each string" << "\n \n" ;
    map_question();
}


// .earse()->no return type   &  .find()->returns the address  &   .count()->returns the count  
//  they don't require any loop
