#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int ans = 0;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            for (int k = 1; k <= c; k++)
            {
                int x = i * j * k, y = 1;
                for (int c = 2; c * c <= x; c++)
                {
                    int cn = 1;
                    while (x % c == 0)
                    {
                        x /= c;
                        cn++;
                    }
                    y = y * cn % (1 << 30);
                }
                if (x > 1)
                    y *= 2;
                ans = (ans + y) % (1 << 30);
            }
        }
    }
    cout << ans << endl;
}