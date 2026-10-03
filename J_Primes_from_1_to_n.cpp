#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    for (int i = 2; i <= a; i++) {
        bool check = true;
        for (int j = 2; j*j <= i; j++) {
            if(i%j==0) {
                check = false;
                break;
            }
        }
        if(check) cout << i << ' ';
    }
    return 0;
}