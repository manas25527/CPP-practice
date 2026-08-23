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
        int x = 0;
        for (int j = 0; j < m-1; j++)
        {
            if(arr[j] == arr[j+1])
            {
                x = 1;
                break;
            }
            else
                x = 0;
        }
        
        if(x) cout << "NO\n";
        else cout << "YES\n";
    }
    
    return 0;
}