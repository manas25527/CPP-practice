#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long int a = 0, b = 1, c;
    // cout << a << ' ' << b << ' ';
    for (int i = 0; i < n; i++)
    {
        cout << a << ' ';
        c = a+b;
        a = b;
        b = c;
    }
    
    return 0;
}