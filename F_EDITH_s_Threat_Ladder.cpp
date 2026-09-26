#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, k;
    cin >> n >> k;
    long long int count = 0, a = 1, b = 1, c;
    for (int i = 3; i <= n; i++)
    {
        c = a+b;
        if(c%k==0) count++;
        a = b;
        b = c;
    }
    cout << count;
    return 0;
}