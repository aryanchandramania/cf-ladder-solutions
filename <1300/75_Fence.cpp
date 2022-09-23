#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int n, k, mn;
    cin >> n >> k;

    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    int ans = 1, sum = mn = accumulate(arr, arr + k, 0);
    
    for(int i = k; i < n; i++)
    {
        int temp_sum = sum - arr[i - k] + arr[i];
        if(mn > temp_sum)
        {
            ans = i - k + 2;
            mn = temp_sum;
        }
        sum = temp_sum;
    }

    cout << ans;
}