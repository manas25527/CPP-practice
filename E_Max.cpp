#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int max = -1;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if(max<a) max = a;
    }
    cout << max;
    return 0;
}