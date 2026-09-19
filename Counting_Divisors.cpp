#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    const int MAX = 1e6;
    vector <int> div(MAX + 1, 0);
    for (int i = 1; i <= MAX; i++)
    {
        for (int j = i; j <= MAX; j+=i)
        {
            div[j]++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
        cout << div[x] << "\n"; 
    }
    return 0;
}