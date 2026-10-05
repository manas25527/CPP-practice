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
        do {
            cout << a%10 << ' ';
            a /= 10;
        } while(a!=0);
        cout << '\n';
    }
    return 0;
}