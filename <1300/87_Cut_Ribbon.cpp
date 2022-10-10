#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int x = 0;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            int sum = n - (i * a) - (j * b);
            if (sum < 0 || sum % c)
            {
                continue;
            }
            int k = (n - i * a - j * b) / c;
            x = max(x, i + j + k);
        }
    }
    cout << x;
}   