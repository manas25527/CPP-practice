#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    if(n<26) cout << "NO\n";
    else {
        set <char> alphabets(s.begin(), s.end());
        (alphabets.size() == 26)? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}