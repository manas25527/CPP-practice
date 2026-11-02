#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string vowels = "aeiou";
        int base_count = n / 5;
        int remainder = n % 5;
        string result = "";
        for (int i = 0; i < 5; i++)
        {
            int count = base_count + (i < remainder ? 1 : 0);
            result.append(count, vowels[i]);
        }
        cout << result << "\n";
    }
    return 0;
}