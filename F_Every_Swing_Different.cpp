#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        int k = a;
        for (int j = 1; j <= a; j++)
        {
            if(j%2==0) cout << j/2 << ' ';
            else{cout << k << ' ';
            k--;}
        }
        cout << '\n';
    }
    return 0;
}