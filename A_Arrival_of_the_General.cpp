#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    if(n==2) {
        if(v[0]>=v[1]) cout << 0;
        else cout << 1;
    }
    else {
        int min_ind = 0, max_ind = 0, min_ele = v[0], max_ele = v[0];
        for (int i = 1; i < n; i++)
        {
            if(v[i]>max_ele) {
                max_ind = i;
                max_ele = v[i];
            }
            if(v[i]<=min_ele) {
                min_ind = i;
                min_ele = v[i];
            }
        }
        int sec = n-1-min_ind + max_ind;
        if(min_ind<max_ind) cout << sec-1;
        else cout << sec;
    }
    return 0;
}