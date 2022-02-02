#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void stack_function()
{
    stack < int > s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    while ( !s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
}

void queue_function()
{
    queue < string > q;
    q.push("abc");
    q.push("def");
    q.push("ghi");
    q.push("jkl");
    while ( !q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
}

void sort_function()
{
    int n;
    cin >> n;
    int a[n];
    for ( int i = 0 ; i < n ; i++ )
    {
        cin >> a[i];
    }
    sort ( a+2 , a+n );
    for ( int i = 0 ; i < n ; i++ )
    {
        cout << a[i] << " " ;
    }
    cout << endl ;
}

int main()
{
    cout << "\n" << "STACK :" << endl;
    stack_function();
    cout << "\n" << "QUEUE :" << endl;
    queue_function();
    cout << "\n" << "SORT :" << endl;
    sort_function();
}