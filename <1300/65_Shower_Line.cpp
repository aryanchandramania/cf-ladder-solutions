#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int g[5][5];
    int ans = 0, temp;

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            cin >> g[i][j];
    
    int perm[5] = {0, 1, 2, 3, 4};
    do
    {
        temp = (g[perm[0]][perm[1]] + g[perm[1]][perm[0]]) + (g[perm[2]][perm[3]] + g[perm[3]][perm[2]]) * 2 + (g[perm[1]][perm[2]] + g[perm[2]][perm[1]])+ (g[perm[3]][perm[4]] + g[perm[4]][perm[3]]) * 2;
        if (temp > ans)
            ans = temp;
    } while (next_permutation(perm, perm + 5));

    cout << ans;
}