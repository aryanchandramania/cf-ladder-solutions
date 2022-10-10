#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int mappy[100001] = {0}, n, m;
    cin >> n >> m;
    int arr[n], suffix[n+1] = {0};

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    for(int i = n - 1; i >= 0; i--)
    {
        mappy[arr[i]]++;
        if(mappy[arr[i]] == 1)
            suffix[i] = suffix[i+1] + 1;
        else
            suffix[i] = suffix[i+1];
    }

    while(m--)
    {
        int l;
        cin >> l;
        cout << suffix[l-1] << "\n  ";
    }
}