#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        if(s=="yes")
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    
    return 0;
}