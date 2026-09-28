#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    for(int i=1;i<=t;i++) 
    {
        long long a, b, c;
        cin >> a >> b >> c;
        long long x = min({a, b, c});
        long long sum = a + b + c;
        if (x%2!=sum%2)
            x--;

        if (x < 0) {
            cout << -1 << '\n';
        } else {
            cout << (sum - (3 * x)) / 2 << '\n';
        }
    }

    return 0;
}