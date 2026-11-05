#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, m, a;
    cin >> n >> m >> a;
    long long int x1 = (n%a==0)?n/a:(n/a)+1;
    long long int x2 = (m%a==0)?m/a:(m/a)+1;
    cout << x1*x2;
    return 0;
}