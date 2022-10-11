#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n,x=0;
    cin>>n;
    for(long i=1;i<=n;i++)
    {
        string str;
        cin>>str;
        if(str[1]=='+')
            x++;
        else
            x--;
    }
    cout<<x<<endl;
    return 0;
}