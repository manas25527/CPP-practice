#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        vector<long long int> arr(m);
        for(int i = 0; i < m; i++)
        {
            cin >> arr[i];
        }
        long long int sum = accumulate(arr.begin(), arr.end(), 0LL);
        long long int r = sqrt(sum);
        if(r*r==sum) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}