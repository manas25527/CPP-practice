#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for(int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int best_ind = -1, max_sum = -1;
    cout << "Row Sums: ";
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += arr[i][j];
        }
        cout << sum;
        if(i!=n-1) cout << ' ';
        if(max_sum<sum) {
            best_ind = i;
            max_sum = sum;
        }
    }
    cout << "\nBest row: " << best_ind << '\n';
    return 0;
}