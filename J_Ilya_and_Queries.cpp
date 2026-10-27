#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<int> check(s.size(), 0);
    int count = 0;
    for (int i = 0; i < s.size()-1; i++)
    {
        if(s[i]==s[i+1]) {
            count++;
        }
        check[i+1] = count;
    }
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        cout << check[b-1] - check[a-1] << '\n';
    }
    return 0;
}