#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][2];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i][0] >> arr[i][1];
    }
    for (int i = 1; i <= m; i++)
    {
        int min = INT_MIN;
        for (int j = 0; j < n; j++)
        {
            if(arr[j][0] == i)
            {
                if(arr[j][1] > min)
                    min = arr[j][1];
            }
        }
        if(min==INT_MIN) cout << -1 << " ";
        else cout << min << " ";
    }
    
    return 0;
}