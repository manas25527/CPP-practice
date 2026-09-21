#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        long long int a;
        cin >> a;
        cout << (long long int)(floor((a-1)/2)) << '\n';
    }
    
    return 0;
}