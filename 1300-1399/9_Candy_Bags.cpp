#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int n, x = 1;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j+=2)
        {
            cout << x << " " << (n*n - x + 1) << " ";
            x++;
        }
        cout << "\n";
    }
}