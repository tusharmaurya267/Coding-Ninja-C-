#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for ( int i = 0 ; i < n ; i++)
    {
        cin >> v[i];
    }
    int min = *min_element (v.begin(),v.end());
    cout <<"MIN :" << min << endl;
    int max = *max_element (v.begin(),v.end());
    cout <<"MAX :" << max << endl;
    int sum = accumulate (v.begin(),v.end() , 0);
    cout <<"SUM :" << sum << endl;
    int number = count (v.begin(),v.end() , 2);
    cout <<"COUNT :" << number << endl;
    auto it = find (v.begin(),v.end() , 10);
    if( it != v.end())
    {
        cout << *it << endl;
    }
    else
    {
        cout << "not found" << endl;
    }
    reverse (v.begin(),v.end());
    for (auto val : v)
    {
        cout << val << " ";
    }
    cout << endl;
    string s ="abcdefghi";
    reverse (s.begin(),s.end());
    cout << s << endl;
}