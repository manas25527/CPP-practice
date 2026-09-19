#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    int single = (d/k) + (d/l) + (d/m) + (d/n);
    int doublets = (d/(lcm(k,l))) + (d/(lcm(k,m))) + (d/(lcm(k,n))) + (d/(lcm(l,m))) + (d/(lcm(l,n))) + (d/(lcm(m,n)));
    int triplets = (d/(lcm(lcm(k,l),m))) + (d/(lcm(lcm(k,l),n))) + (d/(lcm(lcm(l,m),n))) + (d/(lcm(lcm(k,n),m)));
    int quad = (d/lcm(lcm(lcm(k,l),m),n));
    cout << (single+triplets) - (doublets+quad);
    return 0;
}