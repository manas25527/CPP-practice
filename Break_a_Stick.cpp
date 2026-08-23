#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int L[n];
    for (int i = 0; i < n; i++)
    {
        cin >> L[i];
    }
    
    long long int min_diff = INT64_MAX;
    long long int sum1 = accumulate(L, L + n, 0);
    long long int sum2 = 0;
    for(long long int i = 0; i < n-1; i++)
    {
        sum2 += L[i];
        if(abs((2*sum2)-sum1) < min_diff) min_diff = abs((2*sum2)-sum1);
    }
    
    cout << min_diff;
    return 0;
}