#include <bits/stdc++.h>
using namespace std;

void solve() {
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
    int l, r;
    cin >> l >> r;
    if (l > 0 || r < 0) {
        cout << r - l << "\n";
        continue;
    }
    if (abs(l) > r) {
        swap(l, r);
        l = -l;
        r = -r;
    }
    if (abs(l) == r) {
        cout << 0 << "\n";
        continue;
    }
    int total_sum = 0;
    for (int i = -l + 1; i <= r; ++i) {
        total_sum += i;
    }
    int current_sum = 0;
    int m = 0;
    for (int i = r; i >= 1; --i) {
        current_sum += i;
        m++;
        if (current_sum >= total_sum) {
            break;
        }
    }
    cout << m - 1 << "\n";
    }
    return 0;
}