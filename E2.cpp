#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C, X, Y;
    cin >> A >> B >> C >> X >> Y;

    queue<array<int, 3>> q;
    map<array<int, 3>, int> dist;

    q.push({A, B, C});
    dist[{A, B, C}] = 0;

    while (!q.empty()) {
        auto [a, b, c] = q.front();
        q.pop();

        int d = dist[{a, b, c}];

        if (a == b && b == c) {
            cout << d << '\n';
            return 0;
        }

        vector<array<int, 3>> next = {
            {a - X, b, c},
            {a, b - X, c},
            {a, b, c - X},
            {a - Y, b - Y, c},
            {a, b - Y, c - Y}
        };

        for (auto s : next) {
            if (s[0] < 0 || s[1] < 0 || s[2] < 0)
                continue;

            if (!dist.count(s)) {
                dist[s] = d + 1;
                q.push(s);
            }
        }
    }

    cout << -1 << '\n';
}