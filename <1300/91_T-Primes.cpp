#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int a[1000000] = {0};
    for (int i = 2; i <= 1000000; i++)
        if (a[i] == 0)
            for (int j = 2; i * j <= 1000000; j++)
                a[i * j] = 1;

    int n, b, sq;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> b;
        sq = sqrt(b);

        if (b == 1)
            cout << "NO\n";
        else if (sq * sq == b && a[sq] == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
