#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        for (int j = 1; j <= a; j++)
        {
            cout << j << " " << a+(2*j)-1 << " " << a+(2*j) << (j == a ? "" : " ");
        }
        cout << '\n';
    }
    return 0;
}