#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int n, k, mx = INT32_MIN;
    cin >> n >> k;

    while(n--)
    {
        int f, t;
        cin >> f >> t;
        int joy = f + k - max(k,t);
        mx = max(mx, joy);
    }
    cout << mx;
}