#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // Approach - 1
    /* vector<int> freq(100001, 0);
    int max_app = -1;
    for (int i = 0; i < n; i++)
    {
        freq[v[i]]++;
    }
    int ind = max_element(freq.begin(), freq.end()) - freq.begin();
    if(freq[ind]>n/2) max_app = ind;
    cout << max_app << '\n'; */

    // Approach - 2
    int candidate = 0;
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if(count == 0) candidate = v[i];
        if(v[i] == candidate) count++;
        else count--;
    }
    return 0;
}