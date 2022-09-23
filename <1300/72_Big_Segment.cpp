#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int n, mx = -1, mn = INT_MAX;
    cin >> n;

    int x, y, arr[n][2];
    for (int i = 0; i < n; i++)
    {       
        cin >> x >> y;
        arr[i][0] = x, arr[i][1] = y;
        mx = max(mx, y), mn = min(mn, x);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i][0] == mn && arr[i][1] == mx)
        {
            cout << i + 1;
            return 0;
        }
    }
    cout << -1;
}