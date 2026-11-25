#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> tri(n);
    for (int i = 1; i <= n; i++)
    {
        for(int j = 0; j < i; j++) {
            if(j==0 || j==i-1) tri[i-1].push_back(1);
            else tri[i-1].push_back(0);
        }
    }

    if(n>1) {
        for (int i = 2; i < n; i++)
        {
            int sum = tri[i-1][0] + tri[i-1][1];
            for (int j = 0; j < tri[i].size()-2; j++)
            {
                tri[i][j+1] = sum;
                if(j+2 < tri[i-1].size()) sum = sum - tri[i-1][j] + tri[i-1][j+2];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < tri[i].size(); j++)
        {
            cout << tri[i][j] << ' ';
        }
        cout << '\n';
    }
    
    return 0;
}