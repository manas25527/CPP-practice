#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    
    int min_val = 1e9 + 7;
    int max_val = -1;
    
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        min_val = min(min_val, a);
        max_val = max(max_val, a);
    }
    
    if ((max_val - min_val) % 2 == 0) {
        cout << "EVEN\n";
    } else {
        cout << "ODD\n";
    }
    
    return 0;
}