#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int n, m;
    cin >> n >> m;

    int correct[n], wrong[m];
    for(int i = 0; i < n + m; i++)
        if(i <= n - 1)  cin >> correct[i];
        else            cin >> wrong[i - n];
    
    sort(correct, correct + n);
    sort(wrong, wrong + m);
    int minimum_wrong = wrong[0], maximum_correct = correct[n-1], minimum_correct = correct[0];

    if(max(minimum_correct * 2, maximum_correct) < minimum_wrong)
        cout << max(minimum_correct * 2, maximum_correct);
    else    
        cout << -1; 
}