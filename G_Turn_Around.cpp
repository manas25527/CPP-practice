#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        int n, a;
        cin >> n >> a;
        for (int j = 1; j <= n; j++)
        {
            if((n%2==0 && a%(4*j)==0) || (n%2!=0 && a%((4*j)+1)==0)) cout << "1";
            else cout << "-1";
        }
        cout << '\n';
    }
    return 0;
}