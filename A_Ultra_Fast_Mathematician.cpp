#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    string XOR = "";
    for (int i = 0; i < a.size(); i++)
    {
        XOR += (a[i]!=b[i])?'1':'0';
    }
    cout << XOR;
    return 0;
}