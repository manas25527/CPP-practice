#include <bits/stdc++.h>
using namespace std;

bool check_lucky_number(int a) {
    while(a!=0) {
        if(a%10!=4 && a%10!=7) return false;
        a /= 10;
    }
    return true;
}

int main()
{
    int n, m;
    cin >> n >> m;
    bool exist = false;
    for (int i = n; i <= m; i++)
    {
        if(check_lucky_number(i)) {
            cout << i << ' ';
            exist = true;
        }
    }
    if(!exist) cout << -1;    
    return 0;
}