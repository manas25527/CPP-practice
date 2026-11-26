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
    int sereja = 0, dima = 0;
    int le = 0, ri = n-1;
    int i = 0;
    if(n==1) sereja+=v[0];
    else 
    {
        while(le<ri) {
            int maxi1 = max(v[le], v[ri]);
            if(maxi1==v[le]) {
                sereja += v[le];
                le++; i++;
            }
            else if(maxi1==v[ri]) {
                sereja += v[ri];
                ri--; i++;
            }
            int maxi2 = max(v[le], v[ri]);
            if(maxi2==v[le]) {
                dima += v[le];
                le++; i++;
            }
            else if(maxi2==v[ri]) {
                dima += v[ri];
                ri--; i++;
            }
            if(ri==le) {
                sereja+=v[le];
                break;
            }
        }
    }
    cout << sereja << ' ' << dima;
    return 0;
}