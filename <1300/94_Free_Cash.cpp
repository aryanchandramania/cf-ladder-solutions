#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int n;
    cin >> n;
    map<pair<int, int>, int> mappy;
    while (n--)
    {
        pair<int, int> p;
        cin >> p.first >> p.second;
        mappy[p]++;
    }
    int ans = 1;
    for (auto i : mappy)
    {
        if (i.second > ans)
            ans = i.second;
    }
    cout << ans;
}