#include <bits/stdc++.h>
using namespace std;
#define int long long

bool compare(pair<int, int> a, pair<int, int> b)
{
    if (a.first == b.first)
    {
        return a.second < b.second;
    }
    return a > b;
}

int32_t main()
{
    int n, k, count = 0;
    cin >> n >> k;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }
    sort(v.begin(), v.end(), compare);
    int x = v[k - 1].first;
    int y = v[k - 1].second;
    for (auto i : v)
    {
        if (i.first == x and i.second == y)
        {
            count++;
        }
    }
    cout << count;
}