#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    char mat[4][4]; 

    for(int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            cin >> mat[i][j];

    for(int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int count = 0;
            char key = mat[i][j];
            if(key == mat[i][j+1])
                count++;
            if(key == mat[i+1][j])
                count++;
            if(key == mat[i+1][j+1])
                count++;
            if(count >= 2 || count == 0)
            {
                cout << "YES";
                return 0;
            }
        }
    }

    cout << "NO";
}