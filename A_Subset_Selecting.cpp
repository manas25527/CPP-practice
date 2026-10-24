#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int s, k;
        cin >> s >> k;
        vector<int> v(s);
        vector<int> freq(s+1, 0);
        for(int i = 0; i < s; i++)
        {
            cin >> v[i];
            freq[v[i]]++;
        }
        if(freq[0]==0) {
            cout << 0 << '\n';
            continue;
        }
        int running_sum = 0;
        int max_mex = 0;
        for(int j = 0; j <= s; j++) {
            running_sum += freq[j];
            if ((j > 0 && freq[j] == 0) || running_sum < (j + 1) * k) {
                max_mex = j;
                break;
            }
            max_mex = j + 1;
        }
        cout << max_mex << "\n";
    }
    return 0;
}