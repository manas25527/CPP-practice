#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        string a;
        cin >> a;
        string temp2 = a;
        int m = temp2.size();
        for (int j = 0; j < m; j++)
        {
            temp2[j] = a[m-1-j];
        }
        if(temp2 == a && a.size()%2!=0) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}