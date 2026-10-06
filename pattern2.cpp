#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << '*';
        if(i!=n-1) cout << ' ';
    }
    cout << '\n';
    for (int i = n-1; i >= 1; i--)
    {
        for (int j = 0; j < n-i; j++)
        {
            cout << ' ';
        }
        cout << '*';
        if(i==1) {
            cout << '\n';
            continue;
        }
        for (int j = 0; j < (2*(i-1))-1; j++)
        {
            cout << ' ';
        }
        cout << "*\n";
    }
    for (int i = 2; i <= n-1; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            cout << ' ';
        }
        cout << '*';
        if(i==1) {
            cout << '\n';
            continue;
        }
        for (int j = 0; j < (2*(i-1))-1; j++)
        {
            cout << ' ';
        }
        cout << "*\n";
    }
    for (int i = 0; i < n; i++)
    {
        cout << '*';
        if(i!=n-1) cout << ' ';
    }
    cout << '\n';
    return 0;
}