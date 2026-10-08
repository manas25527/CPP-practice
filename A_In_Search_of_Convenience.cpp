#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int xo, yo, r;
        cin >> xo >> yo >> r;
        cout << xo+r << ' ' << yo << '\n';
    }
    return 0;
}