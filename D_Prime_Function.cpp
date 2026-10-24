#include <bits/stdc++.h>
using namespace std;

bool prime(int a) {
    if(a<2) return false;
    for (int i = 2; i*i <= a; i++)
    {
        if(a%i==0) return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if(prime(a)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}