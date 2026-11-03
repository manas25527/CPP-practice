#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    vector<long long int> v(n+2);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < q; i++)
    {
        int l, r, x;
        cin >> l >> r >> x;
        v[l]+=x; v[r+1]-=x;
    }
    for (int i = 1; i <= n; i++)
    {
        v[i] += v[i-1];
        cout << v[i] << (i==n?"":" ");
    }
    return 0;
}