#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int x1, x2, x3, x4;
    cin >> x1 >> x2 >> x3 >> x4;
    if(max({x1,x2,x3,x4})==x4) cout << x2-(x4-x1) << ' ' << x3-(x4-x1) << ' ' << x4-x1;
    else if(max({x1,x2,x3,x4})==x3) cout << x2-(x3-x1) << ' ' << x4-(x3-x1) << ' ' << x3-x1;
    else if(max({x1,x2,x3,x4})==x2) cout << x3-(x2-x1) << ' ' << x4-(x2-x1) << ' ' << x2-x1;
    else if(max({x1,x2,x3,x4})==x1) cout << x3-(x1-x2) << ' ' << x4-(x1-x2) << ' ' << x1-x2;
    return 0;
}