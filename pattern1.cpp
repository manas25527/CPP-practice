#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
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
    
    return 0;
}