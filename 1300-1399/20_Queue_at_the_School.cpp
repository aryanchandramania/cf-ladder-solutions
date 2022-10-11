#include <bits/stdc++.h>
using namespace std;

void swap(char* a, char* b)
{
    char temp = *a;
    *a = *b; 
    *b = temp;
}

int main()
{
    int n, t;
    cin >> n >> t;
    char s[n];
    cin >> s;
    
    while(t--)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if(s[i] == 'B' && s[i+1] == 'G')
            {
                swap(&s[i], &s[i+1]);
                i++;
            }
        }
    }

    for (int i = 0; i < n; i++)
        cout << s[i];
}