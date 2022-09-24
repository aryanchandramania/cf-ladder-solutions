#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int n, count = 0;
    cin >> n;

    for(int a = 2; a <= n ; a++)
    {
        for(int b = 3; b <= a; b++)
        {
            double hypo = sqrt((double)a*a + b*b);
            if((int)hypo == hypo && hypo <= n)
                count++;
        }
    }

    cout << count;
}