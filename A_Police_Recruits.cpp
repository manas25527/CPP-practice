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
    int officers = 0, untreated = 0;
    for (int i = 0; i < n; i++)
    {
        if(v[i]>0) officers+=v[i];
        else {
            if(officers>0) officers--;
            else untreated++;
        }
    }
    cout << untreated;
    return 0;
}