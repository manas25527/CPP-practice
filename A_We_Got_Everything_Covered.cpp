#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        int n, k;
        cin >> n >> k;
        string main_string = "";
        for (int j = 0; j < k; j++)
        {
            main_string += (char)('a'+j);
        }
        string out_string = "";
        for (int j = 0; j < n; j++)
        {
            out_string += main_string;
        }
        cout << out_string << '\n';
    }
    return 0;
}