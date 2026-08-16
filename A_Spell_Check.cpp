#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int l;
        cin >> l;
        string s;
        cin >> s;
        
        sort(s.begin(), s.end());

        if(s == "Timru") cout << "YES\n";
        else cout << "NO\n";
    }
    
    return 0;
}