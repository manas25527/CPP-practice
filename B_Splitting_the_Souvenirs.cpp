#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    if((n*(n+1))%4==0) cout << (n*(n+1))/4;
    else cout << -1;
    return 0;
}