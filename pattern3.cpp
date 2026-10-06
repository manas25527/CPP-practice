#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int k = 1;
    for (int i = 1; i <= n; i++)
    {
        for(int j = 0; j < i; j++) {
        cout << k;
        if(j!=i-1) cout << ' ';
        k++;
        }
        cout << '\n';
    }
    return 0;
}