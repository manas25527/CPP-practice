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
    int count = 1, max = 1;
    for (int i = 0; i < n-1; i++)
    {
        if(v[i]<=v[i+1]) count++;
        else count=1;
        if(count > max) max = count;
    }
    cout << max;
    return 0;
}