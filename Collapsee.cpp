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
        vector<int> v(m);
        for(int j = 0; j < m; j++)
        {
            cin >> v[j];
        }
        for (int j = 0; j < m-2; j++)
        {
            v[m-2] -= v[j];
        }
        long long ans = abs(v[m-1] - v[m-2]);
        cout << ans << '\n';
    }
    return 0;
}