#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int n;
    cin >> n;

    int arr[n], current = 0, mx = 0, x, count = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        if(x == 0)
            arr[i] = 1;
        else 
        {
            count++;
            arr[i] = -1;
        }

        current += arr[i];
        if(current < 0)
            current = 0;
        if(current > mx)
            mx = current;
    }
    if(mx == 0)
        cout << count - 1;
    else
        cout << mx + count; 
}