#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    string s, out = "";
    cin >> s;
    bool stringFullOfOnes = true;

    for(auto ch : s)
    {
        if(ch == '0' && stringFullOfOnes == true)
        {
            stringFullOfOnes = false;
            continue;
        }
        out += ch;
    }

    if(stringFullOfOnes)
        out = out.substr(0, out.size() - 1);
    cout << out;
}