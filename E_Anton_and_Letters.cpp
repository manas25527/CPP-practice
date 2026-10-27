#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    set <char> chars;
    if(s.length()==2) cout << 0;
    else {
        for (int i = 1; i < s.length(); i+=3)
        {
            chars.insert(s[i]);
        }
        cout << chars.size();
    }
    return 0;
}