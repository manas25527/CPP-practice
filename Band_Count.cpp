#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long long H, W;
    int N, Q;
    cin >> H >> W >> N >> Q;

    vector<long long> R(N), C(N);
    for (int i = 0; i < N; ++i) {
        cin >> R[i] >> C[i];
    }

    // Sort row and column coordinates independently
    sort(R.begin(), R.end());
    sort(C.begin(), C.end());

    // Process each query using binary search
    for (int q = 0; q < Q; ++q) {
        int type;
        cin >> type;
        if (type == 1) {
            long long u, d;
            cin >> u >> d;
            auto it1 = lower_bound(R.begin(), R.end(), u);
            auto it2 = upper_bound(R.begin(), R.end(), d);
            cout << (it2 - it1) << "\n";
        } 
        else {
            long long l, r;
            cin >> l >> r;
            auto it1 = lower_bound(C.begin(), C.end(), l);
            auto it2 = upper_bound(C.begin(), C.end(), r);
            cout << (it2 - it1) << "\n";
        }
    }

    return 0;
}