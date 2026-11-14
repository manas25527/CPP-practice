#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        vector<int> v(7);
        int sum = 0;
        for(int i = 0; i < 7; i++)
        {
            cin >> v[i];
            sum -= v[i];
        }
        cout << sum+(2*(*max_element(v.begin(), v.end()))) << '\n';
    }
    return 0;
}