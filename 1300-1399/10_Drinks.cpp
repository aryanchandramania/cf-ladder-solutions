#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, x, sum = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        sum+=x;
    } 
    cout << (double)sum / n;
}