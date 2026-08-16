#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, maxcount = 0;
    cin >> n;
    string ans[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ans[i];
        transform(ans[i].begin(), ans[i].end(), ans[i].begin(), ::tolower);
    }
    
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (ans[i] == ans[j])
            {
                count++;
            }
        }
        if (count>maxcount)
        {
            maxcount = count;
        }
    }
    
    cout << maxcount;
    return 0;
}