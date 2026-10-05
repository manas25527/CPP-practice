#include <bits/stdc++.h>
using namespace std;

int main()
{
    while(true) {
        int a, b;
        cin >> a >> b;
        if(a<=0||b<=0) break;
        int s = min(a, b);
        int e = max(a, b);
        int sum = 0;
        for (int i = s; i <= e; i++)
        {
            cout << i << ' ';
            sum += i;
        }
        cout << "sum =" << sum << '\n';
    }
    return 0;
}