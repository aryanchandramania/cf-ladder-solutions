#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    map<int,int> mappy;
    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int x, change;
        cin >> x;
        mappy[x]++;
        change = x - 25;
        if(change == 0)
            continue;
        else if (change == 25)
        {
            if(mappy[25] > 0)
                mappy[25]--;
            else
            {
                cout << "NO\n";
                return 0;
            }
        }
        else if (change == 75)
        {
            if(mappy[50] > 0 && mappy[25] > 0)
                mappy[50]--, mappy[25]--;
            else if (mappy[25] > 2)
                mappy[25] -= 3;
            else
            {
                cout << "NO\n";
                return 0;
            }
        }
    }
    cout << "YES";
}