#include <bits/stdc++.h>
using namespace std;

void matrix_transpose(vector<vector<int>> &arr) {
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i+1; j < arr.size(); j++)
        {
            int temp = arr[j][i];
            arr[j][i] = arr[i][j];
            arr[i][j] = temp;
        }
    }
}

// void matrix_90_cw_rotation(vector<vector<int>> &arr) {
//     matrix_transpose(arr);
//     for (int i = 0; i < arr.size(); i++)
//     {
//         /* code */
//     }
    
// }

void solve(vector<vector<int> > &A) {
    for(int i = 0; i < A[0].size(); i++) {
        int sum = 0;
        for(int j = 0; j < A.size(); j++) {
            sum += A[j][i];
        }
        cout << sum << ' ';
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector <vector<int>> arr(n, vector<int>(m));
    for(int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    solve(arr);
    // matrix_transpose(arr);
    // for(int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << arr[i][j] << ' ';
    //     }
    //     cout << '\n';
    // }
    // for(int i = 0; i < m; i++)
    // {
    //     int min = INT_MAX;
    //     for (int j = 0; j < n; j++)
    //     {
    //         if(arr[i][j]<min && arr[i][j]>0) min = arr[i][j];
    //     }
    //     if(min == INT_MAX) cout << 0 << ' ';
    //     else cout << min << ' ';
    // }
    return 0;
}