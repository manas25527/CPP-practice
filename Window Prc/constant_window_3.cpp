#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> customers(n), grumpy(n);
    for (int i = 0; i < n; i++) cin >> customers[i];
    for (int i = 0; i < n; i++) cin >> grumpy[i];
    long long int total_customers_satisfied = 0LL;
    for (int i = 0; i < n; i++)
    {
        if (grumpy[i] == 0) total_customers_satisfied += customers[i];
    }
    long long int current_sum = 0LL;
    for (int i = 0; i < k; i++)
    {
        if (grumpy[i] == 1) current_sum += customers[i];
    }
    long long int max_sum = current_sum;
    int max_ind = 0;
    for (int i = 0; i < n-k; i++)
    {
        if (grumpy[i] == 1) current_sum -= customers[i];
        if (grumpy[i+k] == 1) current_sum += customers[i + k];
        if (current_sum > max_sum) {
            max_sum = current_sum;
            max_ind = i+1;
        }
    }
    total_customers_satisfied += max_sum;
    cout << max_ind << '\n' << total_customers_satisfied;
    return 0;
}