#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    vector<int> v[5001];
    for(int i = 0; i < 2*n; i++)
    {
        int temp;
        cin >> temp;
        v[temp].push_back(i + 1);
    }

    string ans = "";
    for(int i = 0; i < 5001; i++)
    {
        int size = v[i].size();
        if (size % 2 == 1)
        {
            cout << -1;
            return 0;
        }

        for (int j = 0; j < size; j += 2)
            ans += "" + to_string(v[i][j]) + " " + to_string(v[i][j + 1]) + "\n";
    }
    cout << ans;
}