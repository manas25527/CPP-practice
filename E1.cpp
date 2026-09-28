#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        long long int a, b, c;
        cin >> a >> b >> c;
        long long int mx = max({a, b, c});
        long long int mn = min({a, b, c});
        long long int mid = (a+b+c)-mx-mn;
        if((mid+mx-(2*mn))%2==0) {
            cout << ((mx-mid)/2)+(mid-mn) << '\n';
        }
        else cout << "-1\n";
    }
    return 0;
}