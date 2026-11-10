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
    long long int current_sum = accumulate(v.begin(), v.begin()+k, 0LL);
    // long long int current_sum = 0;
    // for (int i = 0; i < k; i++)
    // {
    //     current_sum += v[i];
    // }
    long long int max_sum = current_sum;
    int ind = 0;
    for (int i = 0; i < n-k; i++)
    {
        current_sum = current_sum - v[i] + v[i+k];
        if(current_sum > max_sum) {
            max_sum = current_sum;
            ind = i+1;
        }
    }
    cout << ind << '\n' << max_sum;
    return 0;
}