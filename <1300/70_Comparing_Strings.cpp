#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    string s1, s2;
    cin >> s1 >> s2;
    if(s1.length() != s2.length())
    {
        cout << "NO";
        return 0;
    }

    vector<pair<char,char>> v;
    int len = s1.length();
    for(int i = 0; i < len; i++)
        if(s1[i] != s2[i])
            v.push_back(make_pair(s1[i], s2[i]));

    if(v.size() == 2 && v[0].first == v[1].second && v[0].second == v[1].first)
        cout << "YES";
    else
        cout << "NO";
}