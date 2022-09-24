#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int n;
    cin >> n;
    int sum1 = 0, sum2 = 0;
    bool flag = false;

    for(int i = 0; i < n; i++)
    {
        int temp1, temp2;
        cin >> temp1 >> temp2;
        sum1 += temp1, sum2 += temp2;
        if((temp1&1 && !(temp2&1)) || (!(temp1&1) && temp2&1))
            flag = true;
    }

    if(sum1&1 && sum2&1 && flag)
        cout << 1;
    else if  (!(sum1&1) && !(sum2&1))
        cout << 0;
    else
        cout << -1;
}