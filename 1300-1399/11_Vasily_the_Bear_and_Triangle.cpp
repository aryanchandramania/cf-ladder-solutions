#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int x, y;
    cin >> x >> y;

    if(x > 0)
    {
        if(y > 0)
            cout << 0 << ' ' << x + y << ' ' << x + y << ' ' << 0;
        else
            cout << 0 << ' ' << -x + y << ' ' << x - y << ' ' << 0;
    }
    else
    {
        if(y > 0)
            cout << x - y << " 0 0 " << -x + y;
        else
            cout << x + y << " 0 0 " << x + y;
    }
}