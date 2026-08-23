#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, m, k;
    cin >> n >> m >> k;
    long long int cal[n];
    for (long long int i = 0; i < n; i++)
    {
        cin >> cal[i];
    }
    
    long long int sum = 0;
    long long int eaten[n] = {0};
    for (long long int i = 0; i < n; i++)
    {
        if (i >= m) {
            sum -= eaten[i - m]; 
        }
        
        if ((sum + cal[i]) <= k) 
        {
            cout << "Yes\n";
            sum += cal[i];
            eaten[i] = cal[i];
        }
        else 
        {
            cout << "No\n";
        }
    }
    
    return 0;
}