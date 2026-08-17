#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a, b, c, d;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c >>d;
        (a==b&&b==c&&c==d?cout<<"YES\n":cout<<"NO\n");
    }
    
    return 0;
}