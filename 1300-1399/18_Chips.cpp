#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int n, m;
    cin >> n >> m;

    int total_circle = n * (n + 1) / 2;
    m = m % total_circle;
    cout << m - (((int)sqrt(8.0*m + 1) - 1) / 2)*(((int)sqrt(8.0*m + 1) - 1) / 2 + 1) / 2;
}