#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int n;
    cin >> n;
    int arr[n], count_hundred = 0, count_two_hundred = 0;
    string ans = "NO";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i] == 100)   count_hundred++;
        else                count_two_hundred++;
    }

    int total_weight = count_hundred + 2 * count_two_hundred;
    if (total_weight % 2 == 0)
    {
        int half = total_weight / 2 * 100;
        for (int i = 0; i <= count_two_hundred; i++)
        {
            if(i * 200 <= half && half <= i * 200 + count_hundred * 100)
                ans = "YES";
        }
    }
    cout << ans;
}