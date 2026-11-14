#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if(a==67) cout << 67 << '\n';
        else cout << a+1 << '\n';
    }
    return 0;
}