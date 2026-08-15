#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a, b, c;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        if(a==b)
            cout << c << '\n';
        else if(b==c)
            cout << a << '\n';
        else if(a==c)
            cout << b << '\n';
    }
    return 0;
}