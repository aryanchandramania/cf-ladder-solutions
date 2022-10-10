#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    
    int len = a.length();
    int out[len];

    for (int i = 0; i < len; i++)
        cout << !(a[i]==b[i]);
}