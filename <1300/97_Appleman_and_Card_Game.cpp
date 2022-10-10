#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int n, k, ans = 0;
    cin >> n >> k;
    vector<int> v;
    map<char, int> mappy;

    for (int i = 0; i < n; i++)
    {
        char x;
        cin >> x;
        mappy[x]++;
    }

    for (auto i : mappy)
        v.push_back(i.second);

    sort(v.begin(), v.end(), greater<int>());

    for (auto i : v)
    {
        ans += min(i, k) * min(i,k);
        k = k - min(i, k);
        if (k == 0)
            break;
    }

    cout << ans;
}