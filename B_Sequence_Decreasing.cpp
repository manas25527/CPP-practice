#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int min_val = 2e9 + 7;
        for (int i = 0; i < n; ++i) {
            int a;
            cin >> a;
            min_val = min(min_val, a);
        }
        if (min_val <= n-1) cout << n << "\n";
        else  cout << 0 << "\n";
    }
    return 0;
}