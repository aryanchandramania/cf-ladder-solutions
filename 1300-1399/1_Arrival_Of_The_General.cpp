#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    pair<int,int> arr[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i].first;
        arr[i].second = -i-1 ;
    }

    sort(arr, arr + n);
    int ans = arr[0].second + n - 1 - arr[n-1].second;
    if(arr[0].second > arr[n-1].second)
        ans--;
    cout << ans;
}