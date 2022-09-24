#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    string s, s1, s2;
    int len;
    cin >> len;
    cin >> s;
    s1 = s.substr(0, len), s2 = s.substr(len, 2 * len - 1);

    bool flag1 = false, flag2 = false;

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    
    for(int i = 0; i < len; i++)
    {
        if(s1[i] >= s2[i])
            flag1 = true;
        if(s1[i] <= s2[i])
            flag2 = true;
    }

    if(flag1 == false || flag2 == false)
        cout << "YES";
    else
        cout << "NO";
}