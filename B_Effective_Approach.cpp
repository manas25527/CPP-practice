#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    vector<int> pos(n+1, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        pos[arr[i]] = i+1;
    }

    int q;
    cin >> q;
    int query[q];
    for (int i = 0; i < q; i++)
    {
        cin >> query[i];
    }

    long long int left = 0, right = 0;
    for (int i = 0; i < q; i++)
    {
        left += pos[query[i]];
        right += (n-pos[query[i]]+1);
    }
    
    cout << left << ' ' << right;
    return 0;
}