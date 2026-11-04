#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        long long int alice, bob, piles;
        cin >> alice >> bob >> piles;
        cout << max((alice + piles) - bob, bob - alice) << '\n';
    }
    return 0;
}