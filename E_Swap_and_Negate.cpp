
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<long long> odd, even;
        long long sum = 0;
        for(int j = 0; j < n; j++)
        {
            long long x;
            cin >> x;
            sum += x;
            if(j % 2 == 0) odd.push_back(x);
            else even.push_back(x);
        }
        sort(odd.begin(), odd.end());
        sort(even.begin(), even.end());
        long long ans = sum;
        long long oddSum = 0, evenSum = 0;
        int limit = min(odd.size(), even.size());
        for(int k = 0; k < limit; k++)
        {
            oddSum += odd[k];
            evenSum += even[k];
            long long curr = sum - 2 * (oddSum + evenSum);
            ans = max(ans, curr);
        }
        cout << ans << '\n';
    }
    return 0;
}
