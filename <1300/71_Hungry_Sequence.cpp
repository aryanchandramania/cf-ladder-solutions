#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int n, i = 0;
    cin >> n;
    int prime[(int)1e7] = {0};

    for (int p = 2; p <= 1e7; p++)
    {
        if (prime[p] == 0)
        {
            cout << p << " ";
            if (++i == n)
                break;
            for (int j = p * p; j <= 1e7; j += p)
                prime[j] = 1;
        }
    }
}