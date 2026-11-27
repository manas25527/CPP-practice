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
    if(n==1) cout << 0;
    else {
        int minp = v[0];
        int maxp = v[0];
        int amaz = 0;
        for (int i = 1; i < n; i++)
        {
            if(minp > v[i]){
                minp = v[i];
                amaz++;
            }
            if(maxp < v[i]){
                maxp = v[i];
                amaz++;
            }
        }
        cout << amaz;
    }
    return 0;
}