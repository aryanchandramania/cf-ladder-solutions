#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int x;
    cin >> x;

    if(x <= 10 || x > 21)
        cout << 0;
    else if((10 < x && x < 20) || x == 21)
        cout << 4;
    else if(x == 20)
        cout << 15;
}