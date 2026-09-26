#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b, c, t;
    cin >> a >> b >> c >> t;
    long long int p2 = (t/(lcm(a,b))) + (t/(lcm(a,c))) + (t/(lcm(c,b)));
    long long int p3 = t/(lcm(lcm(a,b),c));
    cout << p2-(2*p3);
    return 0;
}