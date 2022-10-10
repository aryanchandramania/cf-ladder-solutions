#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x;
    cin >> x;
    int min = x, max = x, amazing = 0;
    for(int i = 1; i < n; i++)
    {
        cin >> x;
        if(x > max)
        {
            max = x;
            amazing++;
        }
        if(x < min)
        {
            min = x;
            amazing++;
        }
    }

    cout << amazing;
}