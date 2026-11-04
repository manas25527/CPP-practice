#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        int a, b, c;
        cin >> a >> b >> c;
        cout << m - min({a, b, c}) << '\n';
    }
    return 0;
}