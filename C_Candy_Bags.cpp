#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int left = 1, right = n * n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n / 2; j++) {
            cout << left << " " << right << " ";
            left++;
            right--;
        }
        cout << "\n";
    }
    return 0;
}