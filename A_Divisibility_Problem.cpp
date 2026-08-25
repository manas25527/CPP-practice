#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long int a, b;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if(a%b==0) cout << 0 << '\n';
        else cout << b-(a%b) << '\n';
    }
    return 0;
}