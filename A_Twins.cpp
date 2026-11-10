#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int total_sum = accumulate(v.begin(), v.end(), 0);
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    int current_sum = 0, coins = 0, i = 0;
    while(current_sum<=total_sum) {
        current_sum += v[i];
        total_sum -= v[i];
        i++; coins++;
    }
    cout << coins;
    return 0;
}