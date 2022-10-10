#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    cin>>s1>>s2;

    int len = s1.length();

    for(int i = 0; i < len; i++)
    {
        if(tolower(s1[i])!=tolower(s2[i]))
        {
            if(tolower(s1[i]) > tolower(s2[i]))
            {
                cout << "1";
                return 0;
            }
            else
            {
                cout << "-1";
                return 0;
            }
        }
    }
    
    cout << "0";
    return 0;
}