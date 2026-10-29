#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int m;
        cin >> m;
        string s;
        cin >> s;
        int count = 0;
        for(int j = 0; j < m;) {
            if(s[j]==s[j+1] && s[j+1]==s[j+2]) {
                count++;
                j+=3;
            }
            else {
                j++;
            }
        }
        cout << count << '\n';
    }
}