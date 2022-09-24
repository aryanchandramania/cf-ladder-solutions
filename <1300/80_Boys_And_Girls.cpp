#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    freopen("input.txt","r",stdin); 
    freopen("output.txt","w",stdout);
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < min(n, m); i++)
    {
        if (n > m)
            cout << "BG";
        else
            cout << "GB";
    }

    for (int i = 0; i < max(n, m) - min(n, m); i++)
    {
        if (n > m)
            cout << "B";
        else
            cout << "G";
    }
}