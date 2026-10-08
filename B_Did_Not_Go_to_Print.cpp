#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> memory;
    vector<bool> printed(n + 1, false);

    for (int i = 1; i <= n; ++i) {
        char cmd = s[i - 1];
        
        if (cmd == '1') {
            memory.push_back(i);
        } 
        else if (cmd == '2') {
            if (!memory.empty()) {
                printed[memory.back()] = true;
                memory.pop_back();
            } 
            else {
                printed[i] = true;
            }
        } 
        else if (cmd == '3') {
            printed[i] = true;
        }
    }

    vector<int> not_printed;
    for (int i = 1; i <= n; ++i) {
        if (!printed[i]) {
            not_printed.push_back(i);
        }
    }

    cout << not_printed.size() << "\n";
    for (int i = 0; i < not_printed.size(); ++i) {
        cout << not_printed[i] << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}