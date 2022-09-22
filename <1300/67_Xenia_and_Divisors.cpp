#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int n, x, freq[8] = {0};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        freq[x]++;
    }

    if(freq[4] + freq[6] == n/3 && freq[6] >= freq[3] && freq[2] >= freq[4] && freq[6] - freq[3] == freq[2] - freq[4] && freq[1] == n/3)
    {
        while(freq[4]--)
        {
            freq[2]--, freq[1]--;
            cout << "1 2 4\n";
        }
        while(freq[2]--)
        {
            freq[1]--, freq[6]--;
            cout << "1 2 6\n";
        }
        while(freq[1]--)
        {
            freq[6]--, freq[3]--;
            cout << "1 3 6\n";
        }
    }
    else
        cout << "-1\n";
}

// The possible answers are
// a, ap, apq
// 1 2 4
// 1 2 6
// 1 3 6