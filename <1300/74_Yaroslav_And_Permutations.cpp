#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    int max_freq = 0, running_freq = 1;

    for(int i = 0; i  < n - 1; i++)
    {
        if(arr[i] == arr[i+1])
            running_freq++;
        else
        {
            max_freq = max(max_freq, running_freq);
            running_freq = 1;
        }
    }
    max_freq = max(max_freq, running_freq);

    if(max_freq > (n+1)/2)
        cout << "NO";
    else
        cout << "YES";
}