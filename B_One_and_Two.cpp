#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<int> v(n+1);
        for(int j = 1; j <= n; j++)
        {
            cin >> v[j];
        }
        int twos1 = 0;
        if(v[1]==2) twos1++;
        int tows2 = 0;
        for (int j = 2; j <= n; j++)
        {
            if(v[j]==2) tows2++;
        }
        if(twos1==tows2) cout << 1 << '\n';
        else {
            bool check = false;
            for (int j = 2; j < n; j++)
            {
                // pr1 *= v[j]; pr2 /= v[j];
                if(v[j]==2) {
                    twos1++;
                    tows2--;
                }
                if(twos1==tows2) {
                    cout << j << '\n';
                    check = true;
                    break;
                }
            }
            if(!check) cout << -1 << '\n';
        }
    }
    return 0;
}