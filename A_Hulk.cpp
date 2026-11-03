#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s = "", s_even = "I hate", s_odd = "I love";
    for (int i = 0; i < n; i++)
    {
        (i%2==0)? s += s_even : s += s_odd;
        (i!=n-1)? s += " that " : s += " it";
    }
    cout << s;
    return 0;
}