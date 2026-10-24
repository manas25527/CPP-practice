#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n%2 == 0) {
        cout << "NO\n";
        return 0;
    }
    string s = "";
    while (n > 0) {
        s += to_string(n % 2);
        n /= 2;
    }
    string rev = s;
    reverse(rev.begin(), rev.end());
    if(s == rev) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}