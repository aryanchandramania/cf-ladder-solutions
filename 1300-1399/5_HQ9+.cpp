#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int count = 0;
    for(auto i : s)
        if(i == 'H' || i == 'Q' || i == '9')
            count++;

    string out = (count) ? "YES" : "NO";
    cout << out;
}