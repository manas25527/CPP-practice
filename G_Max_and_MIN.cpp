#include <bits/stdc++.h>
using namespace std;

int mini(vector<int> &v) {
    int minimum = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        if(v[i]<minimum) minimum = v[i];
    }
    return minimum;
}

int maxi(vector<int> &v) {
    int maximum = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        if(v[i]>maximum) maximum = v[i];
    }
    return maximum;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout << mini(v) << ' ' << maxi(v);
    return 0;
}