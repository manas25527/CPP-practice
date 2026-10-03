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
        long long int fact = 1;
        for(int i = 2; i <= a; i++) fact *= i;
        cout << fact << '\n';
    }
    return 0;
}