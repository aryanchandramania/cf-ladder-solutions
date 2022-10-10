#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int n;
    cin >> n;
    int arr[n + 1] = {0}, sorted[n + 1] = {0};

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        sorted[i] = arr[i];
    }

    sort(sorted + 1, sorted + n + 1);
    for (int i = 2; i <= n; i++)
    {
        arr[i] += arr[i - 1];
        sorted[i] += sorted[i - 1];
    }

    int m;
    cin >> m;
    while (m--)
    {
        int type, l, r;
        cin >> type >> l >> r;
        if (type == 1)
            cout << arr[r] - arr[l - 1] << "\n";
        else
            cout << sorted[r] - sorted[l - 1] << "\n";
    }
}