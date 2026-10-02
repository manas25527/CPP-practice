#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> v(5);
    // for (int i = 0; i < 5; i++)
    // {
    //     cin >> v[i];
    // }
    // sort(v.begin(), v.end());
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << v[i] << '\n';
    // }
    set<int> s;
    s.insert(5);
    s.insert(3);
    s.insert(8);
    s.insert(9);
    s.insert(6);
    s.insert(7);
    s.insert(4);
    for(auto x:s) cout << x << ' ';
    return 0;
}