#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int x = 1, y, k, n;
    cin >> y >> k >> n;
    bool ansExists = false;

    x = (y/k + 1) * k - y;
    while(x+y <= n)
    {
        cout << x << " ";
        x += k;
        ansExists = true;
    }

    if(!ansExists)
        cout << -1;
}