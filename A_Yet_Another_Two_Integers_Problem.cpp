#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        long int a, b;
        cin >> a >> b;
        int diff = abs(a-b);
        cout << (diff+9)/10 << '\n';
    }
    return 0;
}