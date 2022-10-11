#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int R, C, r = 0, c = 0;
    cin >> R >> C;
    char cake[R+1][C+1], trash;

    for(int i = 1; i <= R; i++)
    {
        for(int j = 1; j <= C; j++)
        {
            cin >> cake[i][j];
            if(cake[i][j]=='S')
            {
                cake[i][0] = 'S';
                cake[0][j] = 'S';
            }
        }
    }

    for(int i = 1; i <= R; i++)
        if(cake[i][0] == 'S')
            c++;

    for(int i = 1; i <= C; i++)
        if(cake[0][i] == 'S')
            r++;

    cout << R*C - r*c;
}