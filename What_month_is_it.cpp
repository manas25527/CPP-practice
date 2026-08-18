#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    if(x+y>12)
        cout << (x+y)-12;
    else
        cout << x+y;
    return 0;
}