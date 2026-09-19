#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string name[n];
    for(int i = 0; i < n; i++)
    {
        cin >> name[i];
    }
    int ind; string tar;
    cin >> ind >> tar;
    if(name[ind-1]==tar) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}