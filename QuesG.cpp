#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n, k;
        cin >> n >> k;

        if (k % 4 == 2 || k % 4 == 3) {
            cout << -1 << '\n';
            continue;
        }

        if (k % 4 == 1 && n % 2 == 0) {
            cout << -1 << '\n';
            continue;
        }

        vector<vector<int>> a(n, vector<int>(n, 0));

        int remaining = k;

        if (k % 4 == 1) {
            int c = n / 2;
            a[c][c] = 1;
            remaining -= 1;
        }

        struct Orbit {
            int first;
            array<pair<int,int>, 4> cells;
        };

        vector<Orbit> orbits;

        vector<vector<bool>> seen(n, vector<bool>(n, false));

        auto rotate90 = [&](int r, int c) {
            return pair<int,int>{c, n - 1 - r};
        };

        for (int r = 0; r < n; ++r) {
            for (int c = 0; c < n; ++c) {
                if (seen[r][c])
                    continue;

                array<pair<int,int>, 4> cells;
                int cr = r, cc = c;

                for (int i = 0; i < 4; ++i) {
                    cells[i] = {cr, cc};
                    seen[cr][cc] = true;
                    tie(cr, cc) = rotate90(cr, cc);
                }

                if (cells[0] == cells[1])
                    continue;

                int first = n * n;
                for (auto [x, y] : cells)
                    first = min(first, x * n + y);

                orbits.push_back({first, cells});
            }
        }

        sort(orbits.begin(), orbits.end(),
             [](const Orbit& A, const Orbit& B) {
                 return A.first > B.first;
             });

        int need = remaining / 4;

        for (int i = 0; i < need; ++i) {
            for (auto [r, c] : orbits[i].cells)
                a[r][c] = 1;
        }

        for (int r = 0; r < n; ++r) {
            for (int c = 0; c < n; ++c) {
                if (c) cout << ' ';
                cout << a[r][c];
            }
            cout << '\n';
        }
    }

    return 0;
}