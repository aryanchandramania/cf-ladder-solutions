#include<bits/stdc++.h>
using namespace std;

int main()
{
    int matrix[5][5], oner, onec;

    for(int i = 0; i < 5; i++)
        for(int j = 0; j < 5; j++)
        {
            cin >> matrix[i][j];
            if(matrix[i][j]==1)
            {
                oner = i;
                onec = j;
                break;
            }
        }

    cout << abs(oner-2) + abs(onec-2);
    
    return 0;
}