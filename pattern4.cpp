#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < 2*(n-i); j++)
        {
            cout << ' ';
        }
        if(i==1) cout << i;
        else {
            for (int j = i; j >= 1; j--)
            {
                cout << j << ' ';
            }
            for (int j = 2; j <=i; j++)
            {
                cout << j;
                if(j!=i) cout << ' ';
            }
        }
        cout << '\n';
    }
    
    return 0;
}