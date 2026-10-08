#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int t = n%2==1?(n/2)+1:n/2;
    for (int i = 1; i <= t; i++)
    {
        for (int j = 0; j < t-i; j++)
        {
            cout << ' ';
        }
        if(i==1) cout << i;
        else {
            for (int j = i; j >= 1; j--)
            {
                cout << j;
            }
            for (int j = 2; j <= i; j++)
            {
                cout << j;
            }
        }
        cout << '\n';
    }
    
    int x = n%2==1?t-1:t;
    for (int i = x; i >= 1; i--)
    {
        for (int j = 0; j < t-i; j++)
        {
            cout << ' ';
        }
        if(i==1) cout << i;
        else {
            for (int j = i; j >= 1; j--)
            {
                cout << j;
            }
            for (int j = 2; j <= i; j++)
            {
                cout << j;
            }
        }
        cout << '\n';
    }
    
    return 0;
}