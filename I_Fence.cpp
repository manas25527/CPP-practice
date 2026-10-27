#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int min_ind = 0;
    int current_sum = accumulate(v.begin(), v.begin()+k, 0);
    int min_sum = current_sum;
    for (int i = 1; i < n-k+1; i++)
    {
        current_sum = current_sum - v[i-1] + v[i+k-1];
        if(current_sum<min_sum) {
            min_sum = current_sum;
            min_ind = i;
        }
    }
    cout << min_ind+1;
    return 0;
}