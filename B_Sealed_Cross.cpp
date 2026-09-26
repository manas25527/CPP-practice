#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= (n/2)+1; i++)
    {
        for (int j = i; j <= n/2; j++)
        {
            cout << 0 << ' ';
        }
        cout << 1 << ' ';
        for (int j = 1; j <= i/2; j++)
        {
            cout << 0 << ' ';
        }
        if(i!=1)cout << 1 << ' ';
        for (int j = 1; j <= i+1; j++)
        {
            cout << 0 << ' ';
        }
        cout << '\n';
    }
    
    return 0;
}