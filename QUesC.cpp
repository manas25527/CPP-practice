#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector <int> c(n);
    for (int &x : c) 
        cin >> x;
    vector<int> state(k + 1, 0);
    vector<int> s;
    vector<int> ans;
    for (int x : c)
    {
        if (state[x] == 2) {
            cout << -1 << '\n';
            return 0;
        }

        if (state[x] == 0) {
            state[x] = 1;
            s.push_back(x);
        }

        else {
            while (s.back() != x) {
                int y = s.back();
                s.pop_back();

                state[y] = 2;
                ans.push_back(y);
            }

        }
    }

    while (!s.empty()) {
        int x = s.back();
        s.pop_back();

        state[x] = 2;
        ans.push_back(x);
    }

    if ((int)ans.size() != k) {
        cout << -1 << '\n';
        return 0;
    }

    for (int x : ans)
        cout << x << ' ';
    cout << '\n';

    return 0;
}