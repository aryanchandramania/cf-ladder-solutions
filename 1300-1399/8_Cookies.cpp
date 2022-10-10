#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int n, odds = 0, x;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> x;
        if(x & 1)
            odds++;
    }

    if(odds & 1)
        cout << odds;
    else 
        cout << n - odds;
}