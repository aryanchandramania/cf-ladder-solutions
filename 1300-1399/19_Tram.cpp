#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, maxi = 0, a, b, total = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a >> b;
        total = total + b - a;
        maxi = max(maxi, total);
    }
    cout << maxi;
}