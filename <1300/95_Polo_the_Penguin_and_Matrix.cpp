#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int n, m, d;
    cin >> n >> m >> d;

    int fakemat[n*m];
    cin >> fakemat[0];
    for(int i = 1; i < n*m; i++)
    {
        cin >> fakemat[i];
        if((fakemat[i]%d) != (fakemat[i-1]%d))
        {
            cout << -1;
            return 0;
        }
    }

    sort(fakemat, fakemat + n*m);
    int med = fakemat[(n*m)/2], sum = 0;
    for(auto x : fakemat)
    {
        sum += abs(med - x)/d;
    }

    cout << sum;
}