#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int n, sum = 0, x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        sum += x;
    }
    
    (sum % n == 0) ? cout << n : cout << n - 1;
}