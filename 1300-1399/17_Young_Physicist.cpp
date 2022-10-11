#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x[n],y[n],z[n], xsum = 0, ysum = 0, zsum = 0;

    for(int i = 0; i < n ; i++)
    {
        cin >> x[i] >> y[i] >> z[i];
        xsum += x[i];
        ysum += y[i];
        zsum += z[i];
    }

    if(xsum||ysum||zsum)
        cout<<"NO";
    else
        cout<<"YES";
}