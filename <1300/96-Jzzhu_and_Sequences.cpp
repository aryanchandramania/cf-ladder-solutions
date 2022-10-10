#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int m = 1000000007, x, y, n;
    cin >> x >> y >> n;

    /* x, y, y - x, -x, -y, x - y */
    if (n % 6 == 0)
        cout << (x - y + m + m) % m;
    else if (n % 6 == 1)
        cout << (m + x) % m;
    else if (n % 6 == 2)
        cout << (m + y) % m;
    else if (n % 6 == 3)
        cout << (m + m + y - x) % m;
    else if (n % 6 == 4)
        cout << (m - x) % m;
    else if (n % 6 == 5)
        cout << (m - y) % m;
}