#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int n, k;
    cin >> n >> k;

    int arr[n], ans = 0;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for(int i = 0; i < n; i++)
    {
        if(arr[i] != arr[n-1])
            ans = i + 1;
    }

    if(ans >= k)
        ans = -1;
    cout << ans;
}