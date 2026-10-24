#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> arr(n);
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> arr2(m);
    for(int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    int room_alloted = 0;
    for (int i = 0; i < n; i++)
    {
        int strt = arr[i]-k;
        int end = arr[i]+k;
        for (int j = 0; j < m; j++)
        {
            if(end<=arr2[j] && strt>=arr2[j])
            {
                arr2[j] = INT_MIN;
                room_alloted++;
            }
            if(room_alloted==m) break;
        }
    }
    cout << room_alloted;
    return 0;
}