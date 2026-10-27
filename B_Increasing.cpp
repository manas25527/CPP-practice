#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        int arr[m];
        for (int j = 0; j < m; j++)
            cin >> arr[j];
        sort(arr, arr+m);
        bool x = false;
        for (int j = 0; j < m-1; j++)
        {
            if(arr[j] == arr[j+1])
            {
                x = true;
                break;
            }
            else
                x = false;
        }
        
        if(x) cout << "NO\n";
        else cout << "YES\n";
    }
    
    return 0;
}