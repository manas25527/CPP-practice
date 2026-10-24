#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n+1);
    for(int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if((k>v[i] && k<v[i+1]) || (k<v[i] && k>v[i+1])) count++;
        if(k==v[i]) count++;
    }
    if(k==v[n]) count++;
    cout << count;
    return 0;
}