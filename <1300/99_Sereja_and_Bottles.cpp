#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int n, a[1001], b[1001], count[1001] = {0};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
        count[b[i]]++;
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        count[b[i]]--;
        if (count[a[i]] == 0)
            ans++;
        count[b[i]]++;
    }

    cout << ans;
}