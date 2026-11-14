#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    bool check9 = false;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        if(v[i]==9) check9 = true;
    }
    if(!check9) cout << -1;
    else cout << *min_element(v.begin(), v.end());
    return 0;
}