#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    string heading, text;
    getline(cin, heading, '\n');
    getline(cin, text, '\n');
    unordered_map<char, int> mappy, texty;
    for(auto ch : heading)
        mappy[ch]++;
    for(auto ch : text)
        texty[ch]++;
    for(auto ch : texty)
    {
        if(ch.first == ' ')
            continue;
        if (ch.second > mappy[ch.first])
        {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";
}