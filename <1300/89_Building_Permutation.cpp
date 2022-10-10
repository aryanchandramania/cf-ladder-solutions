#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int n, ans = 0;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    for(int i = 0; i < n; i++)
        ans += abs(i + 1 - arr[i]);

    cout << ans;
}