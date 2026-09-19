#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, w;
    cin >> n >> w;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    vector<bool> IG(w+1, false);
    
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<=w) IG[arr[i]] = true;
    }
    
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            int sum = arr[i]+arr[j];
            if(sum<=w) IG[sum] = true;
        }
    }
    
    for (int i = 0; i < n-2; i++)
    {
        for (int j = i+1; j < n-1; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                int sum = arr[i]+arr[j]+arr[k];
                if(sum<=w) IG[sum] = true;
            }
        }
    }
    
    int count = 0;
    for (int i = 1; i < IG.size(); i++)
    {
        if(IG[i]) count++;
    }
    
    cout << count;
    return 0;
}