#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    if(a==b) {
        cout << "Yes";
        return 0;
    }

    int Le = 0, Ri = n-1;
    while(Le<n && a[Le]==b[Le]) {
        Le++;
    }
    while(Ri>=0 && a[Ri]==b[Ri]) {
        Ri--;
    }

    bool case1 = (a[Le]==b[Ri]);
    for (int i = Le; i < Ri; i++)
    {
        if(a[i+1]!=b[i]) {
            case1 = false;
            break;
        }
    }
    
    bool case2 = (a[Ri]==b[Le]);
    for (int i = Le; i < Ri; i++)
    {
        if(a[i]!=b[i+1]) {
            case2 = false;
            break;
        }
    }
    
    if(case1 || case2) cout << "Yes";
    else cout << "No";
    return 0;
}