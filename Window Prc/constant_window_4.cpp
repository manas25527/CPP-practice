#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<char> blocks(n);
    for(int i = 0; i < n; i++)
    {
        cin >> blocks[i];
    }
    int current_count = 0;
    for (int i = 0; i < k; i++)
    {
        if(blocks[i]=='B') current_count++;
    }
    int max_count = current_count;
    int max_ind = 0;
    if(max_count==k) cout << max_ind << '\n' << k-max_count;
    else {
        for (int i = 0; i < n-k; i++)
        {
            if(blocks[i]=='B') current_count--;
            if(blocks[i+k]=='B') current_count++;
            if(current_count > max_count) {
                max_count = current_count;
                max_ind = i+1;
                if(max_count==k) break;
            }
        }
        cout << max_ind << '\n' << k-max_count;
    }
    return 0;
}